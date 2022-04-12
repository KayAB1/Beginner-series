#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//
//int main()//数组名的含义（一般情况下数组名为首元素地址，除了1：sizeof(数组名)；2：&数组名）
//{
//	int a[]={1,2,3,4};
//	printf("%d\n",sizeof(a));
//	printf("%d\n",sizeof(a+0));//首元素的地址//4/8个字节（32-4；64-8）
//	printf("%d\n",sizeof(*a));//首元素因为是int类型所以是4
//	printf("%d\n",sizeof(a+1));
//	printf("%d\n",sizeof(a[1]));
//	printf("%d\n",sizeof(&a));
//	printf("%d\n",sizeof(*&a));//&和*抵消所以是sizeof（数组名）--16
//	printf("%d\n",sizeof(&a[0]));
//	printf("%d\n",sizeof(&a[0]+1));
//
//
//	return 0;
//}

//************************************************************************************************************************************************

//int main()//字符数组
//{
//	char a[]={'a','b','c','e','f','g'};
//	printf("%d\n",sizeof(a));//6   sizeof计算括号内内容所占空间的大小，不是strlen不以/0为结束
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


//int main()//字符数组
//{
//	char a[]={'a','b','c','e','f','g'};//strlen()--strlen括号中为地址，strlen以括号中的地址为起始地址向后范围直到遇到\0结束，不包括\0在内
//	printf("%d\n",strlen(a));//随机值
//	printf("%d\n",strlen(a+0));//随机值
//	printf("%d\n",strlen(*a));//括号中为'a'--ascll值为97，strlen以97为地址向后访问结果为非法访问err
//	printf("%d\n",strlen(a[1]));err
//
//	printf("%d\n",strlen(&a+1));//这个数组的地址+1跳过整个数组，结果也是随机值不过较之前的随机值-6，因为跳过了一个数组
//	printf("%d\n",strlen(&a[0]+1));//随机值-1，因为跳过了一个元素
//
//
//	return 0;
//}

//************************************************************************************************************************************************
//int main()//字符数组
//{
//	char a[]="abcdef";
//	printf("%d\n",sizeof(a));//7//用双引号来初始化字符数组，数组中有一个隐藏的/0系统会默认是操作者给与的，所以sizeof计算的结果是7
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

//int main()//字符数组
//{
//	char a[]="abcdef";
//	printf("%d\n",strlen(a));//6
//	printf("%d\n",strlen(a+0));//6
//	//printf("%d\n",strlen(*a));//为首元素'a'，97，以97为地址向后访问结果是非法访问err//0x61==6*16^1+1*16^0==97
//	//printf("%d\n",strlen(a[1]));
//
//	printf("%d\n",strlen(&a));//6//strlen(const char* )//而char(*p)[7]=&arr,所以会出现类型不兼容的警告//strlen以括号中的地址为起始地址一个字节一个字节的向后访问直到/0结束（不管括号中是大于一个字符的地址还是一个字符的地址，都是以一个字符一个字符的向后访问的）
//
//	printf("%d\n",strlen(&a+1));//随机值
//	printf("%d\n",strlen(&a[0]+1));//5
//
//
//	return 0;
//}


//************************************************************************************************************************************************

//int main()//字符指针
//{
//	char *p="abcdef";
//	printf("%d\n",sizeof(p));//4/8
//	printf("%d\n",sizeof(p+1));//4/8
//	printf("%d\n",sizeof(*p));//1
//	printf("%d\n",sizeof(p[0]));//1   // int arr[10]   arr[0]==*(arr+0)   p[0]==*(p+0)=='a'
//	printf("%d\n",sizeof(&p));//4/8指针的地址
//	printf("%d\n",sizeof(&p+1));//4/8
//	printf("%d\n",sizeof(&p[0]+1));//4/8
//
//
//	return 0;
//}

//int main()//字符指针
//{
//	char *p="abcdef";
//	printf("%d\n",strlen(p));//6
//	printf("%d\n",strlen(p+1));//5
//	//printf("%d\n",strlen(*p));//err
//	//printf("%d\n",strlen(p[0]));//err
//	printf("%d\n",strlen(&p));//随机值
//	printf("%d\n",strlen(&p+1));//随机值-1
//	printf("%d\n",strlen(&p[0]+1));//5
//
//
//	return 0;
//}


//************************************************************************************************************************************************
//int main()//二维数组
//{
//	int a[3][4]={0};
//	printf("%d\n",sizeof(a));//4*4*3//48                                                      
//	printf("%d\n",sizeof(a[0][0]));//4
//	printf("%d\n",sizeof(a[0]));//16/第一个元素--一维数组的所占空间的大小
//printf("%d\n",sizeof(a[0]+1));//4//a[0]为第一行一维数组的数组名，而sizeof括号中只有单独的数组名是才表示整个数组，否则数组名只表示首元素地址
//	printf("%d\n",sizeof(*(a[0]+1)));//4
//printf("%d\n",sizeof(a+1));//4/8//第二行一维数组的地址
//printf("%d\n",sizeof(*(a+1)));//16//第二行一维数组名
//	printf("%d\n",sizeof(&a[0]+1));//4/8
//	printf("%d\n",sizeof(*(&a[0]+1)));//16 表示第二个一维数组名
//	printf("%d\n",sizeof(*a));//16/第一个一维数组的地址
//printf("%d\n",sizeof(a[3]));//16//没有第四行//sizeof内部的表达式是不参与真实计算的不会真实访问的，只是根据类型来计算大小（这里的a[3]和a[0]一样）！！！！！！！！！！！
//
//
//	return 0;
//}