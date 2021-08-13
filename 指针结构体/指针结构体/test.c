#include<stdio.h>
struct stu
{
	char name[20];
	char sex[5];

};
struct t
{
	char xuehao[20];
	struct stu s;
	short age;
};
void print1(struct t tmp)
{
	printf("%s\n",tmp.xuehao);//结构体中.与->的使用
	printf("%s\n",tmp.s.name);
}
void print2(struct t* p)
{
	printf("%s\n",p->xuehao);//结构体中.与->的使用
	printf("%s\n",p->s.name);
}

int main()
{
	
	struct t zzh={"20201402111",{"zzh","by"},5};//结构体可以由结构体变量构成
	struct t* pz=&zzh;
	print1(zzh);//结构体一般不用传值，占用空间太大
	print2(&zzh);//结构体一般用传址
	printf("%s\n",zzh.xuehao);//结构体中.与->的使用
	printf("%s\n",zzh.s.name);
	printf("%s\n",pz->xuehao);
	printf("%s\n",pz->s.name);
	return 0;
}