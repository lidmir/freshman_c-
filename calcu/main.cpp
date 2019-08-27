#include"calcu.h"

void main(){
	calcu obj1("5+6*2=");
	obj1.printexp();
	obj1.processing_str();
	calcu obj2("8-3*5+6=");
	obj2.printexp();
	obj2.processing_str();
	calcu obj3("12.5-2.2*5/3+1.3*2=");
	obj3.printexp();
	obj3.processing_str();
	calcu obj4("3+4*5-7=");
	obj4.printexp();
	obj4.processing_str();

}
