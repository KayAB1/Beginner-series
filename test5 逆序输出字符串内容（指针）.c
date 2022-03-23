#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

void Ni(char arr[],int sz)
{
	char*left=arr;
	char*right=(arr+sz-1);
	int i=0;
	printf("逆序后：\n");
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
	/*scanf("%s",arr);*///只拿走输入缓冲区中空格前的字符串，以回车作为结束标志
	gets(arr);//读取一行
	sz=strlen(arr);
	//逆序函数//逆序是头尾依次交换，而不是逆打印
	Ni(arr,sz);
	printf("%s ",arr);
	return 0;
}