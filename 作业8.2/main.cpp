#include"circle.h"

void main(){
	circle *p;
	cylinder a(2,4);
	cone b(3,5.6);
	sphere c(8.6);
	
	char d=0;
	int i=1,j;
	do{
		cout<<"请选择要计算的类? a/b/c(a-圆柱/b-圆锥/c-球):"<<endl;
		do{
			j=1;
			cin>>d;
			switch(d){
			case 'a':
				p=&a;
				break;
			case 'b':
				p=&b;
				break;
			case 'c':
				p=&c;
				break;
			default:
				j=0;
				cout<<"Wrong!Please input a/b/c(a-圆柱/b-圆锥/c-球)："<<endl;
				break;
			}
		}while(j==0);
		cout<<"s="<<p->s()<<endl;
		cout<<"v="<<p->v()<<endl;		
		cout<<"是否要再计算不同的类进行排序？请输入0/1（0-要，1-不要）：";
		cin>>i;
	}while(i==0);
	cout<<"-----------------end---------------"<<endl;
}