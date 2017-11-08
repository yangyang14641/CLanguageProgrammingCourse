#include <stdio.h>
#include <math.h>

void main()
{
	double a,x1,x2;
	printf("请输入需要开方的数:");
	scanf("%lf",&a);
    x1=a/2;
	x2=(x1+a/x1)/2;
	while(fabs(x2-x1)>=pow(10,-15))
	{   x1=x2;
		x2=(x1+a/x1)/2;		
	}

	printf("开方的结果为:%16.14e\n",x2);
}
