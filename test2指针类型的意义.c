#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main()
//{
//	//ָ�����;����ˣ�ָ���ڽ��н����ò���ʱ���ܹ����ʿռ�Ĵ�С
//	int a=0x11223344;
//	int*pa=&a;
//	char*pc=&a;
//	printf("%p\n",pa);
//	printf("%p\n",pc);
//
//	*pa=0;//*pa�ܹ�����4���ֽڵĿռ䣬�����ܰ�a������ȫ�ĳ��㣻
//	//*pc=0;//*pc�ܷ���1���ֽڵĿռ䣬����ֻ�ܸı�a��һ���ֽڵ����ݣ�
//	printf("%d\n",a);
//	printf("%d\n",a);
//
//	return 0;
//}
//
//int main()
//{
//	//ָ�����;����ˣ�ָ��һ�����߶�Զ��ָ��Ĳ�����
//	int a=0x11223344;
//	int*pa=&a;
//	char*pc=&a;
//	printf("%p\n",pa);
//	printf("%p\n\n",pa+1);//��Ϊָ����int*���͵�����pa+1���൱�ڵ�ַ+4//�ӵ���һ��int
//
//	printf("%p\n",pc);
//	printf("%p\n",pc+1);//ָ����char*���͵�pc+1�����൱�ڵ�ַ+1//�ӵ���һ��char
//
//	return 0;
//}