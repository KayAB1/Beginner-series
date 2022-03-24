#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//struct stu   //struct--结构体关键字//stu--结构体标签//  struct stu-结构体类型
//{
//	char name[20];//结构体成员变量（列表）//每个成员变量都可以是不同类型
//	short age;
//	char tel[12];
//	char sex[3];
//
//}s1,s2,s3;//结构体类型的全局变量


//typedef struct stu
//{
//	char name[20];
//	short age;
//	char tel[12];
//	char sex[5];
//
//}Stu;//用typedef对结构体类型进行了重命名--Stu
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
//	cla s1={"18-1",{"魔方",2,"6666666","公"}};//结构体嵌套初始化
//	printf("%d",s1.s2.age);//结构体嵌套访问方式
//}

//typedef struct stu
//{
//	char name[20];
//	short age;
//	char tel[12];
//	char sex[5];
//
//}Stu;//用typedef对结构体类型进行了重命名--Stu
//
//
//void print1(Stu s)//传值结构体
//{
//	printf("name:%s\n",s.name);
//	printf("age:%d\n",s.age);
//	printf("tel:%s\n",s.tel);
//	printf("sex:%s\n",s.sex);
//
//
//}
//
//void print2(Stu*s)//传址结构体
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
//	Stu s1={"魔方",2,"6666666","公"};//结构体嵌套初始化
//	//打印结构体数据
//	print1(s1);//用结构体变量作为实参的话，函数的形参只是实参的临时拷贝，形参要再向内存申请一块可以放得下该结构体变量的空间，这样就很不节省空间（凡是传参因想到空间问题）
//	print2(&s1);//用指针传参更省空间（4/8个字节）
//}