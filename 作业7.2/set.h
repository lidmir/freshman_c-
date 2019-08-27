#include<iostream>
using namespace std;
const int maxcard=20;
class set{
	int elems[maxcard];
	int card;
public:
	set(void){card=0;}   //构造函数
	void print();               //打印
	bool operator&(int);   //&：判断元素是否为集合的成员
	bool operator==(set);   //==：判断两个集合是否相同
	bool operator!=(set);  //！=：判断两个集合是否不相同
	set operator+(int);   //+：将某个元素加入到某集合中
	set operator+(set);     //+：求两个集合的并集
	set operator-(int);   //-：将某元素从某集合中删去
	set operator*(set);    //*：求两个集合的交集
	bool operator<(set);    //<集合是否真包含于集合之中
	bool operator<=(set);    //<=：集合是否包含于集合之中
};
