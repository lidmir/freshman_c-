#include<iostream>
using namespace std;
const int maxcard=20;
class set{
	int elems[maxcard];
	int card;
public:
	set(void){card=0;}   //���캯��
	void print();               //��ӡ
	bool operator&(int);   //&���ж�Ԫ���Ƿ�Ϊ���ϵĳ�Ա
	bool operator==(set);   //==���ж����������Ƿ���ͬ
	bool operator!=(set);  //��=���ж����������Ƿ���ͬ
	set operator+(int);   //+����ĳ��Ԫ�ؼ��뵽ĳ������
	set operator+(set);     //+�����������ϵĲ���
	set operator-(int);   //-����ĳԪ�ش�ĳ������ɾȥ
	set operator*(set);    //*�����������ϵĽ���
	bool operator<(set);    //<�����Ƿ�������ڼ���֮��
	bool operator<=(set);    //<=�������Ƿ�����ڼ���֮��
};
