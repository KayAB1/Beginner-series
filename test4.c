//#define _crt_secure_no_warnings
#include<stdio.h>


//void my_strcpy(char*arr1,char*arr2)
//{
//	int i=0;
//	for(i=0;;i++)
//	{
//		if(*(arr2+i)!='\0')
//		{
//			*(arr1+i)=*(arr2+i);
//			/*arr1++;
//			arr2++;*/
//			continue;
//		}
//		else
//		{
//			*(arr1+i)=*(arr2+i);
//			break;
//		}
//
//	}
//}

//void my_strcpy(char*arr1,char*arr2)//����õݹ�ʵ���ַ�������ѽ����������
//{
//    *arr1=*arr2;
//	if(*arr2!='\0')
//	{
//	my_strcpy(arr1++,arr2++);
//	}
//}
//void my_strcpy(char*arr1,char*arr2)//6��
//{
//   while(*arr2!='\0')
//   {
//	   *arr1=*arr2;
//	   arr1++;
//	   arr2++;
//   }
//   *arr1=*arr2;
//}

//void my_strcpy(char*arr1,char*arr2)//����
//{
//   while(*arr1++=*arr2++)
//   {
//	   ;
//	
//   }
//}
//
//
//
//
//int main()
//{
//	char arr1[]="#######################";
//	char arr2[]="bit";
//    my_strcpy(arr1,arr2);
//	printf("%s",arr1);
//	return 0;
//}