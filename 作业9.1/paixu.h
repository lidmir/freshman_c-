#include<iostream>
using namespace std;
class complex{    //复数类型
	int real;
	int imag;
public:
	complex(int x=0,int y=0){real=x;imag=y;}   //构造函数
	friend bool operator>(complex,complex);      //比大小
	friend ostream& operator<<(ostream &sout, complex &A);     //重载<<，可以直接输出复数
	friend istream& operator>>(istream &sin, complex &A);      //重载>>，可以直接输入复数
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


template<class T>void input(T a[],int n){      //输入n个数据
	cout<<"Please input "<<n<<" numbers:"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<" "<<i+1<<":";
		cin>>a[i];
	}
}



template<class T>void paixu(T a[],int n){    //排序和输出
	T c;
	for(int i=0;i<n-1;i++)    //排序
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]>a[j]) {
				c=a[i];
				a[i]=a[j];
				a[j]=c;}
		}
	}
	cout<<"--------------------排序后------------------"<<endl;
	for(int i=0;i<n;i++)    //输出
	cout<<i+1<<":"<<a[i]<<endl;
	cout<<endl;
}

