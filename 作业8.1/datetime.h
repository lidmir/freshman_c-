#include<iostream>
using namespace std;

class date{
public:
	int year;
	int month;
	int day;
	date(int y=0,int m=0,int d=0){year=y;month=m;day=d;};
};

class time{
public:
	int hour;
	int min;
	int sec;
	time(int h=0,int m1=0,int s=0){hour=h;min=m1;sec=s;};
};

class datetime:public date,public time{     
public:
	datetime(int y=0,int m=0,int d=0,int h=0,int m1=0,int s=0):date(y,m,d),time(h,m1,s){};
	friend bool operator<(datetime,datetime);   //两个日期时间比大小
	friend bool operator>(datetime,datetime);	
	friend bool operator==(datetime,datetime);	
	friend datetime operator-(datetime,datetime);  //求出两个日期时间之差

};