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
//void Swap(char*buf1,char*buf2,int width)//���ֽ�Ϊ��λ���н�����������ȸ��ֽں�ֹͣ
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
////int width--һ��Ԫ�صĿ�ȣ���С��--��sizeof�ĵ�λ���ֽڣ�����λ���ֽ�
//void bublle_sort(void*base,int sz,int width,int(*cmp)(const void*e1,const void*e2))//cmp����һ�������ĵ�ַ�������������ͨ������ָ��ķ�ʽ���Ǹ��������е��ã��Ǹ������Ĺ��ܾ��ǱȽ��������Ĵ�С
//{
//	int i=0;
//	for(i=0;i<sz-1;i++)//����
//	{
//		int j=0;
//		for(j=0;j<sz-1-i;j++)//һ�˵ıȽϴ���
//		{
//			//�����Ƚ�
//			if(cmp((char*)base+j*width,(char*)base+(j+1)*width)>0)//һ��Ԫ�صĿ���ǿ�ȸ��ֽڣ���char*ָ��ӿ�ȵ���ʽ���������ÿһλԪ��
//			{
//				//����
//				Swap((char*)base+j*width,(char*)base+(j+1)*width,width);//��������Ԫ�صĵ�ַ//���������Ⱦ������ֽڵĽ��н��������Ҳ�֪��������ʲô�̶�ֹͣ�����Խ���ȴ�ȥ���ֽڽ�����ȸ��ֽں�ֹͣ
//		    }
//	    }
//
//
//
//    }
//}
//
//void test1()//������������
//{
//	int arr1[5]={2,5,7,1,4};
//	int sz=sizeof(arr1)/sizeof(arr1[0]);
//
//	//ʹ��bublle_sort�ĳ���Աһ��֪���Լ��������ʲô����
//	//��Ӧ��֪����αȽϴ����������е�Ԫ��
//	bublle_sort(arr1,sz,sizeof(arr1[0]),cmpi);//����������
//
//
//}
//
//////*********************************************************************************************************************
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
//int main()//ʹ��һ��qsort�����������������顢���������顢�ṹ������
//{
//	//test1();//������������
//	//test2();//���򸡵�������
//	test3();//����ṹ��
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
////bublle_sort��������������
//int cmpi(const void*e1,const void* e2)
//{
//	return *(int*)e1-*(int*)e2;
//
//}
//void Swap(char*buf1,char*buf2,int width)//���ֽ�Ϊ��λ���н�����������ȸ��ֽں�ֹͣ
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
////int width--һ��Ԫ�صĿ�ȣ���С��--��sizeof�ĵ�λ���ֽڣ�����λ���ֽ�
//void bublle_sort(void*base,int sz,int width,int(*cmp)(const void*e1,const void*e2))//cmp����һ�������ĵ�ַ�������������ͨ������ָ��ķ�ʽ���Ǹ��������е��ã��Ǹ������Ĺ��ܾ��ǱȽ��������Ĵ�С
//{
//	int i=0;
//	for(i=0;i<sz-1;i++)//����
//	{
//		int j=0;
//		for(j=0;j<sz-1-i;j++)//һ�˵ıȽϴ���
//		{
//			//�����Ƚ�
//			if(cmp((char*)base+j*width,(char*)base+(j+1)*width)>0)//һ��Ԫ�صĿ���ǿ�ȸ��ֽڣ���char*ָ��ӿ�ȵ���ʽ���������ÿһλԪ��
//			{
//				//����
//				Swap((char*)base+j*width,(char*)base+(j+1)*width,width);//��������Ԫ�صĵ�ַ//���������Ⱦ������ֽڵĽ��н��������Ҳ�֪��������ʲô�̶�ֹͣ�����Խ���ȴ�ȥ���ֽڽ�����ȸ��ֽں�ֹͣ
//		    }
//	    }
//
//
//
//    }
//}
//
//
//void test1()//������������
//{
//	int arr1[5]={2,5,7,1,4};
//	int sz=sizeof(arr1)/sizeof(arr1[0]);
//
//	//ʹ��bublle_sort�ĳ���Աһ��֪���Լ��������ʲô����
//	//��Ӧ��֪����αȽϴ����������е�Ԫ��
//	bublle_sort(arr1,sz,sizeof(arr1[0]),cmpi);//����������
