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

//************************************************************************************************************************************************

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
//	printf("%d\n",strlen(*a));//������Ϊ'a'--ascllֵΪ97��strlen��97Ϊ��ַ�����ʽ��Ϊ�Ƿ�����err
//	printf("%d\n",strlen(a[1]));err
//
//	printf("%d\n",strlen(&a+1));//�������ĵ�ַ+1�����������飬���Ҳ�����ֵ������֮ǰ�����ֵ-6����Ϊ������һ������
//	printf("%d\n",strlen(&a[0]+1));//���ֵ-1����Ϊ������һ��Ԫ��
//
//
//	return 0;
//}

//************************************************************************************************************************************************
//int main()//�ַ�����
//{
//	char a[]="abcdef";
//	printf("%d\n",sizeof(a));//7//��˫��������ʼ���ַ����飬��������һ�����ص�/0ϵͳ��Ĭ���ǲ����߸���ģ�����sizeof����Ľ����7
//	printf("%d\n",sizeof(a+0));//4/8
//	printf("%d\n",sizeof(*a));//1
//	printf("%d\n",sizeof(a[1]));//1
//	printf("%d\n",sizeof(&a));//4/8
//	printf("%d\n",sizeof(&a+1));//4/8
//	printf("%d\n",sizeof(&a[0]+1));//4/8
//
//
//	return 0;
//}

//int main()//�ַ�����
//{
//	char a[]="abcdef";
//	printf("%d\n",strlen(a));//6
//	printf("%d\n",strlen(a+0));//6
//	//printf("%d\n",strlen(*a));//Ϊ��Ԫ��'a'��97����97Ϊ��ַ�����ʽ���ǷǷ�����err//0x61==6*16^1+1*16^0==97
//	//printf("%d\n",strlen(a[1]));
//
//	printf("%d\n",strlen(&a));//6//strlen(const char* )//��char(*p)[7]=&arr,���Ի�������Ͳ����ݵľ���//strlen�������еĵ�ַΪ��ʼ��ַһ���ֽ�һ���ֽڵ�������ֱ��/0�����������������Ǵ���һ���ַ��ĵ�ַ����һ���ַ��ĵ�ַ��������һ���ַ�һ���ַ��������ʵģ�
//
//	printf("%d\n",strlen(&a+1));//���ֵ
//	printf("%d\n",strlen(&a[0]+1));//5
//
//
//	return 0;
//}


//************************************************************************************************************************************************

//int main()//�ַ�ָ��
//{
//	char *p="abcdef";
//	printf("%d\n",sizeof(p));//4/8
//	printf("%d\n",sizeof(p+1));//4/8
//	printf("%d\n",sizeof(*p));//1
//	printf("%d\n",sizeof(p[0]));//1   // int arr[10]   arr[0]==*(arr+0)   p[0]==*(p+0)=='a'
//	printf("%d\n",sizeof(&p));//4/8ָ��ĵ�ַ
//	printf("%d\n",sizeof(&p+1));//4/8
//	printf("%d\n",sizeof(&p[0]+1));//4/8
//
//
//	return 0;
//}

//int main()//�ַ�ָ��
//{
//	char *p="abcdef";
//	printf("%d\n",strlen(p));//6
//	printf("%d\n",strlen(p+1));//5
//	//printf("%d\n",strlen(*p));//err
//	//printf("%d\n",strlen(p[0]));//err
//	printf("%d\n",strlen(&p));//���ֵ
//	printf("%d\n",strlen(&p+1));//���ֵ-1
//	printf("%d\n",strlen(&p[0]+1));//5
//
//
//	return 0;
//}


//************************************************************************************************************************************************
//int main()//��ά����
//{
//	int a[3][4]={0};
//	printf("%d\n",sizeof(a));//4*4*3//48                                                      
//	printf("%d\n",sizeof(a[0][0]));//4
//	printf("%d\n",sizeof(a[0]));//16/��һ��Ԫ��--һά�������ռ�ռ�Ĵ�С
//printf("%d\n",sizeof(a[0]+1));//4//a[0]Ϊ��һ��һά���������������sizeof������ֻ�е������������ǲű�ʾ�������飬����������ֻ��ʾ��Ԫ�ص�ַ
//	printf("%d\n",sizeof(*(a[0]+1)));//4
//printf("%d\n",sizeof(a+1));//4/8//�ڶ���һά����ĵ�ַ
//printf("%d\n",sizeof(*(a+1)));//16//�ڶ���һά������
//	printf("%d\n",sizeof(&a[0]+1));//4/8
//	printf("%d\n",sizeof(*(&a[0]+1)));//16 ��ʾ�ڶ���һά������
//	printf("%d\n",sizeof(*a));//16/��һ��һά����ĵ�ַ
//printf("%d\n",sizeof(a[3]));//16//û�е�����//sizeof�ڲ��ı��ʽ�ǲ�������ʵ����Ĳ�����ʵ���ʵģ�ֻ�Ǹ��������������С�������a[3]��a[0]һ��������������������������
//
//
//	return 0;
//}