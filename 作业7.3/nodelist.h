#include<iostream>
#include<time.h>
#include<iomanip>
using namespace std;

class Node
{
public:
	int num;
	Node* next;
	//static int TotalCount;   
public:
	Node(int n);
	~Node();	
};

class List
{
private:
	Node* head;
	Node* tail;
	int nodeCount;//����ڵ������
public:
	List();
	void Insert(int n);//����ڵ�
	void Remove(int n);//ɾ���ڵ�
	void Find(int n);//���ҽڵ�
	void Print();//��ӡ�����������
};
