#include"nodelist.h"
Node::Node(int n)   //Node构造函数
{
	num=n;
}

List::List()    //List构造函数
{
	head=NULL;
	tail=NULL;
	nodeCount=0;
}

void List::Insert(int n)    
{
		Node* tmp=new Node(n);//建立并初始化待插入节点
		if(head==NULL)//链表头指针为空，即链表未建立
		{
			head=tail=tmp;
			nodeCount++;
		}
	else
	{
		if(n<head->num)//当前数据小于链表头结点保存的数据
		{
			tmp->next=head;
			head=tmp;
			nodeCount++;
			return;
		}
		if(n>tail->num)//当前数据大于链表尾结点保存的数据
		{
			tail->next=tmp;
			tail=tmp;
			nodeCount++;
			return;
		}
		Node* curr=head;
		 while(curr!=tail)//寻找合适的插入位置
		 {
			if((curr->num<=n)&&(curr->next->num>n))
			{
				tmp->next=curr->next;
				curr->next=tmp;
				nodeCount++;
				return;
			}
			curr=curr->next;
		 }
	}
}

void List::Remove(int n){
	Node* curr=head;
	while(curr!=tail){
		if(curr->next->num==n)   //找到要删除的节点
		{
			if(curr->next==tail) tail=curr;    //当要删的节点是最后一个节点的时候
			else curr->next=curr->next->next;    //要删的节点不是最后一个节点的时候
			return;
		}
		curr=curr->next;
	}
	cout<<"The Node you want to remove is not in the list !"<<endl;   //当要删除的数不是任一节点中保存的数据
}

void List::Find(int n){
	int count=1;
	Node*curr=head;
	while(curr!=tail)     
	{
		if(curr->num==n)      //要寻找的节点不是最后一个节点的时候
		{
			cout<<"Find node!It's the No."<<count<<" Node;"<<endl;
			return;
		}
		curr=curr->next;
		count++;
	}
	if(curr->num==n)    //当要寻找的节点是最后一个节点的时候
	{
		cout<<"Find node!It's the No."<<count<<" Node;"<<endl;
		return;
	}
	cout<<"Can't find the node;"<<endl;     //当要寻找的数不是任一节点中保存的数据
}

void List::Print(){ 
	Node*temp=head;
	cout<<temp->num;
	while(temp!=tail){
		temp=temp->next;
		cout<<"->"<<temp->num;
	}
}