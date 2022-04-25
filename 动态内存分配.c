#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<errno.h>

//******************************************************************************************************

//用malloc来开辟动态内存空间
//int main()
//{    //向内存申请10个整型的空间
//	int*p=(int*)malloc(10*sizeof(int));//1.66G     //参数为开辟空间的字节数
//	if(p==NULL)
//	{    //打印错误原因的一个方式
//		printf("%s\n",strerror(errno));
//	}
//	else
//	{   //正常使用空间
//		int i=0;
//		for(i=0;i<10;i++)
//		{
//			p[i]=i;
//		}
//		for(i=0;i<10;i++)
//		{
//
//			printf("%d",p[i]);
//
//		}
//	}
//	//当动态申请的空间不在使用时
//	//应该还给操作系统
//	free(p);
//	p=NULL;//虽然开辟的空间还给操作系统了但是p还是能找到那块空间，为了让这个指针更安全，将其赋为空指针
//
//
//	return 0;
//}


//******************************************************************************************************

//用calloc来开辟动态内存空间

//int main()
//{
//	//开辟动态内存空间
//	int *p=(int*)calloc(10,sizeof(int));
//
  /*  if(p==NULL)//判断指针是否为空
	{    
		printf("%s\n",strerror(errno));
	}
*/
//	//使用动态内存空间
//	int i=0;
//	for(i=0;i<10;i++)
//	{
//		p[i]=i;
//	}
//
//	//使用完动态内存之后进行释放
//	free(p);
//	p=NULL;
//
//
//	return 0;
//}


//******************************************************************************************************
//用realloc来调整用malloc或calloc开辟的动态内存空间

//int main()
//{   
//	int *ptr=NULL;
//	int i=0;
//	int*p=NULL;
//	p=(int*)malloc(5*sizeof(int));
//	if(p==NULL)
//	{    
//		printf("%s\n",strerror(errno));
//	}
//	else
//	{   
//		for(i=0;i<5;i++)
//		{
//			*(p+i)=i;
//		}
//		for(i=0;i<5;i++)
//		{
//
//			printf("%d ",*(p+i));
//
//		}
//		printf("\n");
//	}
//	//调整动态内存空间的大小
//	ptr=(int*)realloc(p,10*sizeof(int));
//	//判断新开辟的空间是否为空指针
//	if(ptr!=NULL)
//	{
//		p=ptr;//返回为非空指针用原来的指针变量来接收地址
//		//使用realloc调整后的动态内存空间
//	for(i=5;i<10;i++)
//	{
//		p[i]=i;
//
//	}
//	for(i=5;i<10;i++)
//	{
//		printf("%d ",*(p+i));
//	}
//	}
//	free(p);
//	p=NULL;
//
//	return 0;
//}





//******************************************************************************************************

//使用动态内存空间的常见错误

//1  用free释放部分动态内存空间

//int main()
//{
//	int*p=(int*)realloc(NULL,40);//malloc(40)
//	if(p==NULL)
//	{
//		printf("%s",strerror(errno));
//	}
//	else
//	{
//		int i=0;
//		for(i=0;i<10;i++)
//		{
//			*p++=i;
//		}
//	}
//	free(p);//p的起始地址已经被改变了，导致动态内存空间的不完全释放这时就会出现问题
//	p=NULL;
//
//	return 0;
//}
