#include"student.h"
#include<iomanip>

student::student(){
	sex=0;
	age=0;
	grades=0;}

student::~student(){}

void student::printinfo(){   //打印学生信息
	cout<<"Name:"<<name<<" Sex:";
	if(sex==0) cout<<"Male";
	else cout<<"Famale";
	cout<<" Grades:"<<grades<<endl;}

void student::input(){  //输入学生信息
	int s,a;
	float g;
	char n[30];
	cin>>n>>s>>a>>g;
	while(s!=0&&s!=1){      //保证性别格式正确
		cout<<"Wrong!!!Please input the sex again! Sex(male=0,famale=1)=";
		cin>>s;}
	name=new char(strlen(n)+1);
	strcpy(name,n);
	sex=s;
	age=a;
	grades=g;}

float student::g(){    //显示学生成绩
	return grades;}
