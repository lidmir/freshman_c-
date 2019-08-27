#include<iostream>
#include<time.h>
#include<stdlib.h>
#include<string.h>
using namespace std;
//9
/*template<class T>void sort(T *A,int n){    //255
	T x;
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){ 
			if(A[i]<A[j]){
				x=A[i];
				A[i]=A[j];
				A[j]=x;
			}}}
}
void main(){
	int Ai[10]={6,12,-3,9,-6,28,17,0,6,16};
	int i ;
	cout<<"The initial arry Ai is :"<<endl;
	for(i=0;i<10;i++)
		cout<<Ai[i]<<" ";
	cout<<endl;
	sort(Ai,10);
	cout<<"The sorted arry Ai is:";
	for(i=0;i<10;i++)
		cout<<Ai[i]<<" ";
	cout<<"\n--------------------------------------\n";
	char Ac[12]="ddokeftstar";
	for(i=0;i<11;i++)
		cout<<Ac[i]<<" ";
	cout<<endl;
	sort(Ac,11);
	cout<<"The sorted arry Ai is:";
	for(i=0;i<11;i++)
		cout<<Ac[i]<<" ";
	cout<<"\n--------------------------------------\n";
}*/

/*template<class T>class mytmplt{              //258
	T x,y,z;
public:
	mytmplt(T x0,T y0,T z0){x=x0;y=y0;z=z0;}
	T max();
	bool order();
	void print();
};
template<class T> T mytmplt<T>::max(){
	T m;
	m=x>y?x:y;
	m=m>z?m:z;
	return m;
}
template<class T>bool mytmplt<T>::order(){
	if(x<y&&y<z) return 1;
	else return 0;
}
template<class T>void mytmplt<T>::print(){
	cout<<x<<" "<<y<<" "<<z<<endl;
}
void main(){
	mytmplt<int> s1(1,2,25);
	s1.print();
	cout<<"s1.max="<<s1.max()<<endl;
	if(s1.order())
		cout<<"s1.order()=>OK!"<<endl;
	mytmplt<char> s2('A','t','f');
	s2.print();
	cout<<"s1.max="<<s2.max()<<endl;
	if(s2.order())
		cout<<"s2.order()=>OK!"<<endl;
}*/

/*template<class T>void maxmin(T *A,int m,int n){    //260
	T max=A[0],min=A[0];
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			max=A[i*n+j]>max?A[i*n+j]:max;
			min=A[i*n+j]<min?A[i*n+j]:min;
		}}
	cout<<"max="<<max<<endl<<"min="<<min<<endl;
}
void main(){
	int a[2][3]={7,0,-5,-99,22,1};
	char b[3][4]={{'a','b','c','d'},{'A','B','C','D'},{'e','f','g','h'}};
	maxmin((int*)a,2,3);
	maxmin((char*)b,3,4);
}*/
/*void main(){     //try 
	int A[3]={0,4,2};
	int a;
	int *p=new int;
	p=A;
	for(int i=0;i<2;i++){
		for(int j=i+1;j<3;j++){
			if(A[i]<A[j]){
				a=*(p+i);
				*(p+i)=*(p+j);
				*(p+j)=a;}}}
	for(int i=0;i<3;i++)
		cout<<*(p+i)<<" ";
}*/

/*template<class T>class Node{  261
public:	
	T data;
	Node* next;
	static int TotalCount;     

	Node(T data1=0){data=data1;};
	~Node();
};

template<class T>class List{
	Node<T> *head;
	Node<T> *tail;
	int nodeCount;
public:
	List(){head=tail=NULL;nodeCount=0;};
	void htot();
	void ttoh();
	void display();
	void insert(T *item);
	void append(T *item);
	T get();
	int count(){return nodeCount;};
};
template<class T> void List<T>::insert(T *item){
	Node<T> *tmp=new Node<T>;
	nodeCount++;
	tmp->data=*item;
	tmp->next=head;
	head=tmp;
	if(tail==NULL)
		tail=tmp;
}
template<class T>void List<T>::append(T *item){
	Node<T> *tmp=new Node<T>;
    nodeCount++;
	tmp->data=*item;
	tmp->next=NULL;
	if(tail==NULL)
		head=tail=tmp;
	else{
		tail->next=tmp;
		tail=tmp;
	}
}
template<class T>T List<T>::get(){
	T d;
	if(head==NULL)
		exit(0);
	d=head->data;
	Node<T> *pn=head;
	if(head->next==NULL)
		head=tail=NULL;
	else
		head=head->next;
	delete(pn);
	nodeCount--;
	return d;
}
template<class T>void List<T>::htot(){
	Node<T> *tmp=head->next;
	tail->next=head;
	head->next=NULL;
	tail=head;
	head=tmp;
}
template<class T>void List<T>::ttoh(){
	Node<T> *curr=head;
	while(curr->next!=tail)
		curr=curr->next;
	tail->next=head;
	curr->next=NULL;
	head=tail;
    
	tail=curr;
}
template<class T>void List<T>::display(){
	Node<T> *curr=head;
	while(curr!=NULL){
		cout<<curr->data<<" ";
		curr=curr->next;}
}
const int x=5;
void main(){
	List<int> l;
	List<char>l2;
	srand((unsigned)time(NULL));
	for(int i=0;i<x;i++){
		int *p=new int;
		*p=rand()%10;
		char ch='A'+i;
		l.append(p);
		l2.insert(&ch);
	}
	cout<<"l.count="<<l.count()<<endl;
	cout<<"l.display();=>";
	l.display();
	cout<<endl<<"l.ttoh(); l.display();=>";
	l.ttoh();
	l.display();
	cout<<endl<<"l2.count="<<l2.count()<<endl;
	cout<<"l2.display();=>";
	l2.display();
	cout<<endl<<"l2.htot(); l2.display();=>";
	l2.htot();
	l2.display();
}*/

//7

/*class point{   //199
	double x;
	double y;
public:
	point(double x0=0,double y0=0){x=x0;y=y0;}
	point operator+(point);
	double operator^(point);
	void display();
};
point point::operator+(point a){
	point c;
	c.x=x+a.x;
	c.y=y+a.y;
	return c;
}
double point::operator^(point a){
	return sqrt((x-a.x)*(x-a.x)+(y-a.y)*(y-a.y));
}
void point::display(){
	cout<<"("<<x<<","<<y<<")";
}
void main(){
	point s0,s1(1.2,-3.5),s2(-1.5,6);
	cout<<"s0=";
	s0.display();
	cout<<endl<<"s1=";
	s1.display();
	cout<<endl<<"s2=";
	s2.display();
	s0=s1+s2;
	cout<<endl<<"s0=s1+s2=";
	s0.display();
	cout<<endl<<"s1^s2="<<(s1^s2)<<endl;
}*/
/*
const int r=3;             //204
const int c=3;
class matrix{
	int mem[r][c];
public:
	matrix(int a[r][c]=0);
	//matrix();
	matrix operator*(matrix &);
	void display();
};
matrix::matrix(int a[r][c]=0){
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			mem[i][j]=a[i][j];}}
};

matrix matrix::operator*(matrix &a){
	int k[r][c];
	int s;
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			s=0;
			for(int w=0;w<c;w++){
				s+=mem[i][w]*a.mem[w][j];}
			k[i][j]=s;}}
	matrix z(k);
	return z;
}

void matrix::display(){
	for(int i =0;i<r;i++){
		cout<<"{";
		for(int j=0;j<c;j++){
			cout.width(5);
			cout<<mem[i][j];}
		cout<<"}"<<endl;}
}
void main(){

	int a[3][3]={1,2,3,4,5,6,7,8,9};
	int b[3][3]={1,2,3,0,1,2,-1,0,1};
	matrix x(a),y(b);
	cout<<"------------x------------"<<endl;
	x.display();
	cout<<"------------y------------"<<endl;
	y.display();
	cout<<"-----------x*y-----------"<<endl;
	(x*y).display();
}
*/

//8

/*class person{   //231
private:              //!!
	char name[30];
	char sex;
	int age;
public:
	person(char *na=NULL,char se=0,int ag=0){strcpy(name,na);sex=se;age=ag;}
	void display();
};
void person::display(){
	cout<<name<<" : "<<age<<" : "<<sex;
}
class teacher:public person{
	char post[30],course[30];
public:
	void display();
	teacher(char *na=NULL,char se=0,int ag=0,char *po=NULL,char *co=NULL):person(na,se,ag){strcpy(post,po);strcpy(course,co);}
};
void teacher::display(){
	person::display();
	cout<<endl<<"post: "<<post<<endl<<"course: "<<course;
}
class student:public person{
	int number;
	char department[30];
public:
	void display();
	student(char *na=NULL,char se=0,int ag=0,int num=0,char *de=NULL):person(na,se,ag){number=num;strcpy(department,de);}
};
void student::display(){
	person::display();
	cout<<endl<<"Reg_Number: "<<number<<endl<<"department: "<<department;
}
class graduatestudent:public student{
	char advisor[30];
public:
	void display();
	graduatestudent(char *na=NULL,char se=0,int ag=0,int num=0,char *de=NULL,char *ad=NULL):student(na,se,ag,num,de){strcpy(advisor,ad);}
};
void graduatestudent::display(){
	student::display();
	cout<<endl<<"advisor: "<<advisor;
}

void main(){
	person per1("sun",'M',42);
	student stu1("guo",'F',22,1001,"comp");
	teacher teach1("fang",'M',38,"professor","english");
	graduatestudent gstu("wu",'M',25,1021,"comp","wei");
	per1.display();
	cout<<endl;
	stu1.display();
	cout<<endl;
	teach1.display();
	cout<<endl;
	gstu.display();
}*/
/*
class base{   //234
public:	
	double price;
	char place[20];
	void input();
	base(double pr=0,char *pl=NULL){price=pr;strcpy(place,pl);}
};
void base::input(){
	double pr;
	char *pl=new char;
	cin>>pr>>pl;
	price=pr;
	strcpy(place,pl);}
class shirt:public base{
public:	
	char material[20];
	void input();
	shirt(double pr=0,char *pl=NULL,char *ma=NULL):base(pr,pl){strcpy(material,ma);}
};
void shirt::input(){
	base::input();
	char *ma=new char;
	cin>>ma;
	strcpy(material,ma);}
class cap:public shirt{
public:	
	char style[20];
	void input();
	cap(double pr=0,char *pl=NULL,char *ma=NULL,char *st=NULL):shirt(pr,pl,ma){strcpy(style,st);}
};
void cap::input(){
	shirt::input();
	char *st=new char;
	cin>>st;
	strcpy(style,st);}
class wardrobe:public shirt{
public:	
	char color[20];
	void input();
	wardrobe(double pr=0,char *pl=NULL,char *ma=NULL,char *co=NULL):shirt(pr,pl,ma){strcpy(color,co);}
};
void wardrobe::input(){
	shirt::input();
	char *co=new char;
	cin>>co;
	strcpy(color,co);}

const int MAXSIZE=100;

class shirt_storage{
	int count;
	shirt shelf[MAXSIZE];
public:
	shirt_storage(){count=0;}
	void display();
	void in(int add);
	void out(int del);
	double total_price();
};
void shirt_storage::display(){
	for(int i=0;i<count;i++){
		cout<<shelf[i].price<<" "<<shelf[i].place<<" "<<shelf[i].material<<endl;}
}
void shirt_storage::in(int add){
	cout<<add<<"* cap data in:price/place/material/style=>";
	shelf[count++].input();
	for(int i=0;i<add-1;i++){
		shelf[count+i]=shelf[count+i-1];}
}
void shirt_storage::out(int del){
	count-=del;
}
double shirt_storage::total_price(){
	double s=0;
	for(int i=0;i<count;i++){
		s+=shelf[i].price;
	}
	return s;
}

class cap_storage{
	int count;
	cap shelf[MAXSIZE];
public:
	cap_storage(){count=0;}
	void display();
	void in(int add);
	void out(int del);
	double total_price();
};
void cap_storage::display(){
	for(int i=0;i<count;i++){
		cout<<shelf[i].price<<" "<<shelf[i].place<<" "<<shelf[i].material<<" "<<shelf[i].style<<endl;}
}
void cap_storage::in(int add){
	cout<<add<<"* cap data in:price/place/material/style=>";
	shelf[count++].input();
	for(int i=0;i<add-1;i++){
		shelf[count+i]=shelf[count+i-1];}
}
void cap_storage::out(int del){
	count-=del;
}
double cap_storage::total_price(){
	double s=0;
	for(int i=0;i<count;i++){
		s+=shelf[i].price;
	}
	return s;
}

	
class wardrobe_storage{
	int count;
	wardrobe shelf[MAXSIZE];
public:
	wardrobe_storage(){count=0;}
	void display();
	void in(int add);
	void out(int del);
	double total_price();
};
void wardrobe_storage::display(){
	for(int i=0;i<count;i++){
		cout<<shelf[i].price<<" "<<shelf[i].place<<" "<<shelf[i].material<<" "<<shelf[i].color<<endl;}
}
void wardrobe_storage::in(int add){
	cout<<add<<"* cap data in:price/place/material/style=>";
	shelf[count++].input();
	for(int i=0;i<add-1;i++){
		shelf[count+i]=shelf[count+i-1];}
}
void wardrobe_storage::out(int del){
	count-=del;
}
double wardrobe_storage::total_price(){
	double s=0;
	for(int i=0;i<count;i++){
		s+=shelf[i].price;
	}
	return s;
}

void main(){
	cap_storage capsto;
	capsto.in(3);
	capsto.in(2);
	capsto.display();
	cout<<"capsto.total_price()="<<capsto.total_price()<<endl;
	capsto.out(4);
	capsto.display();
	cout<<"capsto.total_price()="<<capsto.total_price()<<endl;
}
*/
/*          ╤сап
template<class T> class queue{
	int maxsize;
	int front,rear;
	T *q;
public:
	queue(int size){maxsize=size;front=rear=-1;q=new T[maxsize];};
	bool full(){if(rear==maxsize-1) return 1; else return 0;};
	bool empty(){if(front==rear) return 1; else return 0;};
	void add(T);
	T delete1();
};
template<class T> T queue<T>::delete1(){
	if(empty()){
		cout<<"empty"<<endl;
		exit(0);}
	return q[++front];
}
template<class T>void queue<T>::add(T item){
	if(full()) cout<<"full"<<endl;
	else q[++rear]=item;
}
void main(){
	int i=0;
	queue<int>qi(10);
	queue<double>qf(10),qw(10);
	while(!qi.full()){
		qi.add(2*i++);
		qf.add(3.0*i);
	}
	for(i=0;i<4;i++){
		qw.add(4.5*qi.delete1());
		qw.add(qf.delete1()/2.0);
		cout<<qw.delete1()<<endl;
	}
}
*/

