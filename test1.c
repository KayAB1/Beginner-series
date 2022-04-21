#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>




////匿名结构体类型（无结构体标签）
//
//
//struct
//{
//	int a;
//	char c;
//}sa;
//
//struct 
//{
//	int a;
//	char c;
//}*psa;
//
//int main()
//{
//	psa=&sa;//匿名的结构体指针是不能接收匿名结构体变量的地址的，即便他们结构体成员一样；因为编译器会判断它们类型不兼容
//
//}

//*****************************************************************************************************************************

//结构体的自引用

//struct Node//结构体自己包含自己是不允许的，因为大小没法计算
//{
//	int data;
//	struct Node next;
//
//};


//struct Node//结构体内包含一个结构体指针是可以的（似链表，一个是数值域，一个是指针域(存下一个数值的地址)）----正确的自引用方式
//{
//	int data;
//	struct Node*next;
//
//
//};


//*****************************************************************************************************************************

//结构体的内存对齐

//结构体未嵌套结构体的结构体内存对齐
//struct S1
//{
//	char c1;
//	int a;
//	char c2;
//
//};
//
//
//int main()
//{
//	struct S1 s1={0};
//	printf("%d\n",sizeof(s1));
//
//
//}




//结构体嵌套结构体的结构体内存对齐

struct S3
{
	double d;
	char c;
	int i;
};


struct S4
{
	char c1;
	struct S3 s3;
	double d;
};


int main ()
{
	printf("%d\n",sizeof(struct S3));//16
	printf("%d\n",sizeof(struct S4));


}