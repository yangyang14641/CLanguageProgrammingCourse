#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void luck( int*a,int n,int*b,int m)
{
	int i,j,k,flag;
	srand((unsigned) time(NULL));
	for(;;)                    /*�������6��0��19�Ĳ��ظ���װ��b����*/
	{  flag=0;
		for(i=0;i<m;i++)
			b[i]=rand()%19;
	
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
