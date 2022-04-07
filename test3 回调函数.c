//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//
//void menu()
//{
//	printf("***********************\n");
//	printf("*****1.Add    2.Sub****\n");
//	printf("*****3.Mul    4.Div****\n");
//	printf("*********0.exit********\n");
//	printf("请选择计算器功能：");
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
//			printf("请输入两个数：");
//	        scanf("%d %d",&x,&y);
//			printf("%d\n",Add(x,y));
//			break;
//	case 2:
//			printf("请输入两个数：");
//	        scanf("%d %d",&x,&y);
//			printf("%d\n",Add(x,y));
//			break;
//	case 3:
//			printf("请输入两个数：");
//	        scanf("%d %d",&x,&y);
//			printf("%d\n",Add(x,y));
//			break;
//	case 4:
//			printf("请输入两个数：");
//	        scanf("%d %d",&x,&y);
//			printf("%d\n",Add(x,y));//代码中太多重复的部分，过于冗余
//			break;
//	case 0:
//		break;
//	default:
//		{
//			printf("输入错误，请重新输入！\n");
//		}
//	}
//	}while(i);
//
//	return 0;
//}

//void Calc(int(*pf)(int,int))
//{
//	int x,y;
//	printf("请输入两个数：");
//    scanf("%d %d",&x,&y);
//    printf("%d\n",pf(x,y));//回调函数，一个函数在另一个函数中以指针的形式被调用，这个被调用的函数称为回调函数
//
//}
//
//
//int main()//用回调函数的方法来解决冗余问题（将多个函数的功能放到一个函数中去）
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
//			printf("输入错误，请重新输入！\n");
//		}
//	}
//	}while(i);
//
//	return 0;
//}
