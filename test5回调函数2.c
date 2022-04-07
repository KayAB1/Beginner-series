//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//
//void print(char*str)//字符指针可以接收被赋值字符的变量及常量字符串
//{
//	printf("hehe:%s\n",str);
//
//}
//void test(void(*p)(char*))//参数为函数指针，用于接收函数地址
//{
//	printf("test\n");
//	p("bit");//通过函数指针调用函数，这个被调用的函数称为回调函数//这种一个函数在另一函数被函数指针调用的形式称为回调函数机制
//}
//int main()
//{
//	test(print);
//	return 0;
//}