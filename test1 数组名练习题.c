#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//
//int main()//数组名的含义（一般情况下数组名为首元素地址，除了1：sizeof(数组名)；2：&数组名）
//{
//	int a[]={1,2,3,4};
//	printf("%d\n",sizeof(a));
//	printf("%d\n",sizeof(a+0));//首元素的地址//4/8个字节（32-4；64-8）
//	printf("%d\n",sizeof(*a));//首元素因为是int类型所以是4
//	printf("%d\n",sizeof(a+1));
//	printf("%d\n",sizeof(a[1]));
//	printf("%d\n",sizeof(&a));
//	printf("%d\n",sizeof(*&a));//&和*抵消所以是sizeof（数组名）--16
//	printf("%d\n",sizeof(&a[0]));
//	printf("%d\n",sizeof(&a[0]+1));
//
//
//	return 0;
//}


//int main()//字符数组
//{
//	char a[]={'a','b','c','e','f','g'};
//	printf("%d\n",sizeof(a));//6   sizeof计算括号内内容所占空间的大小，不是strlen不以/0为结束
//	printf("%d\n",sizeof(a+0));
//	printf("%d\n",sizeof(*a));
//	printf("%d\n",sizeof(a+1));
//	printf("%d\n",sizeof(a[1]));
//	printf("%d\n",sizeof(&a));
//	printf("%d\n",sizeof(*&a));
//	printf("%d\n",sizeof(&a[0]));
//	printf("%d\n",sizeof(&a[0]+1));
//
//
//	return 0;
//}


//int main()//字符数组
//{
//	char a[]={'a','b','c','e','f','g'};//strlen()--strlen括号中为地址，strlen以括号中的地址为起始地址向后范围直到遇到\0结束，不包括\0在内
//	printf("%d\n",strlen(a));//随机值
//	printf("%d\n",strlen(a+0));//随机值
//	printf("%d\n",strlen(*a));//括号中为'a'--ascll值为97，strlen以97为地址向后访问结果为随机值
//	printf("%d\n",strlen(a[1]));
//
//	printf("%d\n",strlen(&a+1));//这个数组的地址+1跳过整个数组，结果也是随机值不过较之前的随机值-6，因为跳过了一个数组
//	printf("%d\n",strlen(&a[0]+1));//随机值-1，因为跳过了一个元素
//
//
//	return 0;
//}
