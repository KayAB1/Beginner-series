#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void BubbleSort(int*arr,int sz)
{
	int*lift=arr;
	int*right=arr+sz-1;
	int i=0;
	int falg=1;
	for(i=0;i<sz-1;i++)//趟数是元素个数-1
	{
		int j=0;
		for(j=0;j<sz-1-i;j++)
		{
			if(*(lift+j)>=*(lift+j+1))
			{
				*(lift+j)=*(lift+j+1)^*(lift+j);
				*(lift+j+1)=*(lift+j+1)^*(lift+j);
				*(lift+j)=*(lift+j+1)^*(lift+j);
				falg=0;
			}

		}
		if(falg==1)
		{
			break;
		}
	}
}

int main()//冒泡排序只能排序整型数组//qsort--C语言的库函数，可以排序任意类型的数据
{
	int i=0;
	int arr[10]={2,1,-3,4,5,8,6,9,1,7};
	int sz=sizeof(arr)/sizeof(arr[0]);
	BubbleSort(arr,sz);
	for(i=0;i<sz;i++)
	{
	printf("%d ",arr[i]);
	}
	return 0;
}