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
//
//void test1()//������������
//{
//	int arr1[5]={2,5,7,1,4};
//	int sz=sizeof(arr1)/sizeof(arr1[0]);
//	qsort(arr1,sz,sizeof(arr1[0]),cmpi);
//
//
//}
////*********************************************************************************************************************
//
//int cmpf(const void*e1,const void*e2)
//{
//	/*return (int)(*(float*)e1 -*(float*)e2)*///����Ľ�����ǿ������ת�������ͣ�������ɾ��ȶ�ʧ�����޷��Ƚ�0.1�����¸������Ĵ�С
//	return (*(double*)e1 >*(double*)e2)?1:((*(double*)e1 <*(double*)e2)?(-1):0);
//}
//
//void test2()//���򸡵�������
//{
//	double arr2[5]={0.3,0.1,0.0005,5.6,3.2};
//	int sz=sizeof(arr2)/sizeof(arr2[0]);
//	qsort(arr2,sz,sizeof(arr2[0]),cmpf);
//
//
//}
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
//
////**********************************************************************************************************************
//
//
//
//void test3()
//{
//	struct stu arr3[3]={{"zhangshang",30},{"lisi",16},{"wangwu",90}};
//	int sz=sizeof(arr3)/sizeof(arr3[0]);
//    qsort(arr3,sz,sizeof(arr3[0]),cmp_name);
//		
//}
//
//
//
//
//int main()//ʹ��һ��qsort�����������������顢���������顢�ṹ������
//{
//	//test1();//������������
//	//test2();//���򸡵�������
//	//test3();//����ṹ��
//	return 0;
//}