#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int Add(int x,int y)
{
	return x+y;
}
int Sub(int x,int y)//Sub������д
{
	return x-y;
}
int Mul(int x,int y)//Mul�˷���д
{
	return x*y;
}
int Div(int x,int y)//Div������д
{
	return x/y;
}
int main()
{
	int a=10;
	int b=20;
	int(*pa)(int,int)=Add;//Sub//Mul//Div������Ŷ�������ͷ���������ͬ�ĺ�����ÿ�������ĺ�����Ŷ�дһ������ָ��Ļ�Ч�ʾ�̫���ˣ��������˺���ָ������,Ҳ���Ǻ���ָ�����͵����飬������ÿ��Ԫ�ص������Ǻ���ָ�����͵�
	int(*pb[4])(int,int)={Add,Sub,Mul,Div};
	int i=0;
	for(i=0;i<4;i++)
	{
		printf("%d\n",pb[i](a,b));


	}

	



	return 0;
}
