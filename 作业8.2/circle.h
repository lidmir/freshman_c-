#include<iostream>
using namespace std;
const float pi=3.14;

class circle{   //�������Բ
protected:
	float r;
public:
	circle(float r1=0){r=r1;};
	virtual	float s();     //�麯���������s()
	virtual float v()=0;    //���麯���������v()
};
class cylinder:public circle{   //Բ��
protected:
	float h;
public:
	cylinder(float r1=0, float h1=0):circle(r1){h=h1;};
	float s();
	float v();
};
class cone:public circle{   //Բ׶
protected:
	float l;
public:
	cone(float r1=0, float l1=0):circle(r1){l=l1;};
	float s();
	float v();
};
class sphere:public circle{   //��
public:
	sphere(float r1=0):circle(r1){};
	float s();
	float v();
};

float circle::s(){
	return pi*r*r;}
float cylinder::s(){
	return 2*pi*r*h+2*pi*r*r;}
float cylinder::v(){
	return pi*r*r*h;}
float cone::s(){
	return pi*r*l+pi*r*r;}
float cone::v(){
	float h;
	h=sqrt(l*l-r*r);
	return 1*pi*r*r*h/3;}
float sphere::s(){
	return 4*pi*r*r;}
float sphere::v(){
	return 3*pi*r*r*r/4;}
