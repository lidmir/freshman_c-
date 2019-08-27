#include"calcu.h"


bool op_stack::empty(void){
	if(top==0) return 1;
	else return 0;}
bool op_stack::one(void){
	if(top==1) return 1;
	else return 0;}
void op_stack::push(char a){
	data[top]=a;
	top++;}
char op_stack::pop(void){
	top--;
	return data[top];}
//数字

bool num_stack::empty(void){
	if(top==0) return 0;
	else return 1;}
void num_stack::push(double a){
	data[top]=a;
	top++;}
double num_stack::pop(void){
	top--;
	return data[top];}  


double opfunc(double x,char op,double y){   //全局函数 计算
	switch(op)
	{
	case'+':
		return x+y;
	case'-':
		return x-y;
	case'*':
		return x*y;
	case'/':
		return x/y;
	default:
		return 0;
	}
}


void calcu::infromstr(double&a,char&op){//找到数和符号
	double x=0;
	int t=0;
	int len=10;
	if((!o1.empty())&&(z==1)){
		z=3;
		a=n1.pop();
		op=o1.pop();}
	else{
		for(unsigned int i=idx;i<strlen(str);i++) {
			if((str[i]>='0'&&str[i]<='9')||str[i]=='.'){
				idx++;
				if(str[i]=='.') t=1;
				else{ 
					if(t==0) x=x*10+(str[i]-48);
					else {
						x=x+(double)(str[i]-48)/len;
						len*=10;}
				}
			}
			else break;	}
	a=x;
	op=str[idx];
	idx++;}
}


void calcu::set(char q[100]){    //set算式
	strcpy(str,q);}
void calcu::printexp(){         //打印算式
	cout<<str;}
void calcu::processing_str(){          //处理
	double x,y,res=0;
	char op1,op2;
	infromstr(x,op1);
	n1.push(x);
	o1.push(op1);

	while(!o1.empty()){
		x=n1.pop();
		op1=o1.pop();
		if(op1!='='){ infromstr(y,op2); }
		if(z==3){
			char p;
			double e;
			e=x;
			x=y;
			y=e;
			p=op1;
			op1=op2;
			op2=p;
			z=1;
		}
		if(z==2) z=1;
		if(op1=='='){
			if(!o1.empty()){
			y=n1.pop();
			op2=o1.pop();}
			char p;
			double e;
			e=x;
			x=y;
			y=e;
			p=op1;
			op1=op2;
			op2=p;}
		switch(op1){
		case'+':
		case'-':
			if(op2=='*'||op2=='/'){
				z=2;
				n1.push(x);
				n1.push(y);
				o1.push(op1);
				o1.push(op2);
				break;}
			else{
				res=opfunc(x,op1,y);
				n1.push(res);
				o1.push(op2);
				break;}
		case'*':
		case'/':
				res=opfunc(x,op1,y);
				n1.push(res);
				o1.push(op2);
				break;
		}
	}
	cout<<res<<endl;
}