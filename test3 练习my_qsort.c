//#define _CRT_SECURE_NO_WARNINGS
//
//
//typedef struct book
//{
//	char name[20];
//	double price;
//
//}sbook;
//
//int cmps(const void*e1,const void *e2)//使用者自己创建的两元素数据的比较方法，要求如果e1>e2则返回大于0的数，如果e1<=e2,则返回<=0的数
//{
//	if(((sbook*)e1)->price>((sbook*)e2)->price){
//		return 1;
//	}
//	else if(((sbook*)e1)->price<((sbook*)e2)->price)
//	{
//		return -1;
//	}
//	else
//		return 0;
//}
//
//void Swap(char*buf1,char*buf2,int width)//交换函数
//{
//	int i=0;
//	for(i=0;i<width;i++)
//	{
//		char tmp=*buf1;
//		*buf1=*buf2;
//		*buf2=tmp;
//		buf1++;
//		buf2++;
//
//	}
//
//}
//
//void bublle_sort(void*base,int sz,int width,int(*cmp)(const void*e1,const void*e2))//void*的指针可以接收任意类型数据的地址
//{
////冒泡排序方法进行排序
//	int i=0;
//	for(i=0;i<sz-1;i++)//趟数（元素个数减一）
//	{
//		//一趟里面的比较次数（元素个数减1再每一趟减1）
//		int j=0;
//		for(j=0;j<sz-1-i;j++)
//		{
//			if(cmps((char*)base+j*width,(char*)base+(j+1)*width)>0)//两数据比较大小//使用这个函数的人知道自己比较的是什么类型的数据，也知道这种类型数据的比较方法，所以这里需要使用者自己写一个两数据比较方法的函数，传给此函数，在此函数内部以指针的形式调用使用者写的比较函数
//			{
//				//交换函数
//				Swap((char*)base+j*width,(char*)base+(j+1)*width,width);//交换宽度个字节就是交换了一个元素
//			}
//		}
//
//	}
//
//}
//
//
//int main()//写一个快速排序函数，排序结构体数组
//{
//	sbook arr[3]={{"xiaoshenk",56.02},{"niaozi",56.03},{"fenchixiaoshuo",55.4}};
//	int sz=sizeof(arr)/sizeof(arr[0]);
//	//通用的快速排序函数（可能是各种类型的数组）
//	bublle_sort(arr,sz,sizeof(arr[0]),cmps);//一个元素的大小是以字节为单位的，将元素大小也就是一个元素的宽度传过去，然后以char*解引用的方式一个字节一个字节的访问，访问到宽度个字节为止（因为宽度是以字节为单位的）（访问宽度个字节也就是访问了一个元素）
//	return 0;
//}


//难点--以字符指针的方式访问一整个元素，（p+宽度）（宽度就是一个元素的字符大小，p加宽度个字符就相当于到了下一个元素的地址）-------以加宽度的形式访问数组