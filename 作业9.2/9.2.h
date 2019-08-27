#include<iostream>

using namespace std;

template<class T>class Node{
public:	
	T num;
	Node* next;
	static int TotalCount;     

	Node(T num1){num=num1;};
	~Node();
};

template<class T>class List{
	Node<T> *head;
	Node<T> *tail;
	int nodeCount;
public:
	List(){head=tail=NULL;};
	void Insert(T);//在链中附加新表项
	void Remove(T);//删除节点
	void Find(T);//查找节点
	void Print();//打印链表的数据项
};

template<class T> void List<T>::Insert(T n){
	Node<T>* tmp=new Node<T>(n);   //建立并初始化待插入节点
	if(head==NULL){     //链表头指针为空，即链表未建立
		head=tail=tmp;
		nodeCount++;
	}
	else{
		if(n<head->num){   //当前数据小于链表头结点保存的数据
			tmp->next=head;
			head=tmp;
			nodeCount++;
			return;	
		}
		if(n>tail->num){    //当前数据大于链表尾结点保存的数据
			tail->next=tmp;
			tail=tmp;
			nodeCount++;
			return;
		}
		Node<T>* curr=head;
		while(curr!=tail){    //寻找合适的插入位置
			if((curr->num<=n)&&(curr->next->num>n)){
				tmp->next=curr->next;
				curr->next=tmp;
				nodeCount++;
				return;
			}
			curr=curr->next;
		}
	}
}


template<class T> void List<T>::Remove(T n){
	Node<T>* curr=head;
	while(curr!=tail){
		if(curr->next->num==n) { //找到要删除的节点
			if(curr->next==tail) tail=curr;    //当要删的节点是最后一个节点的时候
			else curr->next=curr->next->next;    //要删的节点不是最后一个节点的时候
			return;
		}
		curr=curr->next;
	}
	cout<<"The Node you want to remove is not in the list !"<<endl;   //当要删除的数不是任一节点中保存的数据
}


template<class T> void List<T>::Find(T n){
	int count=1;
	Node<T>*curr=head;
	while(curr!=tail)  {
		if(curr->num==n){   //要寻找的节点不是最后一个节点的时候
			cout<<"Find node!It's the No."<<count<<" Node;"<<endl;
			return;
		}
		curr=curr->next;
		count++;
	}
	if(curr->num==n) { //当要寻找的节点是最后一个节点的时候
		cout<<"Find node!It's the No."<<count<<" Node;"<<endl;
		return;
	}
	cout<<"Can't find the node;"<<endl;     //当要寻找的数不是任一节点中保存的数据
}


template<class T> void List<T>::Print(){ 
	Node<T>*temp=head;
	cout<<temp->num;
	while(temp!=tail){
		temp=temp->next;
		cout<<"->"<<temp->num;
	}
}