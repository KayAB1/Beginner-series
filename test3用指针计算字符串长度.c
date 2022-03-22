#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int my_strlen(char arr[])//用指针来计算字符串的元素个数//根据指针与指针相减得到的是指针与指针之间的元素个数的原理来计算字符串长度//因为字符串最后一个元素为\0所以用\0的地址减去字符串首地址就是字符串的元素个数也就是字符串长的（\0不做字符串内容，但是由双引号引起的字符串系统会默认一个\0是操作者给的/）
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