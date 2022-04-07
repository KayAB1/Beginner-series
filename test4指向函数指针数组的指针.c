//#define _CRT_SECURE_NO_WARNINGS
//
//
//int add(int x,int y)
//{
//	return x+y;
//}
//int main()
//{
//	//数组与指针的反复取址
//	int arr[4]={0};
//	int (*pa)[4]=&arr;//数组指针
//
//	int(*pb)(int,int)=add;//函数指针
//	int(* ppb[4])(int,int)={add};//函数指针数组
//	int(* (*pppb)[4])(int,int)=&ppb;//指向函数指针数组的指针
//	int (*(*ppppb[4])[4])（int,int）=&pppb;//每个元素的类型为函数指针数组类型
//	.......
//	return 0;
//}