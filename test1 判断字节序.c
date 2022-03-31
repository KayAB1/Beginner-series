//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//
//int main()//写一段代码告诉我们当前机器的字节序是什么
//{
//	int a=1;
//	char*pa=(char*)&a;//用char*类型只访问内存中一个字节，对这个地址进行解引用着只会访问到第一个字节//类型不兼容用强制类型转换
//	if(*pa==1)
//		printf("小端\n");
//	else if(*pa==0)
//		printf("大端\n");
//
//	return 0;
//}






//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>

//int check_sys()//优化
//{
//	int a=1;
//	return *(char*)&a;
//
//}
//
//
//int main()//写一段代码告诉我们当前机器的字节序是什么
//{
//
//	printf(check_sys()?("小端\n"):("大端\n"));
//	return 0;
//}


//int main()
//{
//	int a=0x11223344;
//	/*int*p=&a;//int*可访问四个字节
//	*p=0;*/
//	char*p=(char*)&a;//char*指针在进行解引用操作时一次只能访问一个字节
//	*p=0;
//
//
//
//
//
//	return 0;
//}