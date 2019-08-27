#include"set.h"
bool set::operator&(int e){         
	for(int i=0;i<card;i++)
		if(elems[i]==e) return 1;
	return 0;}	
bool set::operator==(set s){         
	if(card!=s.card) return 0;      //Ԫ�ظ�����ͬ
	for(int i=0;i<card;i++)           
		if(!(s&elems[i])) return 0;    //��һ�������
	return 1;}                  //ȫ���ʱ
bool set::operator!=(set s){        
	if(card!=s.card) return 1;     //Ԫ�ظ�����ͬ
	for(int i=0;i<card;i++)           
		if(!(s&elems[i])) return 1;         //��һ�������
	return 0;}            //ȫ���ʱ
set set::operator+(int e){
	set s,s1;
	s1.card=s.card=card;              //��ԭ���ϸ��Ƶ�s��s1����
	for(int i=0;i<card;i++)
	{s1.elems[i]=s.elems[i]=elems[i];}
	if(card<maxcard){           //���鲻����ʱ�����ɼ���
		if(!(s&e))           //����"&"���ж�e�Ƿ�Ϊԭ����
		{s1.elems[s1.card++]=e;}
	}
	return s1;}
set set::operator+(set s){
	set res=s;               //��s���Ƶ�res����
	for(int i=0;i<card;i++)
		res=res+elems[i];         //�ٽ�ԭ���ϵ���Ԫ�ؼ��뵽res����
	return res;}
set set::operator-(int e){
	set s,s1;
	s.card=s1.card=card;              //��ԭ���ϸ��Ƶ�s��s1����
	for(int i=0;i<card;i++)
	{s.elems[i]=s1.elems[i]=elems[i];}
	if(!(s&e)) return s1;     //���ԭ�����в���eԪ�أ�ֱ�ӷ���ԭ����
	for(int i=0;i<card;i++)
		if(elems[i]==e)
			for(;i<card-1;i++) s1.elems[i]=s1.elems[i+1];        //���С���̡�ͳͳ��ǰ�ơ�
	--s1.card;        //����Ԫ����cardֵ��
	return s1;}
set set::operator*(set s){
	set res;
	for(int i=0;i<card;i++)
		for(int j=0;j<s.card;j++)
			if(elems[i]==s.elems[j]){
				res.elems[res.card++]=elems[i];
				break;}
			return res;
}
bool set::operator<(set s){
	set s1;
	s1.card=card;              //��ԭ���ϸ��Ƶ�s1����
	for(int i=0;i<card;i++)
		s1.elems[i]=elems[i];
	return((card<s.card)&&(s1<=s));
}
bool set::operator<=(set s){
	if(card>s.card) return 0;    //����ԭ���ϱ�sԪ�ض�
	for(int i=0;i<card;i++)
		if(!(s&elems[i])) return 0;    //����ĳһ��ԭ���ϵ�Ԫ�ز�����s
	return 1;}    //�����������������ʱ
void set::print(){
	cout<<"{";
	for(int i=0;i<card-1;i++)
		cout<<elems[i]<<",";
	cout<<elems[card-1];
	cout<<"}"<<endl;
}
