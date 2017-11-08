#include "stdafx.h"
#include <stdio.h>

void maopao(int *a,int n)          /*√∞≈›≈≈–Ú∑®*/
{
	int i,j,t;
	for(i=0;i<n-1;i++)
	{
		for(j=n-1;j>i;j--)
		{
			if(a[j-1]>a[j])
			{
				t=a[j-1];
			    a[j-1]=a[j];
				a[j]=t;
			}
		}


	}
}
