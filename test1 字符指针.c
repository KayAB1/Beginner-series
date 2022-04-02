#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	char arr1[]="abcdef";
	char arr2[]="abcdef";
	char *p1="abcdef";//常量字符串
	char *p2="abcdef";

//	//1、
//	if(arr1==arr2)//arr1和arr2分别开辟空间然后存储字符串，变量都有不同的空间
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//
//	return 0;
//}


		//1、
	if(p1==p2)//&p1和&p2的地址不同（因为指针是指针变量，变量开辟不同的空间），p1和p2是一样的（因为p1，p2内存空间中存的都是常量字符串的首元素地址）
	{
		printf("hehe\n");
	}
	else
	{
		printf("haha\n");
	}

	return 0;
}