#include<iostream>
using namespace std;
class complex{    //��������
	int real;
	int imag;
public:
	complex(int x=0,int y=0){real=x;imag=y;}   //���캯��
	friend bool operator>(complex,complex);      //�ȴ�С
	friend ostream& operator<<(ostream &sout, complex &A);     //����<<������ֱ���������
	friend istream& operator>>(istream &sin, complex &A);      //����>>������ֱ�����븴��
};
bool operator>(complex a,complex b){
	if((a.real*a.real+a.imag*a.imag)>(b.real*b.real+b.imag*b.imag)) return 1;
	else return 0;
}
ostream& operator<<(ostream &sout,complex &A){
	 sout << "("<<A.real<<","<<A.imag<<") ";
	 return sout;
  } 
istream& operator>>(istream &sin, complex &A){
	sin>>A.real>>A.imag;
	return sin;
}


template<class T>void input(T a[],int n){      //����n������
	cout<<"Please input "<<n<<" numbers:"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<" "<<i+1<<":";
		cin>>a[i];
	}
}



template<class T>void paixu(T a[],int n){    //��������
	T c;
	for(int i=0;i<n-1;i++)    //����
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]>a[j]) {
				c=a[i];
				a[i]=a[j];
				a[j]=c;}
		}
	}
	cout<<"--------------------�����------------------"<<endl;
	for(int i=0;i<n;i++)    //���
	cout<<i+1<<":"<<a[i]<<endl;
	cout<<endl;
}

