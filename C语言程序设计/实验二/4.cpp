#include "stdafx.h"
#include <stdio.h>

void input(int *a ,int n)
{
	int b,i,t,flag=0;
	printf("����������ѧ�ţ�");
	scanf("%d",&b);
	for(i=0;i<n;i++)       /*nosame ģ��*/
	{
		if(a[i]==b)
		{ t=a[0],a[0]=a[i],a[i]=t;
		  flag=1;
		}
	}
	 
    if(flag==0)
		a[0]=b;
}

