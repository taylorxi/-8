#include<stdio.h>
#include<stdlib.h>
int digui(int a[],int l,int r,int key)
{
	if(l>=r)
		return -1;
	int mid=(l+r)/2;
	if(a[mid]==key)
		return mid;
	if(a[mid]>key)
		return digui(a,l,mid,key);
		else
		return digui(a,mid+1,r,key);
}
int digui(int a[],size_t len,int key)
{
	return digui(a,0,len,key);
}
int main()
{
	int a[10]= {1,2,3,4,5,6,7,8,9,10};
	for(int i=0;i<10;i++)
	{
		a[i]=i+10;
		printf("%d  ",a[i]);
	}

	printf("%d\n",digui(a,1,10));
}