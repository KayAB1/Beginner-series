#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int my_strlen(char arr[])//��ָ���������ַ�����Ԫ�ظ���//����ָ����ָ������õ�����ָ����ָ��֮���Ԫ�ظ�����ԭ���������ַ�������//��Ϊ�ַ������һ��Ԫ��Ϊ\0������\0�ĵ�ַ��ȥ�ַ����׵�ַ�����ַ�����Ԫ�ظ���Ҳ�����ַ������ģ�\0�����ַ������ݣ�������˫����������ַ���ϵͳ��Ĭ��һ��\0�ǲ����߸���/��
{
	int i=0;
	char*p=arr;
	for(i=0;*p!=0;i++)
	{
		p++;
	}
	return p-arr;
}

int main()
{
    char arr[]="hallo bit";
	int len =my_strlen(arr);
	printf("%d",len);
	return 0;
}