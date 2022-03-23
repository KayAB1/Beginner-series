#define _CRT_SECURE_NO_WARNINGS
//int main()
//{
//	float arr[5];
//	float*p;
//	for(p=&arr[5];p>&arr[0];)//&arr[5]不属于arr的元素地址了，它是&arr[4]后面的一块地址，而arr[4]才是数组的最后一位元素
//	{
//		*--p=0;//p指针以指向空地址（数组外的）开始，以指向数组内的地址结束，是符合标准定义的
//	}
//
//	return 0;
//}

//int main()
//{
//	float arr[5];
//	float*p;
//	for(p=&arr[4];p>=&arr[0];p--)//虽然这样对于数组好理解一些，但最后一次p--会使p指向&arr[0]前面的地址，p指针以指向空地址结束是不符合标准定义的
//	{
//		*p=0;
//	}
//
//	return 0;
//}