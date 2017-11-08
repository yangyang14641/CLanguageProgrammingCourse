#include <stdio.h>

void main()
{
	int i,n;

	for(i=1;i<99;)
	{ 
		i++;
		n=i*i;

		if(i<3)
			continue;
		else if( (i>3)&&(i<10)&&(n%10==i))
		{
			printf("%d与%d互为同构数。\n",n,i);
		}

		else if ((i>=10)&&(i<=31)&&(n%100==i))
		{
	        printf("%d与%d互为同构数。\n",n,i);
		}
		else if((i>31)&&((n%100==i)||(n/10%10+n/100%10*10)==i))
		{	
			printf("%d与%d互为同构数。\n",n,i);
		}


	}
}

/*25与5互为同构数。
36与6互为同构数。
625与25互为同构数。
2500与50互为同构数。
3600与60互为同构数。
5776与76互为同构数。
Press any key to continue */

	
	   