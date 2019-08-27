#include"set.h"
void main(){
	set s,s1,s2,s3,s4;
	int i;
	for(i=0;i<10;i++){
		s=s+i;
		s1=s1+2*i;
		s2=s2+3*i;}
	cout<<"s="; s.print();
	cout<<"s1="; s1.print();
	cout<<"s2="; s2.print();
	for(i=0;i<5;i++){
		s=s-i;
		s1=s1-i;
		s2=s2-i;}
	cout<<"After Removing:"<<endl;
	cout<<"s="; s.print();
	cout<<"s1="; s1.print();
	cout<<"s2="; s2.print();
	s3=s*s1;
	s4=s+s2;
	cout<<"s3=s*s1="; s3.print();
	cout<<"s4=s+s2=;"; s4.print();
	if(s3==s4) cout<<"s3=s4"<<endl;
	else cout<<"s3!=s4"<<endl;
	if(s4<=s3) cout<<"s3>s4"<<endl;
	else cout<<"s3!>s4"<<endl;
	if(s2<=s4) cout<<"s4>=s2"<<endl;
	else cout<<"SET s4!>=s2"<<endl;
}