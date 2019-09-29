#include <stdio.h>
#define type int
void swap(int *a , int *b);
//快速排序的核心，返回基准点
int fenli(type a[] , int s , int e);
//快速排序算法的递归实现 a为待排序数组 s为要开始排序的下标 e为要结束排序的数组下标 (s,e)就是排序范围
void paixu(type a[] , int s , int e)
{
	int i;
	if(e<=s)
	{
		return;
		printf("数组为空");
	}
	i = fenli(a,s,e);
	paixu(a,s,i-1);//从开始排序
	paixu(a,i+1,e);//从结束排序
}
 
//快速排序的核心，返回基准点
int fenli(type a[] , int s , int e)
{
	
	int i = s-1; //i，j为begin和end的初始位置
	int j = e;
	//基准值
	type x = a[e];
    //因为不知要执行几次，所以使用死循环
	while(1)
	{
		while(a[++i] < x);//假设数组已有序，那么，在基准值左边的所有元素的值<基准值
 
		while(a[--j] > x){if(j == s) break;};//假设数组已有序，那么，在基准值右边的所有元素的值>基准值
 
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
        //b的值交换到a , a的值交换到b
	type t = *a;
	*a = *b;
	*b = t;
}
 
int main()
{

	type a[10];// = {1,2,3,0,6,8};
    int i = 0;
	printf("输入要排序的10个数：");
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
