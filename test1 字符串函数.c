#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<assert.h>
#include<string.h>

//���Ȳ������Ƶ��ַ�������


//1 strlen

//int my_strlen(const char*str)//�ݹ�ʵ��strlen
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
//	if(strlen("abc")-strlen("abcdef")>0)//��Ϊstrlen�ķ���ֵ���޷�������size_t���������Ǵ���0������strlen�״�㣩
//	{
//		printf("hehe\n");
//	}
//	else
//		printf("haha\n");
//	return 0;
//}

//strlen֪ʶ�ܽ�
//1 �ַ�����'\0'��Ϊ������־��strlen�������ص������ַ�����'\0'ǰ����ֵ��ַ�������������\0��
//2 ����ָ����ַ�������Ҫ��'\0'����
//3 ע�⺯���ķ���ֵΪsize_t�����޷��ŵģ��״�
//4 strlen��ģ��ʵ�֣������� �ݹ� ָ���ָ�룩

//******************************************************************************************************************


//2 strcpy

//ʵ��
//char* my_strcpy(char*dest,const char*src)
//{
//	char* ret =dest;
//	assert(dest!=NULL);
//	assert(src!=NULL);
//	while(*dest++=*src++)//��Դͷ��src������Ŀ�ĵأ�dest������ȥ������'\0'
//	{
//		;
//	}
//	return ret;//����Ŀ�ĵص���Ԫ�ص�ַ�����㺯������ʽ����
//}
//
//int main()
//{
//	char arr1[]="abcdef";
//	//����ʾ��
//	//char*arr1="abcdef";//ָ��ά���ĳ����ַ��������ַ������ܱ��޸Ĳ�����ΪĿ�ĵ�
//	char arr2[]="bit";
//	//����ʾ��
//	//char arr2[]={'b','i','t'};//Դ�ַ����в���'\0'�����п���ʱ��Խ��
//	printf("%s\n",my_strcpy(arr1,arr2));
//
//	return 0;
//}

//strcpy֪ʶ�ܽ�
//1 Դ�ַ���������'\0'��������Ȼ�ᵼ��Խ����ʣ�
//2 �ὫԴ�ַ����е�'\0'������Ŀ���ַ�����Ŀ��ռ䣩
//3 Ŀ��ռ�����㹻����ȷ���ܴ��Դ�ַ���
//4 Ŀ��ռ����ɱ䣨������������
//5 ģ��ʵ��strcpy

//******************************************************************************************************************

//3 strcat //�ַ���׷��

//char*my_strcat(char*dest,const char*src)
//{
//	char*ret=dest;
//	/*assert(dest!=NULL);
//	assert(src!=NULL);*/
//	assert(dest&&src);//���ָ��Ϊ��ָ�����Ϊ��-0
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
//	//char arr1[30]="hello\0xxxxxxxxxx";//Ϊ�˸��õ���ʾ��arr2�е�'\0'Ҳ������ȥ��
//	char arr2[]="world";
//	printf("%s\n",my_strcat(arr1,arr2));
//	return 0;
//}

//strcat֪ʶ���ܽ�
//1 Դ�ַ���������'\0'����
//2 Ŀ��ռ�����㹻����������Դ�ַ���������
//3 Ŀ��ռ������޸ģ���Ŀ��ռ������'\0'��Դ�ַ�����Ŀ��ռ��'\0'��ʼ���׷��
//4 �ַ����Լ����Լ�׷�ӣ���Σ�
//5 ģ��ʵ��strcat

//******************************************************************************************************************

//4 strcmp(�ַ����Ƚ�)(�Ƚ϶�Ӧ�ַ���ASCII��ֵ)

//����1
//int my_strcmp(const char*str1,const char*str2)
//{
//	assert(str1&&str2);
//	while(*str1==*str2)
//	{
//		if(*str1=='\0')
//		{
//            return 0;//���
//		}
//		str1++;
//		str2++;
//	}
//	if(*str1>*str2)
//	{
//		return 1;//str1>str2 �򷵻� >0����ֵ��������1Ҳ����������������
//	}
//	else//str1<str2 �򷵻� <0����ֵ��������-1Ҳ����������������
//		return -1;
//}

//����2
//int my_strcmp(const char*str1,const char*str2)
//{
//	assert(str1&&str2);
//	while(*str1==*str2)
//	{
//		if(*str1=='\0')
//		{
//            return 0;//���
//		}
//		str1++;
//		str2++;
//	}
//
//	return (*str1-*str2);//ASCII��ֵ���
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


//strcmp֪ʶ���ܽ�
//1 �ַ����ȽϷ�������Ӧ�ַ����бȽϣ�һ��������һ�ԣ�ֱ����Ӧ�ַ���һ��Ȼ��Ƚ��������ַ���ASCII��ֵ���ж������ַ����Ĵ�С������Ƚ�һ�Բ�һ�����ַ����ж��ַ����Ĵ�С���������Ӧ�ַ���ȫһ���������ַ������
//2 ��׼�涨��
   //1����һ���ַ������ڵڶ����ַ������򷵻ش���0�����֣���һ��ֻ����1��
   //2����һ���ַ���С�ڵڶ����ַ������򷵻�С��0�����֣���һ��ֻ����-1��
   //3����һ���ַ������ڵڶ����ַ������򷵻�0
//3 ģ��ʵ��strcmp


//******************************************************************************************************************


//���������Ƶ��ַ�������********************************************************************************************

//1 strncpy

//ʵ��
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
//	printf("%s\n",my_strncpy(arr1,arr2,5));//�ῼ�ǵ�Ŀ��ռ�Ĵ�С����԰�ȫ
//
//	return 0;
//}

//strncpy֪ʶ�ܽ�
//1 ��num���ַ���Դ�ַ�������Ŀ��ռ�
//2 ���Դ�ַ����ĳ���С��num�����ڿ�����Դ�ַ�������Ŀ��ռ��׷��0��ֱ��num��
//3 ģ��ʵ��strncpy

//******************************************************************************************************************

//2 strncat //�ַ���׷��

//char*my_strncat(char*dest,const char*src,size_t num)
//{
//	char*ret=dest;
//	int i=0;
//	/*assert(dest!=NULL);
//	assert(src!=NULL);*/
//	assert(dest&&src);//���ָ��Ϊ��ָ�����Ϊ��-0
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
//	char arr1[30]="hello\0xxxxxxxxxx";//Ϊ�˸��õ���ʾ��arr2�е�'\0'Ҳ������ȥ��
//	char arr2[]="world";
//	printf("%s\n",my_strncat(arr1,arr2,7));
//	return 0;
//}

//strncat֪ʶ���ܽ�
//1 ����Ӧ������Դ�ַ���������Ŀ��ռ���Ĭ���ټ�һ��'\0'
//2 ��Դ�ַ���С��num��ʱ��ֻ����Դ�ַ��������ò�numλ

//******************************************************************************************************************

////strncmp
//int my_strncmp(const char*str1,const char*str2,size_t num)
//{
//	assert(str1&&str2);
//ģ��ʵ��
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


//strncmp֪ʶ���ܽ�


//******************************************************************************************************************

//strstr//�ַ�������
//��KMP�㷨Ҳ����ʵ��strstr�Ĺ���
//char*my_strstr(const char*p1,const char*p2)//��һ���ַ����������µ���ʼλ����ڶ����ַ�������ʼλ�ý��бȽ�
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
//	while(*cur)//�����ҵ��ַ�����Ϊ��ָ��
//	{
//		s1=cur;//��һ���ַ����������µ���ʼλ����ڶ����ַ�������ʼλ�ý��бȽ�
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
//			return (char*)cur;//�ҵ��Ӵ�
//
//		}
//
//
//		cur++;
//	}
//	return NULL;//�Ҳ����Ӵ�
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
//		printf("�Ҳ����Ӵ�");
//	}
//	else
//		printf("%s",ret);
//	return 0;
//}


//******************************************************************************************************************

//strtok//�ַ����ָ��

//int main()
//{
//	char arr[]="1622@qq.com";
//	char *sep="@.";//��@��.��Ϊ�ָ��
//	char buf[1024]={0};
//	char*ret=NULL;
//	strcmp(buf,arr);
//	for(ret=strtok(arr,sep);ret!=NULL;ret=strtok(NULL,sep))//ʹ�÷���
//	{
//		printf("%s ",ret);
//	}
//	printf("\n");
//	return 0;
//}

//******************************************************************************************************************

//strerror//���󱨸溯��

//#include<errno.h>
//
//int main()
//{
//	//���ļ�
//	FILE*pf=fopen("text.txt","r");
//	if(pf==NULL)
//	{
//		printf("%s",strerror(errno));//errno�ɿ⺯��ά��--Ϊ������ÿ���������Ӧ��һ��������Ϣ�����⺯�����������ʱ�򶼻����һ�������루errno����
//	}
//	else
//	{
//		printf("open file success\n");
//	}
//
//	return 0;
//}


//******************************************************************************************************************

//�ڴ��������

//1 memcpy//�ڴ濽�������ڸ������͵�����

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