#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	char arr1[]="abcdef";
	char arr2[]="abcdef";
	char *p1="abcdef";//�����ַ���
	char *p2="abcdef";

//	//1��
//	if(arr1==arr2)//arr1��arr2�ֱ𿪱ٿռ�Ȼ��洢�ַ������������в�ͬ�Ŀռ�
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//
//	return 0;
//}


		//1��
	if(p1==p2)//&p1��&p2�ĵ�ַ��ͬ����Ϊָ����ָ��������������ٲ�ͬ�Ŀռ䣩��p1��p2��һ���ģ���Ϊp1��p2�ڴ�ռ��д�Ķ��ǳ����ַ�������Ԫ�ص�ַ��
	{
		printf("hehe\n");
	}
	else
	{
		printf("haha\n");
	}

	return 0;
}