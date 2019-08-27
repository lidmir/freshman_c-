#include"nodelist.h"

void main(){
	List list;

	int count;
	cout<<endl<<"Please input the count of the node of the list: ";
	cin>>count;

	srand((unsigned)time(NULL));  //生成随机数，作为链表节点保存的数据
	for(int i=1;i<=count;i++)	{
		 int tmp = rand()%100;
		 list.Insert(tmp);
	}
	list.Print();

	
	int number;
	cout<<endl<<"Please input the number of the node you want to insert: ";
	cin>>number;
	list.Insert(number);
	list.Print();
	cout<<endl<<"Please input the number of the node you want to delete: ";
	cin>>number;
	list.Remove(number);
	list.Print();
	cout<<endl<<"Please input the number of the node you want to search: ";
	cin>>number;
	list.Find(number);
	list.Print();
}

