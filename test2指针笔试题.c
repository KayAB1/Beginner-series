#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


int main()//д��������־��磺�������Ǵ��룻���������ڴ棻�������Ǵ���
{
	int a[5]={1,2,3,4,5};
	int *ptr=(int*)(&a+1);
	printf("%d%d\n",*(a+1),*(ptr-1));//ָ������;���ָ��Ĳ���

	return 0;
}
