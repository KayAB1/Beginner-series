#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

void Ni(char arr[],int sz)
{
	char*left=arr;
	char*right=(arr+sz-1);
	int i=0;
	printf("�����\n");
	for(;left<right;left++,right--)
	{
		*left=*left^*right;
		*right=*left^*right;
		*left=*left^*right;
	}

}

int main()
{
	char arr[256]={0};
	int sz=0;
	/*scanf("%s",arr);*///ֻ�������뻺�����пո�ǰ���ַ������Իس���Ϊ������־
	gets(arr);//��ȡһ��
	sz=strlen(arr);
	//������//������ͷβ���ν��������������ӡ
	Ni(arr,sz);
	printf("%s ",arr);
	return 0;
}