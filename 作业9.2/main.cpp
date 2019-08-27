#include"9.2.h"
#include<stdlib.h>
#include<time.h>
void main(){
	//List<int> list;
	List<double> list;
	int count;
	cout<<endl<<"Please input the count of the node of the list: ";
	cin>>count;
	srand((unsigned)time(NULL));
	for(int i=1;i<=count;i++)	{
		int tmp = rand()%100;
		double tmp_double = rand()%100+tmp*0.01;
		//list.Insert(tmp);
		list.Insert(tmp_double);
	}
	list.Print();
	//int number;
	double number;
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
