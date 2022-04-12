#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


int main()//写代码的三种境界：看代码是代码；看代码是内存；看代码是代码
{
	int a[5]={1,2,3,4,5};
	int *ptr=(int*)(&a+1);
	printf("%d%d\n",*(a+1),*(ptr-1));//指针的类型决定指针的步长

	return 0;
}
