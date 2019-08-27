#include"nodelist.h"
Node::Node(int n)   //Node���캯��
{
	num=n;
}

List::List()    //List���캯��
{
	head=NULL;
	tail=NULL;
	nodeCount=0;
}

void List::Insert(int n)    
{
		Node* tmp=new Node(n);//��������ʼ��������ڵ�
		if(head==NULL)//����ͷָ��Ϊ�գ�������δ����
		{
			head=tail=tmp;
			nodeCount++;
		}
	else
	{
		if(n<head->num)//��ǰ����С������ͷ��㱣�������
		{
			tmp->next=head;
			head=tmp;
			nodeCount++;
			return;
		}
		if(n>tail->num)//��ǰ���ݴ�������β��㱣�������
		{
			tail->next=tmp;
			tail=tmp;
			nodeCount++;
			return;
		}
		Node* curr=head;
		 while(curr!=tail)//Ѱ�Һ��ʵĲ���λ��
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
		if(curr->next->num==n)   //�ҵ�Ҫɾ���Ľڵ�
		{
			if(curr->next==tail) tail=curr;    //��Ҫɾ�Ľڵ������һ���ڵ��ʱ��
			else curr->next=curr->next->next;    //Ҫɾ�Ľڵ㲻�����һ���ڵ��ʱ��
			return;
		}
		curr=curr->next;
	}
	cout<<"The Node you want to remove is not in the list !"<<endl;   //��Ҫɾ������������һ�ڵ��б��������
}

void List::Find(int n){
	int count=1;
	Node*curr=head;
	while(curr!=tail)     
	{
		if(curr->num==n)      //ҪѰ�ҵĽڵ㲻�����һ���ڵ��ʱ��
		{
			cout<<"Find node!It's the No."<<count<<" Node;"<<endl;
			return;
		}
		curr=curr->next;
		count++;
	}
	if(curr->num==n)    //��ҪѰ�ҵĽڵ������һ���ڵ��ʱ��
	{
		cout<<"Find node!It's the No."<<count<<" Node;"<<endl;
		return;
	}
	cout<<"Can't find the node;"<<endl;     //��ҪѰ�ҵ���������һ�ڵ��б��������
}

void List::Print(){ 
	Node*temp=head;
	cout<<temp->num;
	while(temp!=tail){
		temp=temp->next;
		cout<<"->"<<temp->num;
	}
}