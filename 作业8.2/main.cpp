#include"circle.h"

void main(){
	circle *p;
	cylinder a(2,4);
	cone b(3,5.6);
	sphere c(8.6);
	
	char d=0;
	int i=1,j;
	do{
		cout<<"��ѡ��Ҫ�������? a/b/c(a-Բ��/b-Բ׶/c-��):"<<endl;
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
				cout<<"Wrong!Please input a/b/c(a-Բ��/b-Բ׶/c-��)��"<<endl;
				break;
			}
		}while(j==0);
		cout<<"s="<<p->s()<<endl;
		cout<<"v="<<p->v()<<endl;		
		cout<<"�Ƿ�Ҫ�ټ��㲻ͬ�����������������0/1��0-Ҫ��1-��Ҫ����";
		cin>>i;
	}while(i==0);
	cout<<"-----------------end---------------"<<endl;
}