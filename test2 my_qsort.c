//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//
//int cmpi(const void*e1,const void* e2)
//{
//	return *(int*)e1-*(int*)e2;
//
//}
//void Swap(char*buf1,char*buf2,int width)//以字节为单位进行交换，交换宽度个字节后停止
//{
//	int i=0;
//	for(i=0;i<width;i++)
//	{
//		char tmp=*buf2;
//		*buf2=*buf1;
//		*buf1=tmp;
//		buf1++;
//		buf2++;
//
//	}
//}
//
////int width--一个元素的宽度（大小）--（sizeof的单位是字节），单位是字节
//void bublle_sort(void*base,int sz,int width,int(*cmp)(const void*e1,const void*e2))//cmp接收一个函数的地址，在这个函数中通过函数指针的方式对那个函数进行调用，那个函数的功能就是比较两个数的大小
//{
//	int i=0;
//	for(i=0;i<sz-1;i++)//趟数
//	{
//		int j=0;
//		for(j=0;j<sz-1-i;j++)//一趟的比较次数
//		{
//			//两数比较
//			if(cmp((char*)base+j*width,(char*)base+(j+1)*width)>0)//一个元素的宽度是宽度个字节，以char*指针加宽度的形式访问数组的每一位元素
//			{
//				//交换
//				Swap((char*)base+j*width,(char*)base+(j+1)*width,width);//两个相邻元素的地址//如果不传宽度就是以字节的进行交换，而且不知道交换到什么程度停止，所以将宽度传去让字节交换宽度个字节后停止
//		    }
//	    }
//
//
//
//    }
//}
//
//void test1()//排序整型数组
//{
//	int arr1[5]={2,5,7,1,4};
//	int sz=sizeof(arr1)/sizeof(arr1[0]);
//
//	//使用bublle_sort的程序员一定知道自己排序的是什么数据
//	//就应该知道如何比较待排序数组中的元素
//	bublle_sort(arr1,sz,sizeof(arr1[0]),cmpi);//快速排序函数
//
//
//}
//
//////*********************************************************************************************************************
//
//int cmpf(const void*e1,const void*e2)
//{
//	/*return (int)(*(float*)e1 -*(float*)e2)*///相减的结果如果强制类型转换成整型，将会造成精度丢失导致无法比较0.1及以下浮点数的大小
//	return (*(double*)e1 >*(double*)e2)?1:((*(double*)e1 <*(double*)e2)?(-1):0);
//}
//
//void test2()//排序浮点数数组
//{
//	double arr2[5]={0.3,0.1,0.0005,5.6,3.2};
//	int sz=sizeof(arr2)/sizeof(arr2[0]);
//	bublle_sort(arr2,sz,sizeof(arr2[0]),cmpf);
//
//}
//
//
////**********************************************************************************************************************
//struct stu
//{
//	char name[20];
//	int age;
//
//};
//
//int cmp_name(const void*e1,const void*e2)
//{
//	return strcmp(((struct stu*)e1)->name,((struct stu*)e2)->name);
//
//
//}
//
//int cmp_age(const void*e1,const void*e2)
//{
//	return ((struct stu*)e1)->age-((struct stu*)e2)->age;
//
//
//}
//void test3()
//{
//	struct stu arr3[3]={{"zhangshang",30},{"lisi",16},{"wangwu",90}};
//	int sz=sizeof(arr3)/sizeof(arr3[0]);
//    bublle_sort(arr3,sz,sizeof(arr3[0]),cmp_name);
//}
//
//int main()//使用一下qsort函数，排序整型数组、浮点数数组、结构体数组
//{
//	//test1();//排序整型数组
//	//test2();//排序浮点型数组
//	test3();//排序结构体
//	return 0;
//}
//
//
//
//
//
//
//
//
//
//
//
//
////bublle_sort快速排序函数主体
//int cmpi(const void*e1,const void* e2)
//{
//	return *(int*)e1-*(int*)e2;
//
//}
//void Swap(char*buf1,char*buf2,int width)//以字节为单位进行交换，交换宽度个字节后停止
//{
//	int i=0;
//	for(i=0;i<width;i++)
//	{
//		char tmp=*buf2;
//		*buf2=*buf1;
//		*buf1=tmp;
//		buf1++;
//		buf2++;
//
//	}
//}
//
////int width--一个元素的宽度（大小）--（sizeof的单位是字节），单位是字节
//void bublle_sort(void*base,int sz,int width,int(*cmp)(const void*e1,const void*e2))//cmp接收一个函数的地址，在这个函数中通过函数指针的方式对那个函数进行调用，那个函数的功能就是比较两个数的大小
//{
//	int i=0;
//	for(i=0;i<sz-1;i++)//趟数
//	{
//		int j=0;
//		for(j=0;j<sz-1-i;j++)//一趟的比较次数
//		{
//			//两数比较
//			if(cmp((char*)base+j*width,(char*)base+(j+1)*width)>0)//一个元素的宽度是宽度个字节，以char*指针加宽度的形式访问数组的每一位元素
//			{
//				//交换
//				Swap((char*)base+j*width,(char*)base+(j+1)*width,width);//两个相邻元素的地址//如果不传宽度就是以字节的进行交换，而且不知道交换到什么程度停止，所以将宽度传去让字节交换宽度个字节后停止
//		    }
//	    }
//
//
//
//    }
//}
//
//
//void test1()//排序整型数组
//{
//	int arr1[5]={2,5,7,1,4};
//	int sz=sizeof(arr1)/sizeof(arr1[0]);
//
//	//使用bublle_sort的程序员一定知道自己排序的是什么数据
//	//就应该知道如何比较待排序数组中的元素
//	bublle_sort(arr1,sz,sizeof(arr1[0]),cmpi);//快速排序函数
