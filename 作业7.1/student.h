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
	float g();   //��ʾ�ɼ�
	void printinfo();   //��ӡѧ����Ϣ
	void input();    //����ѧ����Ϣ
};
