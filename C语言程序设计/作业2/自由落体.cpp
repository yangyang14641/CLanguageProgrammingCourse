#include <stdio.h>

void main()
{
	double h,s;
	int i,n;
	h=100;
	s=0;
printf("请输入落地的次数:");
scanf("%d",&n);
	
for(i=1;i<=n;i++)
	{  h=h/2.0;
	   s=s+3*h;
	}

	printf("第%d次落地的高度为%lf米，走过的路程为%lf米。\n",n,h,s);
}

/* 请输入落地的次数:10
第10次落地的高度为0.097656米，走过的路程为299.707031米。
Press any key to continue */