#include<iostream>
using namespace std;
class student{
private:
	char *name;
	int sex;
	int age;
	float grades;
public:
	student();
	~student();
	float g();   //显示成绩
	void printinfo();   //打印学生信息
	void input();    //输入学生信息
};
