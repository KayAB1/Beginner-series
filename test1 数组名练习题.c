#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//
//int main()//�������ĺ��壨һ�������������Ϊ��Ԫ�ص�ַ������1��sizeof(������)��2��&��������
//{
//	int a[]={1,2,3,4};
//	printf("%d\n",sizeof(a));
//	printf("%d\n",sizeof(a+0));//��Ԫ�صĵ�ַ//4/8���ֽڣ�32-4��64-8��
//	printf("%d\n",sizeof(*a));//��Ԫ����Ϊ��int����������4
//	printf("%d\n",sizeof(a+1));
//	printf("%d\n",sizeof(a[1]));
//	printf("%d\n",sizeof(&a));
//	printf("%d\n",sizeof(*&a));//&��*����������sizeof����������--16
//	printf("%d\n",sizeof(&a[0]));
//	printf("%d\n",sizeof(&a[0]+1));
//
//
//	return 0;
//}


//int main()//�ַ�����
//{
//	char a[]={'a','b','c','e','f','g'};
//	printf("%d\n",sizeof(a));//6   sizeof����������������ռ�ռ�Ĵ�С������strlen����/0Ϊ����
//	printf("%d\n",sizeof(a+0));
//	printf("%d\n",sizeof(*a));
//	printf("%d\n",sizeof(a+1));
//	printf("%d\n",sizeof(a[1]));
//	printf("%d\n",sizeof(&a));
//	printf("%d\n",sizeof(*&a));
//	printf("%d\n",sizeof(&a[0]));
//	printf("%d\n",sizeof(&a[0]+1));
//
//
//	return 0;
//}


//int main()//�ַ�����
//{
//	char a[]={'a','b','c','e','f','g'};//strlen()--strlen������Ϊ��ַ��strlen�������еĵ�ַΪ��ʼ��ַ���Χֱ������\0������������\0����
//	printf("%d\n",strlen(a));//���ֵ
//	printf("%d\n",strlen(a+0));//���ֵ
//	printf("%d\n",strlen(*a));//������Ϊ'a'--ascllֵΪ97��strlen��97Ϊ��ַ�����ʽ��Ϊ���ֵ
//	printf("%d\n",strlen(a[1]));
//
//	printf("%d\n",strlen(&a+1));//�������ĵ�ַ+1�����������飬���Ҳ�����ֵ������֮ǰ�����ֵ-6����Ϊ������һ������
//	printf("%d\n",strlen(&a[0]+1));//���ֵ-1����Ϊ������һ��Ԫ��
//
//
//	return 0;
//}
