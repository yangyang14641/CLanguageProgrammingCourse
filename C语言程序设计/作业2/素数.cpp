#include <stdio.h>
#include <math.h>

void main()
{
	int m,i,flag;
    flag=0;
	scanf("%d",&m);
 
		for(i=2;i<=m-1;i++)
			if(m%i==0)
				flag=1;
			
		if(flag==0)
			printf("%d is a prime\n",m);
		else
			printf("%d is not a prime.\n",m);
}
/* 3
3 is a prime
Press any key to continue */