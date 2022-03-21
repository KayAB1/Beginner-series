#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main()
//{
//	//指针类型决定了，指针在进行解引用操作时，能够访问空间的大小
//	int a=0x11223344;
//	int*pa=&a;
//	char*pc=&a;
//	printf("%p\n",pa);
//	printf("%p\n",pc);
//
//	*pa=0;//*pa能够访问4个字节的空间，所以能把a的内容全改成零；
//	//*pc=0;//*pc能访问1个字节的空间，所以只能改变a中一个字节的内容；
//	printf("%d\n",a);
//	printf("%d\n",a);
//
//	return 0;
//}
//
//int main()
//{
//	//指针类型决定了，指针一步能走多远（指针的步长）
//	int a=0x11223344;
//	int*pa=&a;
//	char*pc=&a;
//	printf("%p\n",pa);
//	printf("%p\n\n",pa+1);//因为指针是int*类型的所以pa+1，相当于地址+4//加的是一个int
//
//	printf("%p\n",pc);
//	printf("%p\n",pc+1);//指针是char*类型的pc+1，就相当于地址+1//加的是一个char
//
//	return 0;
//}