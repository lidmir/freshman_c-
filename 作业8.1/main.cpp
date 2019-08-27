#include"datetime.h"

void print(datetime a){    //打印日期时间对象
	cout<<a.year<<" year "<<a.month<<" month "<<a.day<<" day "<<a.hour<<" hour "<<a.min<<" minute "<<a.sec<<" second "<<endl;
}
void main()
{
	datetime a(1996,10,05,15,20,20),b(1997,10,31,15,20,10),c(1996,10,30,15,20,21);
	cout<<"a:"<<endl;
	print(a);
	cout<<"b:"<<endl;
	print(b);
	cout<<"c:"<<endl;
	print(c);
	if(a>c) cout<<"a>c"<<endl;    //比较大小
	else{ 
		if(a==c) cout<<"a=c";
		else cout<<"a<c"<<endl;}

	if(b>c) cout<<"b>c"<<endl;
	else{ 
		if(b==c) cout<<"a=c";
		else cout<<"b<c"<<endl;}
	cout<<"a与b的日期时间之差为:"<<endl;    //计算时间之差
	print(a-b);
	cout<<"a与c的日期时间之差为:"<<endl;
	print(a-c);

	
}
