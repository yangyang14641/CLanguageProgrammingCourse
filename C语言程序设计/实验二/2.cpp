#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void random( int *a,int n)
{
	int i,j,k,flag;
	srand((unsigned) time(NULL));
	for(;;)                   /*��������װ20�����ظ��������*/
	{
		flag=0;
	   for(i=0;i<n;i++)
		   a[i]=2011*10000+rand()%10000;
	   for(j=0;j<n;j++)       /*nosame ģ�� */
		{  
			for(k=j+1;k<n;k++)
				if(a[j]==a[k])
				   flag=1;
		}

		if(flag==0)
			break;
	}

}