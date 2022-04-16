#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//struct Test
//{
//	int Num;
//	char*pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}*p;
////假设p 的值为0x100000
////已知结构体Test类型的变量大小为20个字节
//int main()//指针+-整数
//{
//	p=(struct Test*)0x100000;
//	printf("%p\n",p+0x1);
//	printf("%p\n",(unsigned long)p+0x1);//整数加一
//	printf("%p\n",(unsigned int*)p+0x1);//
//
//	return 0;
//}



//int main()//数组的内存布局
//{
//	int a[4]={1,2,3,4};
//	int *prt1=(int *)(&a+1);
//	int *prt2=(int *)((int )a+1);//数组在内存中的存储（小端字节序存储模式）
//	printf("%x,%x\n",prt1[-1],*prt2);//%x以16进制的形式进行打印，16进制前面的无效数可以省略
//
//	return 0;
//}



//int main()//注意圆括号中的逗号
//{
//	int a[3][2]={(0,1),(2,3),(4,5)};
//	int *p=a[0];
//	printf("%d\n",p[0]);
//	return 0;
//}

//int main()//画内存空间/想象内存空间
//{
//	int a[5][5];
//	int(*p)[4];
//	p=a;//因为不兼容所以会报警告
//	printf("%p,%d",&p[4][2]-&a[4][2],&p[4][2]-&a[4][2]);//地址减地址是地址间的元素个数//整数以地址的形式进行打印（%p）是直接以补码的形式打印的
//	return 0;
//}


//int main()
//{
//	int aa[2][5]={1,2,3,4,5,6,7,8,9,10};//没有用{}分行，则元素根据数组的内存空间依次存入
//
//	int *ptr1=(int *)(&aa+1);
//	int *ptr2=(int *)(*(aa+1));
//
//	printf("%d ,%d\n",*(ptr1-1),*(ptr2-1));
//	return 0;
//}


