#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<errno.h>

//******************************************************************************************************

//1
//void GetMemory(char*p)
//{
//	p=(char*)malloc(100);
//}
//
//void Test(void)
//{
//	char*str=NULL;
//	GetMemory(str);
//	strcpy(str,"hello world");
//	printf(str);
//}
//
//int main()
//{
//	Test();
//	return 0;
//}


//����
//1 ָ�������Ϊʵ��ʱ���Ǵ�ֵ����
//2 ����ʱ����ֱ���
//3 ��������ڴ�й¶������
//p��GetMemory�������βΣ�ֻ���ں����ڲ���Ч���Ⱥ�������֮�󣬶�̬�ڴ�Ŀռ���δ���ͷţ������޷��ҵ������Ի�����ڴ�й¶


//��1
//void GetMemory(char**p)
//{
//	*p=(char*)malloc(100);
//}
//
//void Test(void)
//{
//	char*str=NULL;
//	GetMemory(&str);
//	strcpy(str,"hello world");
//	printf(str);
//	free(str);
//	str=NULL;
//}
//
//int main()
//{
//	Test();
//	return 0;
//}


//��2
//char* GetMemory(char*p)
//{
//	p=(char*)malloc(100);
//	return p;
//}
//
//void Test(void)
//{
//	char*str=NULL;
//	str=GetMemory(str);
//	strcpy(str,"hello world");
//	printf(str);
//	free(str);
//	str=NULL;
//}
//
//int main()
//{
//	Test();
//	return 0;
//}



//******************************************************************************************************
//2

//char*GetMemory(void)
//{
//	char p[]="hello world";
//	return p;//����ջ�ռ�ĵ�ַ
//}
//
//void Test(void)
//{
//	char*str=NULL;
//	str=GetMemory();//ָ��ָ���ͷŵ��Ŀռ��ַ--Ұָ�룬�Ƿ�����
//	printf(str);//���ֵ
//}
//
//int main()
//{
//	Test();
//	return 0;
//}


//3
//int * test()
//{
//	int a=10;
//	return &a;
//}
//
//int main()
//{
//	int*p=test();//Ұָ��
//	*p=20;//�Ƿ������ڴ�
//	return 0;
//}

//4 ���ؾ�̬���ռ��ַ
//int * test()
//{
//	static int a=10;//��̬��
//	return &a;
//}
//
//int main()
//{
//	int*p=test();
//	*p=20;//���Ըı�
//	return 0;
//}


//5 ���ض����ռ��ַ
//int * test()
//{
//	int*ptr=(int*)malloc(100);//����
//	return ptr;
//}
//
//int main()
//{
//	int*p=test();
//	*p=20;//���Ըı�
//  free(p);
//  p=NULL;
//	return 0;
//}
