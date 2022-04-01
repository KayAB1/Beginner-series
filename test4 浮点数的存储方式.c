#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()//浮点数的存储方式和整型数值的存储方式是不一样的
{
	float f=5.5;
	int n=9;
	float* pFloat=(float*)&n;//浮点数的存储，先将十进制浮点数写成二进制；将二进制写成科学记数法的形式，得到S M E 这三个值根据他们的存放规则，将他们存放到对应位置的二进制序列中
	printf("n=%d\n",n);
	printf("*pFloat=%f\n",*pFloat);

	* pFloat=9.0;
	printf("n=%d\n",n);
	printf("*pFloat=%f\n",*pFloat);
	return 0;
}


//5.5
//101.1
//（-1）^0 *1.011 *2^2
//    S        M     E
//0 2+127 1.011->011
//0 ‭10000001‬ 01100000000000000000000  浮点数再内存中的存储（M不够23位着向右补0）
//00 00 b0 40十六进制显示的内存