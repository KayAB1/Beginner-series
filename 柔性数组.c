#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<string.h>
#include<errno.h>
#include<stdio.h>

//柔性数组
//struct S
//{
//	int n;
//	int arr[];//结构体成员中最后一个成员为数组，且为未知大小的数组，称为柔性数组。柔性数组的大小是可以调节的，要结合动态内存函数来使用柔性数组
//};
//
//int main()
//{
//	int i=0;
//	struct S*ptr=NULL;
//	struct S*ps=(struct S*)malloc(sizeof(struct S)+5*sizeof(int));
//	if(ps==NULL)
//	{
//		printf("%s",strerror(errno));
//	}
//	ps->n=100;
//
//	for(i=0;i<5;i++)
//	{
//		ps->arr[i]=i;//0 1 2 3 4 
//	}
//	
//	ptr=(struct S*)realloc(ps,44);
//	if(ptr!=NULL)
//	{
//		ps=ptr;
//	}
//	for(i=5;i<10;i++)
//	{
//		ps->arr[i]=i;
//	}
//
//
//	return 0;
//}

 
//类似柔性数组
//struct S
//{
//	int n;
//	int*arr;
//};
//
//int main()
//{
//	struct S*ps=(struct S*)malloc(sizeof(struct S));
//	int*ptr;
//	int i=0;
//	if(ps==NULL)
//	{
//		printf("%s",strerror(errno));
//	}
//	ps->arr=(int*)malloc(5*sizeof(int));
//
//	for(i=0;i<5;i++)
//	{
//		printf("%d ",ps->arr[i]=i);
//	}
//
//	ptr=(int*)realloc(ps->arr,10*sizeof(int));
//	if(ptr!=NULL)
//	{
//		ps->arr=ptr;
//	}
//
//	for(i=5;i<10;i++)
//	{
//		printf("%d ",ps->arr[i]=i);
//	}
//
//	free(ps->arr);//注意释放顺序
//	ps->arr=NULL;
//    free(ps);
//	ps=NULL;
//	
//	return 0;
//}
