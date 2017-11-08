#include "stdafx.h"
#include <stdio.h>

void input(int *a ,int n)
{
	int b,i,t,flag=0;
	printf("请输入您的学号：");
	scanf("%d",&b);
	for(i=0;i<n;i++)       /*nosame 模块*/
	{
		if(a[i]==b)
		{ t=a[0],a[0]=a[i],a[i]=t;
		  flag=1;
		}
	}
	 
    if(flag==0)
		a[0]=b;
}

