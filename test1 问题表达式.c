//#define _CRT_SECURE_NO_WARNINGS
//
////问题表达式
//
//int main()
//{
	//(1)  a*b+c*d+e*f//运算路径不唯一，一种是先算乘法再加法，一种是最后一个乘法后面算

	//(2)  c+--c//运算路径不唯一，无法确定左边的c是--c之前准备还是--之后再准备

	//(3)  非法表达式
	//int i=10;
	//i=i-- - --i*(i=-3)*i++ + ++i;

	//(4)  操作符的优先级无法决定函数的调用顺序
	/*int answer;
	answer=fan()-fan()*fan();*/

	//(5)  不同编译器结果不同
	/*int i=1;
	int ret=(++i)+(++i)+(++i);???*/



	//总结：如果表达式的计算路径不唯一，那就是问题表达式



//
//	return 0;
//}