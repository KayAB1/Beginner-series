//#define _CRT_SECURE_NO_WARNINGS
//
//
//typedef struct book
//{
//	char name[20];
//	double price;
//
//}sbook;
//
//int cmps(const void*e1,const void *e2)//ʹ�����Լ���������Ԫ�����ݵıȽϷ�����Ҫ�����e1>e2�򷵻ش���0���������e1<=e2,�򷵻�<=0����
//{
//	if(((sbook*)e1)->price>((sbook*)e2)->price){
//		return 1;
//	}
//	else if(((sbook*)e1)->price<((sbook*)e2)->price)
//	{
//		return -1;
//	}
//	else
//		return 0;
//}
//
//void Swap(char*buf1,char*buf2,int width)//��������
//{
//	int i=0;
//	for(i=0;i<width;i++)
//	{
//		char tmp=*buf1;
//		*buf1=*buf2;
//		*buf2=tmp;
//		buf1++;
//		buf2++;
//
//	}
//
//}
//
//void bublle_sort(void*base,int sz,int width,int(*cmp)(const void*e1,const void*e2))//void*��ָ����Խ��������������ݵĵ�ַ
//{
////ð�����򷽷���������
//	int i=0;
//	for(i=0;i<sz-1;i++)//������Ԫ�ظ�����һ��
//	{
//		//һ������ıȽϴ�����Ԫ�ظ�����1��ÿһ�˼�1��
//		int j=0;
//		for(j=0;j<sz-1-i;j++)
//		{
//			if(cmps((char*)base+j*width,(char*)base+(j+1)*width)>0)//�����ݱȽϴ�С//ʹ�������������֪���Լ��Ƚϵ���ʲô���͵����ݣ�Ҳ֪�������������ݵıȽϷ���������������Ҫʹ�����Լ�дһ�������ݱȽϷ����ĺ����������˺������ڴ˺����ڲ���ָ�����ʽ����ʹ����д�ıȽϺ���
//			{
//				//��������
//				Swap((char*)base+j*width,(char*)base+(j+1)*width,width);//������ȸ��ֽھ��ǽ�����һ��Ԫ��
//			}
//		}
//
//	}
//
//}
//
//
//int main()//дһ������������������ṹ������
//{
//	sbook arr[3]={{"xiaoshenk",56.02},{"niaozi",56.03},{"fenchixiaoshuo",55.4}};
//	int sz=sizeof(arr)/sizeof(arr[0]);
//	//ͨ�õĿ����������������Ǹ������͵����飩
//	bublle_sort(arr,sz,sizeof(arr[0]),cmps);//һ��Ԫ�صĴ�С�����ֽ�Ϊ��λ�ģ���Ԫ�ش�СҲ����һ��Ԫ�صĿ�ȴ���ȥ��Ȼ����char*�����õķ�ʽһ���ֽ�һ���ֽڵķ��ʣ����ʵ���ȸ��ֽ�Ϊֹ����Ϊ��������ֽ�Ϊ��λ�ģ������ʿ�ȸ��ֽ�Ҳ���Ƿ�����һ��Ԫ�أ�
//	return 0;
//}


//�ѵ�--���ַ�ָ��ķ�ʽ����һ����Ԫ�أ���p+��ȣ�����Ⱦ���һ��Ԫ�ص��ַ���С��p�ӿ�ȸ��ַ����൱�ڵ�����һ��Ԫ�صĵ�ַ��-------�Լӿ�ȵ���ʽ��������