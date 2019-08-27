#include"set.h"
bool set::operator&(int e){         
	for(int i=0;i<card;i++)
		if(elems[i]==e) return 1;
	return 0;}	
bool set::operator==(set s){         
	if(card!=s.card) return 0;      //元素个数不同
	for(int i=0;i<card;i++)           
		if(!(s&elems[i])) return 0;    //有一个不相等
	return 1;}                  //全相等时
bool set::operator!=(set s){        
	if(card!=s.card) return 1;     //元素个数不同
	for(int i=0;i<card;i++)           
		if(!(s&elems[i])) return 1;         //有一个不相等
	return 0;}            //全相等时
set set::operator+(int e){
	set s,s1;
	s1.card=s.card=card;              //将原集合复制到s和s1集合
	for(int i=0;i<card;i++)
	{s1.elems[i]=s.elems[i]=elems[i];}
	if(card<maxcard){           //数组不超界时，方可加入
		if(!(s&e))           //借用"&"来判断e是否为原集合
		{s1.elems[s1.card++]=e;}
	}
	return s1;}
set set::operator+(set s){
	set res=s;               //将s复制到res集合
	for(int i=0;i<card;i++)
		res=res+elems[i];         //再将原集合的诸元素加入到res集合
	return res;}
set set::operator-(int e){
	set s,s1;
	s.card=s1.card=card;              //将原集合复制到s和s1集合
	for(int i=0;i<card;i++)
	{s.elems[i]=s1.elems[i]=elems[i];}
	if(!(s&e)) return s1;     //如果原集合中不含e元素，直接返回原集合
	for(int i=0;i<card;i++)
		if(elems[i]==e)
			for(;i<card-1;i++) s1.elems[i]=s1.elems[i+1];        //所有“后继”统统“前移”
	--s1.card;        //集合元素数card值减
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
	s1.card=card;              //将原集合复制到s1集合
	for(int i=0;i<card;i++)
		s1.elems[i]=elems[i];
	return((card<s.card)&&(s1<=s));
}
bool set::operator<=(set s){
	if(card>s.card) return 0;    //发现原集合比s元素多
	for(int i=0;i<card;i++)
		if(!(s&elems[i])) return 0;    //发现某一个原集合的元素不属于s
	return 1;}    //不出现上述两种情况时
void set::print(){
	cout<<"{";
	for(int i=0;i<card-1;i++)
		cout<<elems[i]<<",";
	cout<<elems[card-1];
	cout<<"}"<<endl;
}
