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
	printf("%s\n",tmp.xuehao);//�ṹ����.��->��ʹ��
	printf("%s\n",tmp.s.name);
}
void print2(struct t* p)
{
	printf("%s\n",p->xuehao);//�ṹ����.��->��ʹ��
	printf("%s\n",p->s.name);
}

int main()
{
	
	struct t zzh={"20201402111",{"zzh","by"},5};//�ṹ������ɽṹ���������
	struct t* pz=&zzh;
	print1(zzh);//�ṹ��һ�㲻�ô�ֵ��ռ�ÿռ�̫��
	print2(&zzh);//�ṹ��һ���ô�ַ
	printf("%s\n",zzh.xuehao);//�ṹ����.��->��ʹ��
	printf("%s\n",zzh.s.name);
	printf("%s\n",pz->xuehao);
	printf("%s\n",pz->s.name);
	return 0;
}