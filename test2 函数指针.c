//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//
//int Add(int x,int y)
//{
//	return x+y;
//}
//
//int main()
//{
//	int a=10;
//	int b=20;
//	int(*pa)(int,int)=&Add;//����Add���Ƕ���ʾ�����ĵ�ַ
//	printf("%d \n",(pa)(a,b));//����ָ����Բ�������ֱ��ʹ�ã���ΪAdd�Ǻ�����ַ��&AddҲ�Ǻ�����ַ��������Add==&Add==pa==*pa
//
//	printf("%d \n",(*pa)(a,b));
//	printf("%d \n",(****pa)(a,b));//*��()���ŵ����ȼ����ߣ�����ģ����Ǻ������ò�����//����ָ���ڽ���ʹ�õ�ʱ��ǰ��Ľ�����*��ʵ�Ǹ�������Բ�д
//	
//
//
//
//	return 0;
//}