#include"datetime.h"

void print(datetime a){    //��ӡ����ʱ�����
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
	if(a>c) cout<<"a>c"<<endl;    //�Ƚϴ�С
	else{ 
		if(a==c) cout<<"a=c";
		else cout<<"a<c"<<endl;}

	if(b>c) cout<<"b>c"<<endl;
	else{ 
		if(b==c) cout<<"a=c";
		else cout<<"b<c"<<endl;}
	cout<<"a��b������ʱ��֮��Ϊ:"<<endl;    //����ʱ��֮��
	print(a-b);
	cout<<"a��c������ʱ��֮��Ϊ:"<<endl;
	print(a-c);

	
}
