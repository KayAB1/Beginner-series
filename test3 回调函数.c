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


//int main()
//{   int x,y;
//	int i=0;
//	do
//	{
//	menu();
//	scanf("%d",&i);
//	switch(i)
//	{
//	case 1:
//			printf("��������������");
//	        scanf("%d %d",&x,&y);
//			printf("%d\n",Add(x,y));
//			break;
//	case 2:
//			printf("��������������");
//	        scanf("%d %d",&x,&y);
//			printf("%d\n",Add(x,y));
//			break;
//	case 3:
//			printf("��������������");
//	        scanf("%d %d",&x,&y);
//			printf("%d\n",Add(x,y));
//			break;
//	case 4:
//			printf("��������������");
//	        scanf("%d %d",&x,&y);
//			printf("%d\n",Add(x,y));//������̫���ظ��Ĳ��֣���������
//			break;
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

//void Calc(int(*pf)(int,int))
//{
//	int x,y;
//	printf("��������������");
//    scanf("%d %d",&x,&y);
//    printf("%d\n",pf(x,y));//�ص�������һ����������һ����������ָ�����ʽ�����ã���������õĺ�����Ϊ�ص�����
//
//}
//
//
//int main()//�ûص������ķ���������������⣨����������Ĺ��ܷŵ�һ��������ȥ��
//{   
//	int i=0;
//	do
//	{
//	menu();
//	scanf("%d",&i);
//	switch(i)
//	{
//	case 1:
//			Calc(Add);
//			break;
//	case 2:
//			Calc(Sub);
//			break;
//	case 3:
//			Calc(Mul);
//			break;
//	case 4:
//			Calc(Div);
//			break;
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
