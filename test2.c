//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//
//
////void qsort (void* base, //Ŀ���������ʼλ��
////	        size_t num, //Ŀ�������Ԫ�ظ���
////			size_t width,//һ��Ԫ�ص�Ԫ�ش�С��һ��Ԫ�ص����ͣ�
////            int (*compar)(const void*e1,const void*e2));//����ָ��//compare--compare function�ȽϺ���//e1��e2�ǽ�����Ҫ�Ƚϵ�������Ԫ�صĵ�ַ��
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
//	/*return (int)(*(float*)e1-*(float*)e2);*///��������ǿ����ת��Ϊ������ᶪʧ���ȣ�����С��1�ĸ������޷���������
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
//	return ((struct stu*)e1)->age -((struct stu*)e2)->age ;//�����Ҫ��������ǰ��Ӹ���-���ž�����
//
//}
//
//int cmpname(const void*e1,const void*e2)
//{
//	return -strcmp(((struct stu*)e1)->name ,((struct stu*)e2)->name);//�ַ�������ֱ�ӽ��бȽϣ�Ҫ��strcmp�������бȽϣ���e1>e2ʱ��strcmp����ֵ>0,  ��e1<e2ʱ��strcmp����ֵ<0,  ��e1==e2ʱ��strcmp����ֵ==0
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
//	test1();//����������qsort��������
//	test2();//������������qsort��������
//	test3();//�ṹ��������qsort��������
//	return 0;
//}