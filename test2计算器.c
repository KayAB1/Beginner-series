//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//
//void menu()
//{
//	printf("***********************\n");
//	printf("*****1.Add    2.Sub****\n");
//	printf("*****3.Mul    4.Div****\n");
//	printf("*********0.exit********\n");
//	printf("��ѡ����������ܣ�");
//
//}
//int Add(int x,int y)
//{
//	return x+y;
//}
//int Sub(int x,int y)
//{
//	return x-y;
//}
//int Mul(int x,int y)
//{
//	return x*y;
//}
//int Div(int x,int y)
//{
//	return x/y;
//}
//
//void countal(int i)//��������������
//{
//	int x,y;
//	int(* arr[4])(int,int)={Add,Sub,Mul,Div};
//	printf("��������������");
//	scanf("%d %d",&x,&y);
//	printf("����Ľ����%d\n",arr[i-1](x,y));
//
//}
//
//int main()
//{
//	int i=0;
//	do
//	{
//	menu();
//	scanf("%d",&i);
//	switch(i)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//		{
//			countal(i);
//			break;
//		}
//	case 0:
//		break;
//	default:
//		{
//			printf("����������������룡\n");
//		}
//	}
//	}while(i);
//
//	return 0;
//}


//������2.0
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//
//void menu()
//{
//	printf("***********************\n");
//	printf("*****1.Add    2.Sub****\n");
//	printf("*****3.Mul    4.Div****\n");
//	printf("*********0.exit********\n");
//	printf("��ѡ����������ܣ�");
//
//}
//int Add(int x,int y)
//{
//	return x+y;
//}
//int Sub(int x,int y)
//{
//	return x-y;
//}
//int Mul(int x,int y)
//{
//	return x*y;
//}
//int Div(int x,int y)
//{
//	return x/y;
//}

//////////void countal(int i)//��������������
//////////{
//////////	int x,y;
//////////	int(* arr[4])(int,int)={Add,Sub,Mul,Div};
//////////	printf("��������������");
//////////	scanf("%d %d",&x,&y);
//////////	printf("����Ľ����%d\n",arr[i-1](x,y));
//////////
//////////}

//int main()
//{
//	int x,y;
//	int i=0;
//	int(* arr[4])(int,int)={Add,Sub,Mul,Div};//arr�Ǹ�����ָ������--Ҳ��ת�Ʊ�
//	do
//	{
//	menu();
//	scanf("%d",&i);
//	if(i>=1&&i<=4)
//	{
//		printf("��������������");
//	    scanf("%d %d",&x,&y);
//		printf("����Ľ����%d\n",arr[i-1](x,y));//Ҳ���Բ���[i-1]//������ָ�������ʼ��Ϊint(* arr[5])(int,int)={0��Add,Sub,Mul,Div};���һ��Ԫ�����������������±�ͺ�iһһ��Ӧ�����ˣ�
//	}
//	else if(i==0)
//	{
//		break;
//	}
//	else
//		printf("�������\n");
//
//	}while(i);
//
//	return 0;
//}