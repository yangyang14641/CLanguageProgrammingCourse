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
			printf("%d��%d��Ϊͬ������\n",n,i);
		}

		else if ((i>=10)&&(i<=31)&&(n%100==i))
		{
	        printf("%d��%d��Ϊͬ������\n",n,i);
		}
		else if((i>31)&&((n%100==i)||(n/10%10+n/100%10*10)==i))
		{	
			printf("%d��%d��Ϊͬ������\n",n,i);
		}


	}
}

/*25��5��Ϊͬ������
36��6��Ϊͬ������
625��25��Ϊͬ������
2500��50��Ϊͬ������
3600��60��Ϊͬ������
5776��76��Ϊͬ������
Press any key to continue */

	
	   