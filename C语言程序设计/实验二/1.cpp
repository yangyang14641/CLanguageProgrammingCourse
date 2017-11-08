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
	
	random(a,20);               /*随机学号输出模块*/
	printf("随机发生的20个学号：\n");    
	for(i=0;i<20;i++)
	{
		printf("%d\t",a[i]);
		if( (i+1)%5==0)
			printf("\n");
	}
	
	
	maopao(a,20);             /*插入自己学号并排序后学号输出模块*/
	input(a,20);
	printf("20个同学的学号为：\n");     
	for(i=0;i<20;i++)
	{ 
		printf("%d\t",a[i]);
           if( (i+1)%5==0)
			printf("\n");
	}
	
	
	luck(a,20,b,6);            /*获奖情况输出模块*/
	printf("获得一等奖的同学学号为：%d\n",a[b[0]]);
	printf("获得二等奖的同学学号为：%d    %d\n",a[b[1]],a[b[2]]);
	printf("获得三等奖的同学学号为：%d    %4d    %4d\n",a[b[3]],a[b[4]],a[b[5]]);

	
}

