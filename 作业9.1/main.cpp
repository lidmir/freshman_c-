#include"paixu.h"
const int p=3;
void main(){
	complex x[p];
	cout<<"-------------��n�����ݽ�����С��������-----------"<<endl;
	char q;
	int y=1;
	do{
		cout<<"��ѡ��Ҫ�������������a/b/c/d��a-����/b-������/c-�ַ���/d-��������):";
		cin>>q;
		switch(q){
		case('a'):
			int b[p];
			input(b,p);
			paixu(b,p);
			break;
		case('b'):
			float c[p];
			input(c,p);
			paixu(c,p);
			break;
		case('c'):
			char d[p];
			input(d,p);
			paixu(d,p);
			break;
		case('d'):
			cout<<"����������ʵ�����������鲿��"<<endl;
			input(x,p);
			paixu(x,p);
			break;
		default:
			cout<<"Wrong!Please input a/b/c/d!"<<endl;}
		cout<<"�Ƿ�Ҫ��ѡ��ͬ���������ͽ�������������0/1��0-Ҫ��1-��Ҫ����";
		cin>>y;}while(y==0);	
	cout<<"---------------------end----------------------"<<endl;
}



	

	