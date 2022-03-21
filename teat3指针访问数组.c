#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	//通过指针来打印/改变数组（通过指针加整数的方式来访问数组）
	int arr[10]={0};
	int*p=arr;
	int i=0;
	for(i=0;i<10;i++)
	{
		printf("%d",*(p+i)=1);

	}

	return 0;
}