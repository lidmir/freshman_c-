#include"student.h"
const int w=50;

void main(){
	student p[w];
	cout<<"Please input student's information:"<<endl<<"(name=>sex(male=0,famale=1)=>age=>grades)"<<endl;   //规定学生信息输入格式
	for(int i=0;i<w;i++){
		cout<<"No."<<i+1<<":";
		p[i].input();}
	student tem;
	for(int i=0;i<w-1;i++){           //按照成绩排序
		for(int j=1;j<w;j++) {
			if(p[i].g()<p[j].g()) {
				tem=p[i];
				p[i]=p[j];
				p[j]=tem;}}}
	cout<<"-------------------------------------"<<endl;            //按照成绩排序打印学生成绩
	for(int i=0;i<w;i++)
		p[i].printinfo();
}
