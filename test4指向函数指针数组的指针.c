//#define _CRT_SECURE_NO_WARNINGS
//
//
//int add(int x,int y)
//{
//	return x+y;
//}
//int main()
//{
//	//������ָ��ķ���ȡַ
//	int arr[4]={0};
//	int (*pa)[4]=&arr;//����ָ��
//
//	int(*pb)(int,int)=add;//����ָ��
//	int(* ppb[4])(int,int)={add};//����ָ������
//	int(* (*pppb)[4])(int,int)=&ppb;//ָ����ָ�������ָ��
//	int (*(*ppppb[4])[4])��int,int��=&pppb;//ÿ��Ԫ�ص�����Ϊ����ָ����������
//	.......
//	return 0;
//}