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
	int nodeCount;//链表节点的数量
public:
	List();
	void Insert(int n);//插入节点
	void Remove(int n);//删除节点
	void Find(int n);//查找节点
	void Print();//打印链表的数据项
};
