#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//struct Test
//{
//	int Num;
//	char*pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}*p;
////����p ��ֵΪ0x100000
////��֪�ṹ��Test���͵ı�����СΪ20���ֽ�
//int main()//ָ��+-����
//{
//	p=(struct Test*)0x100000;
//	printf("%p\n",p+0x1);
//	printf("%p\n",(unsigned long)p+0x1);//������һ
//	printf("%p\n",(unsigned int*)p+0x1);//
//
//	return 0;
//}



//int main()//������ڴ沼��
//{
//	int a[4]={1,2,3,4};
//	int *prt1=(int *)(&a+1);
//	int *prt2=(int *)((int )a+1);//�������ڴ��еĴ洢��С���ֽ���洢ģʽ��
//	printf("%x,%x\n",prt1[-1],*prt2);//%x��16���Ƶ���ʽ���д�ӡ��16����ǰ�����Ч������ʡ��
//
//	return 0;
//}



//int main()//ע��Բ�����еĶ���
//{
//	int a[3][2]={(0,1),(2,3),(4,5)};
//	int *p=a[0];
//	printf("%d\n",p[0]);
//	return 0;
//}

//int main()//���ڴ�ռ�/�����ڴ�ռ�
//{
//	int a[5][5];
//	int(*p)[4];
//	p=a;//��Ϊ���������Իᱨ����
//	printf("%p,%d",&p[4][2]-&a[4][2],&p[4][2]-&a[4][2]);//��ַ����ַ�ǵ�ַ���Ԫ�ظ���//�����Ե�ַ����ʽ���д�ӡ��%p����ֱ���Բ������ʽ��ӡ��
//	return 0;
//}


//int main()
//{
//	int aa[2][5]={1,2,3,4,5,6,7,8,9,10};//û����{}���У���Ԫ�ظ���������ڴ�ռ����δ���
//
//	int *ptr1=(int *)(&aa+1);
//	int *ptr2=(int *)(*(aa+1));
//
//	printf("%d ,%d\n",*(ptr1-1),*(ptr2-1));
//	return 0;
//}


