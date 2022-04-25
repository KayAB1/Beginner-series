#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<errno.h>

//******************************************************************************************************

//1
//void GetMemory(char*p)
//{
//	p=(char*)malloc(100);
//}
//
//void Test(void)
//{
//	char*str=NULL;
//	GetMemory(str);
//	strcpy(str,"hello world");
//	printf(str);
//}
//
//int main()
//{
//	Test();
//	return 0;
//}


//分析
//1 指针变量作为实参时，是传值调用
//2 运行时会出现崩溃
//3 程序存在内存泄露的问题
//p是GetMemory函数的形参，只能在函数内部有效；等函数返回之后，动态内存的空间尚未被释放，并且无法找到，所以会造成内存泄露


//改1
//void GetMemory(char**p)
//{
//	*p=(char*)malloc(100);
//}
//
//void Test(void)
//{
//	char*str=NULL;
//	GetMemory(&str);
//	strcpy(str,"hello world");
//	printf(str);
//	free(str);
//	str=NULL;
//}
//
//int main()
//{
//	Test();
//	return 0;
//}


//改2
//char* GetMemory(char*p)
//{
//	p=(char*)malloc(100);
//	return p;
//}
//
//void Test(void)
//{
//	char*str=NULL;
//	str=GetMemory(str);
//	strcpy(str,"hello world");
//	printf(str);
//	free(str);
//	str=NULL;
//}
//
//int main()
//{
//	Test();
//	return 0;
//}



//******************************************************************************************************
//2

//char*GetMemory(void)
//{
//	char p[]="hello world";
//	return p;//返回栈空间的地址
//}
//
//void Test(void)
//{
//	char*str=NULL;
//	str=GetMemory();//指针指向被释放掉的空间地址--野指针，非法访问
//	printf(str);//随机值
//}
//
//int main()
//{
//	Test();
//	return 0;
//}


//3
//int * test()
//{
//	int a=10;
//	return &a;
//}
//
//int main()
//{
//	int*p=test();//野指针
//	*p=20;//非法访问内存
//	return 0;
//}

//4 返回静态区空间地址
//int * test()
//{
//	static int a=10;//静态区
//	return &a;
//}
//
//int main()
//{
//	int*p=test();
//	*p=20;//可以改变
//	return 0;
//}


//5 返回堆区空间地址
//int * test()
//{
//	int*ptr=(int*)malloc(100);//堆区
//	return ptr;
//}
//
//int main()
//{
//	int*p=test();
//	*p=20;//可以改变
//  free(p);
//  p=NULL;
//	return 0;
//}
