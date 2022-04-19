#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<assert.h>
#include<string.h>

//长度不受限制的字符串函数


//1 strlen

//int my_strlen(const char*str)//递归实现strlen
//{
//	assert(str!=NULL);
//	if(*str)
//	{
//		return 1+my_strlen(str+1);
//	}
//	else
//		return 0;
//}
//int main()
//{
//	char arr[]="abcdef";
//	int len=my_strlen(arr);
//	printf("%d\n",len);
//
//	if(strlen("abc")-strlen("abcdef")>0)//因为strlen的返回值是无符号数（size_t），所以是大于0的数（strlen易错点）
//	{
//		printf("hehe\n");
//	}
//	else
//		printf("haha\n");
//	return 0;
//}

//strlen知识总结
//1 字符串以'\0'作为结束标志，strlen函数返回的是在字符串中'\0'前面出现的字符个数（不包括\0）
//2 参数指向的字符串必须要以'\0'结束
//3 注意函数的返回值为size_t，是无符号的（易错）
//4 strlen的模拟实现（计数器 递归 指针减指针）

//******************************************************************************************************************


//2 strcpy

//实现
//char* my_strcpy(char*dest,const char*src)
//{
//	char* ret =dest;
//	assert(dest!=NULL);
//	assert(src!=NULL);
//	while(*dest++=*src++)//把源头（src）拷到目的地（dest）里面去，包括'\0'
//	{
//		;
//	}
//	return ret;//返回目的地的首元素地址，方便函数的链式访问
//}
//
//int main()
//{
//	char arr1[]="abcdef";
//	//错误示范
//	//char*arr1="abcdef";//指针维护的常量字符串，该字符串不能被修改不能作为目的地
//	char arr2[]="bit";
//	//错误示范
//	//char arr2[]={'b','i','t'};//源字符串中不含'\0'，进行拷贝时会越界
//	printf("%s\n",my_strcpy(arr1,arr2));
//
//	return 0;
//}

//strcpy知识总结
//1 源字符串必须以'\0'结束（不然会导致越界访问）
//2 会将源字符串中的'\0'拷贝到目标字符串（目标空间）
//3 目标空间必须足够大，以确保能存放源字符串
//4 目标空间必须可变（否则程序崩溃）
//5 模拟实现strcpy

//******************************************************************************************************************

//3 strcat //字符串追加

//char*my_strcat(char*dest,const char*src)
//{
//	char*ret=dest;
//	/*assert(dest!=NULL);
//	assert(src!=NULL);*/
//	assert(dest&&src);//如果指针为空指针就是为假-0
//	while(*dest)
//	{
//		dest++;
//	}
//	while(*dest++=*src++)
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	char arr1[30]="hello";
//	//char arr1[30]="hello\0xxxxxxxxxx";//为了更好的显示，arr2中的'\0'也拷贝过去了
//	char arr2[]="world";
//	printf("%s\n",my_strcat(arr1,arr2));
//	return 0;
//}

//strcat知识点总结
//1 源字符串必须以'\0'结束
//2 目标空间必须足够大，能容纳下源字符串的内容
//3 目标空间必须可修改，且目标空间必须有'\0'，源字符串以目标空间的'\0'开始向后追加
//4 字符串自己给自己追加，如何？
//5 模拟实现strcat

//******************************************************************************************************************

//4 strcmp(字符串比较)(比较对应字符的ASCII码值)

//方法1
//int my_strcmp(const char*str1,const char*str2)
//{
//	assert(str1&&str2);
//	while(*str1==*str2)
//	{
//		if(*str1=='\0')
//		{
//            return 0;//相等
//		}
//		str1++;
//		str2++;
//	}
//	if(*str1>*str2)
//	{
//		return 1;//str1>str2 则返回 >0的数值（可以是1也可以是其他正数）
//	}
//	else//str1<str2 则返回 <0的数值（可以是-1也可以是其他负数）
//		return -1;
//}

//方法2
//int my_strcmp(const char*str1,const char*str2)
//{
//	assert(str1&&str2);
//	while(*str1==*str2)
//	{
//		if(*str1=='\0')
//		{
//            return 0;//相等
//		}
//		str1++;
//		str2++;
//	}
//
//	return (*str1-*str2);//ASCII码值相减
//}
//
//
//int main()
//{
//	char*p1="abcdef";
//	char*p2="abqew";
//	//printf("%d\n",strcmp(p1,p2));
//	printf("%d",my_strcmp(p1,p2));
//	return 0;
//}


//strcmp知识点总结
//1 字符串比较方法：对应字符进行比较，一样则跳下一对，直到对应字符不一样然后比较这两个字符的ASCII码值来判断两个字符串的大小（仅需比较一对不一样的字符来判断字符串的大小），如果对应字符完全一样则两个字符串相等
//2 标准规定：
   //1）第一个字符串大于第二个字符串，则返回大于0的数字（不一定只返回1）
   //2）第一个字符串小于第二个字符串，则返回小于0的数字（不一定只返回-1）
   //3）第一个字符串等于第二个字符串，则返回0
//3 模拟实现strcmp


//******************************************************************************************************************


//长度受限制的字符串函数********************************************************************************************

//1 strncpy

//实现
//char* my_strncpy(char*dest,const char*src,size_t num)
//{
//    char* ret=dest;
//	while(num&&(*dest++=*src++))
//	{
//		num--;
//	}
//	if(num)
//	{
//		while(--num)
//		{
//			*dest++='\0';
//
//		}
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[]="abcdef";
//	char arr2[]="bit";
//	printf("%s\n",my_strncpy(arr1,arr2,5));//会考虑到目标空间的大小，相对安全
//
//	return 0;
//}

//strncpy知识总结
//1 将num个字符从源字符串拷贝目标空间
//2 如果源字符串的长度小于num，则在拷贝完源字符串后，在目标空间后追加0，直到num个
//3 模拟实现strncpy

//******************************************************************************************************************

//2 strncat //字符串追加

//char*my_strncat(char*dest,const char*src,size_t num)
//{
//	char*ret=dest;
//	int i=0;
//	/*assert(dest!=NULL);
//	assert(src!=NULL);*/
//	assert(dest&&src);//如果指针为空指针就是为假-0
//	while(*dest)
//	{
//		dest++;
//	}
//	dest--;
//	while(num--)
//	{
//		if(!(*dest++=*src++));
//		{
//			return ret;
//		}
//	}
//	*dest='\0';
//	return ret;
//}
//
//int main()
//{
//	/*char arr1[30]="hello";*/
//	char arr1[30]="hello\0xxxxxxxxxx";//为了更好的显示，arr2中的'\0'也拷贝过去了
//	char arr2[]="world";
//	printf("%s\n",my_strncat(arr1,arr2,7));
//	return 0;
//}

//strncat知识点总结
//1 将相应个数的源字符串拷贝到目标空间后会默认再加一个'\0'
//2 当源字符串小于num的时候，只拷贝源字符串，不用补num位

//******************************************************************************************************************

////strncmp
//int my_strncmp(const char*str1,const char*str2,size_t num)
//{
//	assert(str1&&str2);
//模拟实现
//
//}
//
//
//int main()
//{
//	char*p1="abcdef";
//	char*p2="abqew";
//	//printf("%d\n",strcmp(p1,p2));
//	printf("%d",my_strncmp(p1,p2,4));
//	return 0;
//}


//strncmp知识点总结


//******************************************************************************************************************

//strstr//字符串查找
//有KMP算法也可以实现strstr的功能
//char*my_strstr(const char*p1,const char*p2)//第一个字符串不断以新的起始位置与第二个字符串的起始位置进行比较
//{
//	const char*s1=p1;
//	const char*s2=p2;
//	const char*cur=p1;
//	assert(p1&&p2);
//	if(!(*p2))
//	{
//		return (char*)p1;
//	}
//
//	while(*cur)//被查找的字符串不为空指针
//	{
//		s1=cur;//第一个字符串不断以新的起始位置与第二个字符串的起始位置进行比较
//		s2=p2;
//		while((*s1!='\0')&&(*s2!='\0')&&(*s1==*s2))//(*s1&&*s2&&!(*s1-*s2))
//		{
//
//			s1++;
//			s2++;
//
//		}
//		if(*s2=='\0')
//		{
//			return (char*)cur;//找到子串
//
//		}
//
//
//		cur++;
//	}
//	return NULL;//找不到子串
//
//
//}
//
//int main()
//{
//	char*p1="abbbcdef";
//	char*p2="bbc";
//	/*char*ret=strstr(p1,p2);*/
//
//	char*ret=my_strstr(p1,p2);
//	if(ret==NULL)
//	{
//		printf("找不到子串");
//	}
//	else
//		printf("%s",ret);
//	return 0;
//}


//******************************************************************************************************************

//strtok//字符串分割函数

//int main()
//{
//	char arr[]="1622@qq.com";
//	char *sep="@.";//以@和.作为分割符
//	char buf[1024]={0};
//	char*ret=NULL;
//	strcmp(buf,arr);
//	for(ret=strtok(arr,sep);ret!=NULL;ret=strtok(NULL,sep))//使用方法
//	{
//		printf("%s ",ret);
//	}
//	printf("\n");
//	return 0;
//}

//******************************************************************************************************************

//strerror//错误报告函数

//#include<errno.h>
//
//int main()
//{
//	//打开文件
//	FILE*pf=fopen("text.txt","r");
//	if(pf==NULL)
//	{
//		printf("%s",strerror(errno));//errno由库函数维护--为错误码每个错误码对应着一个错误信息（当库函数发生错误的时候都会产生一个错误码（errno））
//	}
//	else
//	{
//		printf("open file success\n");
//	}
//
//	return 0;
//}


//******************************************************************************************************************

//内存操作函数

//1 memcpy//内存拷贝适用于各种类型的数组

int main()
{
	int arr[]={1,2,3,4,5};
	int arr2[6]={0};
	int i=0;
	while(i<5)
	{
		printf("%d ",arr[i]);
		i++;
	}
	return 0;
}