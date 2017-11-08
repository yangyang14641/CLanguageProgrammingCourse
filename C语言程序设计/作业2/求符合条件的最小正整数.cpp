#include <stdio.h>

void main()
{
	int i;
	for(i=1;;i++)
	{
		if ( (i+3)%5==0 && (i-3)%6==0 )
			break;
	}
	printf("符合与三的和事5的倍数与三的差是6的倍数的最小正整数是：%d\n",i);
}

/* 符合与三的和事5的倍数与三的差是6的倍数的最小正整数是：27
Press any key to continue */