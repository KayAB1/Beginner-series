#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//struct stu   //struct--�ṹ��ؼ���//stu--�ṹ���ǩ//  struct stu-�ṹ������
//{
//	char name[20];//�ṹ���Ա�������б�//ÿ����Ա�����������ǲ�ͬ����
//	short age;
//	char tel[12];
//	char sex[3];
//
//}s1,s2,s3;//�ṹ�����͵�ȫ�ֱ���


//typedef struct stu
//{
//	char name[20];
//	short age;
//	char tel[12];
//	char sex[5];
//
//}Stu;//��typedef�Խṹ�����ͽ�����������--Stu
//
//typedef struct cla
//{
//	char clan[10];
//	Stu s2;
//
//}cla;
//
//
//int main()
//{
//	cla s1={"18-1",{"ħ��",2,"6666666","��"}};//�ṹ��Ƕ�׳�ʼ��
//	printf("%d",s1.s2.age);//�ṹ��Ƕ�׷��ʷ�ʽ
//}

//typedef struct stu
//{
//	char name[20];
//	short age;
//	char tel[12];
//	char sex[5];
//
//}Stu;//��typedef�Խṹ�����ͽ�����������--Stu
//
//
//void print1(Stu s)//��ֵ�ṹ��
//{
//	printf("name:%s\n",s.name);
//	printf("age:%d\n",s.age);
//	printf("tel:%s\n",s.tel);
//	printf("sex:%s\n",s.sex);
//
//
//}
//
//void print2(Stu*s)//��ַ�ṹ��
//{
//	printf("name:%s\n",s->name);
//	printf("age:%d\n",s->age);
//	printf("tel:%s\n",s->tel);
//	printf("sex:%s\n",s->sex);
//
//
//}
//
//int main()
//{
//	Stu s1={"ħ��",2,"6666666","��"};//�ṹ��Ƕ�׳�ʼ��
//	//��ӡ�ṹ������
//	print1(s1);//�ýṹ�������Ϊʵ�εĻ����������β�ֻ��ʵ�ε���ʱ�������β�Ҫ�����ڴ�����һ����Էŵ��¸ýṹ������Ŀռ䣬�����ͺܲ���ʡ�ռ䣨���Ǵ������뵽�ռ����⣩
//	print2(&s1);//��ָ�봫�θ�ʡ�ռ䣨4/8���ֽڣ�
//}