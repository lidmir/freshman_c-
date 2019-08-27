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
	void Insert(T);//�����и����±���
	void Remove(T);//ɾ���ڵ�
	void Find(T);//���ҽڵ�
	void Print();//��ӡ�����������
};

template<class T> void List<T>::Insert(T n){
	Node<T>* tmp=new Node<T>(n);   //��������ʼ��������ڵ�
	if(head==NULL){     //����ͷָ��Ϊ�գ�������δ����
		head=tail=tmp;
		nodeCount++;
	}
	else{
		if(n<head->num){   //��ǰ����С������ͷ��㱣�������
			tmp->next=head;
			head=tmp;
			nodeCount++;
			return;	
		}
		if(n>tail->num){    //��ǰ���ݴ�������β��㱣�������
			tail->next=tmp;
			tail=tmp;
			nodeCount++;
			return;
		}
		Node<T>* curr=head;
		while(curr!=tail){    //Ѱ�Һ��ʵĲ���λ��
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
		if(curr->next->num==n) { //�ҵ�Ҫɾ���Ľڵ�
			if(curr->next==tail) tail=curr;    //��Ҫɾ�Ľڵ������һ���ڵ��ʱ��
			else curr->next=curr->next->next;    //Ҫɾ�Ľڵ㲻�����һ���ڵ��ʱ��
			return;
		}
		curr=curr->next;
	}
	cout<<"The Node you want to remove is not in the list !"<<endl;   //��Ҫɾ������������һ�ڵ��б��������
}


template<class T> void List<T>::Find(T n){
	int count=1;
	Node<T>*curr=head;
	while(curr!=tail)  {
		if(curr->num==n){   //ҪѰ�ҵĽڵ㲻�����һ���ڵ��ʱ��
			cout<<"Find node!It's the No."<<count<<" Node;"<<endl;
			return;
		}
		curr=curr->next;
		count++;
	}
	if(curr->num==n) { //��ҪѰ�ҵĽڵ������һ���ڵ��ʱ��
		cout<<"Find node!It's the No."<<count<<" Node;"<<endl;
		return;
	}
	cout<<"Can't find the node;"<<endl;     //��ҪѰ�ҵ���������һ�ڵ��б��������
}


template<class T> void List<T>::Print(){ 
	Node<T>*temp=head;
	cout<<temp->num;
	while(temp!=tail){
		temp=temp->next;
		cout<<"->"<<temp->num;
	}
}