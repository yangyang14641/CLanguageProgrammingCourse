/*
���ڿ���
Ҫ���ڳ����������Լ���ѧ�ţ�8λ��������ѧ�ŵĸ�λ���ַֿ������������
���������벢��������루��������ǽ���λ��0������˵Ļ�������16ȡ����������������ڵ���10��������ȡֵX������ȡֵΪ��������
ͬʱ��Ҫ��ѧ�ź�������һ�������

*/
#include <stdio.h>

void seaperate(int m ,int *a);
void secret(int *a, int *b);

void main()
{
	int m,a[8],b=1,i;
	printf("���������ѧ�ţ�");
	scanf("%d",&m);
    void seaperate(m,a);
	
	printf("\n������ѧ��Ϊ��");
	for(i=0,i<8,i++)
		printf("%d",a[i]);
	
	void secret(a,&b);
	if(b>10)
		printf("���ܺ��ѧ��Ϊ��%dX",m);
	else
	printf("���ܺ�ѧ��Ϊ��%d",m*10+b);
}

void seaperate(int m,int *a)
{
	int i;
	for(i=0;i<8;i++)
	{
		a[i]=m%10;
		m=m/10;
	}
}

void secret(int *a,int* b)
{
	int i;
	for(i=0;i<8;i++)
	{
		if(a[i]!=0)
		{
			b=b*a[i];
		}
	}
	b=b%16;
}






