
#include<string.h>
#include<iostream>
using namespace std;
const int maxsize=100;

class op_stack{
	char data[maxsize];
	int top;
public:
	op_stack(void){top=0;};
	~op_stack(void){};
	bool empty(void);
	bool one(void);
	void push(char a);
	char pop(void);
};

class num_stack{
	double data[maxsize];
	int top;
public:
	num_stack(void){top=0;};
	~num_stack(void){};
	bool empty(void);
	void push(double a);
	double pop(void);
};

class calcu{
	num_stack n1;
	op_stack o1;
	char str[100];
	int idx;
	void infromstr(double&x,char&op);
	int z;
public:
	calcu(){idx=0;z=0;};
	calcu(char *q){idx=0;strcpy(str,q);z=0;};
	void set(char q[100]);
	void printexp();
	void processing_str();
};
