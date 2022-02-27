
//#include <stdio.h>//不使用第三变量，将两个变量的值互换
//
//int main()
//{
//	int a=4;
//	int b=6;
//	a=a+b;
//	b=a-b;
//	a=a-b;
//	printf("%d\n",a);
//	printf("%d\n",b);
//
//	return 0;//以上算法存在bug-整型溢出，如果a与b相加的和超过int的最大值则出现整型溢出问题
//}
//#include<limits.h>
//int main()
//{
//INT_MAX; 2147483647
//}

//#include <stdio.h>
//
//int main()//通过使用按位异或“^”操作符可进行二进制0，1互换，从而实现两变量的互换且不存在整型溢出问题
//{
//	int a=3;
//	int b=5;
//	a=a^b;
//	b=a^b;
//	a=a^b;
//	printf("%d,%d",a,b);
//
//return 0;
//}