#include <stdio.h>
#define type int
void swap(int *a , int *b);
//��������ĺ��ģ����ػ�׼��
int fenli(type a[] , int s , int e);
//���������㷨�ĵݹ�ʵ�� aΪ���������� sΪҪ��ʼ������±� eΪҪ��������������±� (s,e)��������Χ
void paixu(type a[] , int s , int e)
{
	int i;
	if(e<=s)
	{
		return;
		printf("����Ϊ��");
	}
	i = fenli(a,s,e);
	paixu(a,s,i-1);//�ӿ�ʼ����
	paixu(a,i+1,e);//�ӽ�������
}
 
//��������ĺ��ģ����ػ�׼��
int fenli(type a[] , int s , int e)
{
	
	int i = s-1; //i��jΪbegin��end�ĳ�ʼλ��
	int j = e;
	//��׼ֵ
	type x = a[e];
    //��Ϊ��֪Ҫִ�м��Σ�����ʹ����ѭ��
	while(1)
	{
		while(a[++i] < x);//����������������ô���ڻ�׼ֵ��ߵ�����Ԫ�ص�ֵ<��׼ֵ
 
		while(a[--j] > x){if(j == s) break;};//����������������ô���ڻ�׼ֵ�ұߵ�����Ԫ�ص�ֵ>��׼ֵ
 
		if(i >= j)
		{
			break;
		}
             swap(&a[i],&a[j]);
	}
	swap(&a[i],&a[e]);
	return i;
}
 
void swap(type *a , type *b)
{
        //b��ֵ������a , a��ֵ������b
	type t = *a;
	*a = *b;
	*b = t;
}
 
int main()
{

	type a[10];// = {1,2,3,0,6,8};
    int i = 0;
	printf("����Ҫ�����10������");
	for(i=0;i<10;i++)
	scanf("%d",&a[i]);
	paixu(a,0,9);
	for(i=0;i<10;i++)
    {
      printf("%d ",a[i]);
    }
	printf("\n");
	return 0;

}
