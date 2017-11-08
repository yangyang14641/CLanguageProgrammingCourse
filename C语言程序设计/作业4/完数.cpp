#include <stdio.h>

void wanshu( int n);
void main()
{   int i;
	
	  for(i=2;i<=1000;i++)
		wanshu(i);
	
}

void wanshu(int n)
{   
	int k,i=0,m;
	     m=n;
	for(k=1;k<m;k++)
	{
		if(m%k==0)
		{   
            i=i+k;
		}
	}

		
	
	
	
     if(i==n)
		 printf("%d是完整数\n",n);
	
}

/*
6是完整数
28是完整数
496是完整数
Press any key to continue
*/


