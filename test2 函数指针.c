//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//
//int Add(int x,int y)
//{
//	return x+y;
//}
//
//int main()
//{
//	int a=10;
//	int b=20;
//	int(*pa)(int,int)=&Add;//或者Add他们都表示函数的地址
//	printf("%d \n",(pa)(a,b));//函数指针可以不解引用直接使用，因为Add是函数地址，&Add也是函数地址，所以有Add==&Add==pa==*pa
//
//	printf("%d \n",(*pa)(a,b));
//	printf("%d \n",(****pa)(a,b));//*与()括号的优先级更高，这里的（）是函数调用操作符//函数指针在进行使用的时候前面的解引用*其实是个摆设可以不写
//	
//
//
//
//	return 0;
//}