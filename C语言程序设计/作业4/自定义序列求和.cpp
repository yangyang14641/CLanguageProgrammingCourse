#include <stdio.h>
#define N 10

void main()
{
	int sum(int v[],int n);
	int a[N]={1,2,3,4,5,6,7,8,9,10},total,pos;
	printf("�����������ʼԪ����ţ�");
	scanf("%d",&pos);
	total=sum(&a[pos],N-pos);
	printf("total=%ld\n",total);
}
int sum(int v[],int n)
{
	int i,s=0;
	for(i=0;i<n;i++)
		s=s+v[i];
	return s;
}
/*
�����������ʼԪ����ţ�2
total=52
Press any key to continue
*/
