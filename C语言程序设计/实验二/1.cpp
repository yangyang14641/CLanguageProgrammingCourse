// 1.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <stdio.h>
void random( int *a,int n);
void input(int *a ,int n);
void maopao(int *a,int n);
void luck( int*a,int n,int *b,int m);

void main()
{
	int i,a[20],b[6];
	
	random(a,20);               /*���ѧ�����ģ��*/
	printf("���������20��ѧ�ţ�\n");    
	for(i=0;i<20;i++)
	{
		printf("%d\t",a[i]);
		if( (i+1)%5==0)
			printf("\n");
	}
	
	
	maopao(a,20);             /*�����Լ�ѧ�Ų������ѧ�����ģ��*/
	input(a,20);
	printf("20��ͬѧ��ѧ��Ϊ��\n");     
	for(i=0;i<20;i++)
	{ 
		printf("%d\t",a[i]);
           if( (i+1)%5==0)
			printf("\n");
	}
	
	
	luck(a,20,b,6);            /*��������ģ��*/
	printf("���һ�Ƚ���ͬѧѧ��Ϊ��%d\n",a[b[0]]);
	printf("��ö��Ƚ���ͬѧѧ��Ϊ��%d    %d\n",a[b[1]],a[b[2]]);
	printf("������Ƚ���ͬѧѧ��Ϊ��%d    %4d    %4d\n",a[b[3]],a[b[4]],a[b[5]]);

	
}

