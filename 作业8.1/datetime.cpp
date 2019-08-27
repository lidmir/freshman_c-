#include"datetime.h"

bool operator<(datetime a,datetime b){
	datetime c;
	int aa,bb,cc;
	aa=a.year*12*30*24*60*60+a.month*30*24*60*60+a.day*24*60*60+a.hour*60*60+a.min*60+a.sec;   //��������ʱ��a��������
	bb=b.year*12*30*24*60*60+b.month*30*24*60*60+b.day*24*60*60+b.hour*60*60+b.min*60+b.sec;
	cc=aa-bb;   //����ʱ��a��b�Ĳ�ֵ
	if(cc<0) return 1;
	else return 0;
}

bool operator==(datetime a,datetime b){
	int aa,bb;
	aa=a.year*12*30*24*60*60+a.month*30*24*60*60+a.day*24*60*60+a.hour*60*60+a.min*60+a.sec;
	bb=b.year*12*30*24*60*60+b.month*30*24*60*60+b.day*24*60*60+b.hour*60*60+b.min*60+b.sec;
	if(aa==bb) return 1;
	else return 0;
}

bool operator>(datetime a,datetime b){
	if(a<b) return 0;
	else{
		if(a==b) return 0;    
		else return 1;}  
}

datetime operator-(datetime a,datetime b){   
	datetime c;
	int aa,bb,cc;
	if(b>a){c=a;a=b;b=c;}   //������ʱ��ϴ��������a����С�ķ���b
	aa=a.year*12*30*24*60*60+a.month*30*24*60*60+a.day*24*60*60+a.hour*60*60+a.min*60+a.sec;
	bb=b.year*12*30*24*60*60+b.month*30*24*60*60+b.day*24*60*60+b.hour*60*60+b.min*60+b.sec;
	cc=aa-bb;    //�����������ʱ�������Ĳ�ֵ
	c.year=cc/(60*60*24*30*12);    //�������������������Сʱ���Ӻ���
	cc-=c.year*(60*60*24*30*12);
	c.month=cc/(60*60*24*30);
	cc-=c.month*(60*60*24*30);
	c.day=cc/(60*60*24);
	cc-=c.day*(60*60*24);
	c.hour=cc/(60*60);
	cc-=c.hour*(60*60);
	c.min=cc/60;
	c.sec=cc-c.min*60;
	return c;   //����һ������ʱ����Ķ���
}


