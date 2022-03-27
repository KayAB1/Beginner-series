#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void find(int arr[],int c,int sz)
{
	int i=0;
	int left=0;
	int right=sz-1;
	int mid=(left+right)/2;
	for(;left<=right;mid=(left+right)/2)
	{
		if(*(arr+mid)>c)
		{
			right=mid-1;
		}
		else if(*(arr+mid)<c)
		{
			left=mid+1;
		}
		else
		{
          break;
		}


	}
	if(left>right)
	{
		printf("找不到\n");
	}
	else
		printf("找到了，下标是%d",mid);
}

int main()//指针版
{
	int arr[10]={1,2,3,4,5,6,7,8,9,10};
	int c=0;
	int sz=sizeof(arr)/sizeof(arr[0]);
scanf("%d",&c);
    find(arr,c,sz);
	/*int left=0;
	int right=sz-1;
	int mid=(left+right)/2;
		
	for(;left<=right;mid=(left+right)/2)
	{
		if(arr[mid]>c)
		{
			right=mid-1;
		}
		else if(arr[mid]<c)
		{
			left=mid+1;
		}
		else if(arr[mid]==c)
		{
          printf("找到了，下标是%d",mid);
		  break;
		}


	}
	if(left>right)
	{
		printf("找不到\n");
	}*/
	return 0;
}