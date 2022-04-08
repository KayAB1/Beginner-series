//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//
//
////void qsort (void* base, //目标数组的起始位置
////	        size_t num, //目标数组的元素个数
////			size_t width,//一个元素的元素大小（一个元素的类型）
////            int (*compar)(const void*e1,const void*e2));//函数指针//compare--compare function比较函数//e1和e2是接收你要比较的那两个元素的地址的
//
//
//
////////////////////////////////////////////////////////////////////////////////////////////test1
//int cmpi(const void*e1,const void*e2)
//{
//	return *((int*)e1)-*((int*)e2);
//
//}
//
//void test1()
//{
//	int i=0;
//	int arr[5]={7,43,6,8,9};
//	int sz=sizeof(arr)/sizeof(arr[0]);
//	qsort(arr,sz,sizeof(arr[0]),cmpi);
//	for(i=0;i<sz;i++)
//	printf("%d ",arr[i]);
//
//}
//
////////////////////////////////////////////////////////////////////////////////////////////test2
//int cmpff(const void*e1,const void*e2)
//{
//	/*return (int)(*(float*)e1-*(float*)e2);*///将浮点数强制类转换为整数后会丢失精度，导致小于1的浮点数无法进行排序
//	if(*(float*)e1>*(float*)e2)
//	{
//		return 1;
//	}
//	else if(*(float*)e1<*(float*)e2)
//	{
//		return -1;
//	}
//	else
//		return 0;
//}
//
//void test2()
//{
//	int i=0;
//	float farr[5]={1.2,3.1,0.5,0.01,0.1};
//	int sz=sizeof(farr)/sizeof(farr[0]);
//	qsort(farr,sz,sizeof(farr[0]),cmpff);
//	
//	for(i=0;i<sz;i++)
//	{
//		printf("%f ",farr[i]);
//	}
//}
//
//struct stu
//{
//	char name[20];
//	int age;
//};
//
//
//////////////////////////////////////////////////////////////////////////////////////////////////////test3
//int cmpa(const void*e1,const void*e2)
//{
//	return ((struct stu*)e1)->age -((struct stu*)e2)->age ;//如果想要降序排列前面加个‘-’号就行了
//
//}
//
//int cmpname(const void*e1,const void*e2)
//{
//	return -strcmp(((struct stu*)e1)->name ,((struct stu*)e2)->name);//字符串不可直接进行比较，要用strcmp函数进行比较，当e1>e2时，strcmp返回值>0,  当e1<e2时，strcmp返回值<0,  当e1==e2时，strcmp返回值==0
//
//}
//void test3( )
//{
//	int i=0;
//	struct stu s[3]={{"zhangsan",22},{"lisi",50},{"wamwu",9}};
//	int sz=sizeof(s)/sizeof(s[0]);
//	qsort(s,sz,sizeof(s[0]),cmpname);
//	for(i=0;i<sz;i++)
//	{
//		printf("%s ",s[i].name );
//
//	}
//}
//
//
//int main()
//{
//	test1();//整型数组用qsort函数排序
//	test2();//浮点数数组用qsort函数排序
//	test3();//结构体数组用qsort函数排序
//	return 0;
//}