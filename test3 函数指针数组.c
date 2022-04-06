#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int Add(int x,int y)
{
	return x+y;
}
int Sub(int x,int y)//Sub减法缩写
{
	return x-y;
}
int Mul(int x,int y)//Mul乘法缩写
{
	return x*y;
}
int Div(int x,int y)//Div除法缩写
{
	return x/y;
}
int main()
{
	int a=10;
	int b=20;
	int(*pa)(int,int)=Add;//Sub//Mul//Div如果想存放多个参数和返回类型相同的函数，每个这样的函数存放都写一个函数指针的话效率就太慢了，所以有了函数指针数组,也就是函数指针类型的数组，数组中每个元素的类型是函数指针类型的
	int(*pb[4])(int,int)={Add,Sub,Mul,Div};
	int i=0;
	for(i=0;i<4;i++)
	{
		printf("%d\n",pb[i](a,b));


	}

	



	return 0;
}
