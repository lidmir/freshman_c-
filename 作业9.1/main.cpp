#include"paixu.h"
const int p=3;
void main(){
	complex x[p];
	cout<<"-------------将n个数据进行由小到大排序-----------"<<endl;
	char q;
	int y=1;
	do{
		cout<<"请选择要输入的数据类型a/b/c/d（a-整型/b-浮点型/c-字符型/d-复数类型):";
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
			cout<<"（请先输入实部，再输入虚部）"<<endl;
			input(x,p);
			paixu(x,p);
			break;
		default:
			cout<<"Wrong!Please input a/b/c/d!"<<endl;}
		cout<<"是否要再选不同的数据类型进行排序？请输入0/1（0-要，1-不要）：";
		cin>>y;}while(y==0);	
	cout<<"---------------------end----------------------"<<endl;
}



	

	