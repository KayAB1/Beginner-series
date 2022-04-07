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
//
//void countal(int i)//计算器函数主体
//{
//	int x,y;
//	int(* arr[4])(int,int)={Add,Sub,Mul,Div};
//	printf("请输入两个数：");
//	scanf("%d %d",&x,&y);
//	printf("计算的结果是%d\n",arr[i-1](x,y));
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
//			printf("输入错误，请重新输入！\n");
//		}
//	}
//	}while(i);
//
//	return 0;
//}


//计算器2.0
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

//////////void countal(int i)//计算器函数主体
//////////{
//////////	int x,y;
//////////	int(* arr[4])(int,int)={Add,Sub,Mul,Div};
//////////	printf("请输入两个数：");
//////////	scanf("%d %d",&x,&y);
//////////	printf("计算的结果是%d\n",arr[i-1](x,y));
//////////
//////////}

//int main()
//{
//	int x,y;
//	int i=0;
//	int(* arr[4])(int,int)={Add,Sub,Mul,Div};//arr是个函数指针数组--也叫转移表
//	do
//	{
//	menu();
//	scanf("%d",&i);
//	if(i>=1&&i<=4)
//	{
//		printf("请输入两个数：");
//	    scanf("%d %d",&x,&y);
//		printf("计算的结果是%d\n",arr[i-1](x,y));//也可以不用[i-1]//将函数指针数组初始化为int(* arr[5])(int,int)={0，Add,Sub,Mul,Div};多存一个元素这样各个函数的下标就和i一一对应起来了；
//	}
//	else if(i==0)
//	{
//		break;
//	}
//	else
//		printf("输入错误\n");
//
//	}while(i);
//
//	return 0;
//}