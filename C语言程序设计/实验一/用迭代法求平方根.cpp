#include <stdio.h>
#include <math.h>

void main()
{
	double a,x1,x2;
	printf("��������Ҫ��������:");
	scanf("%lf",&a);
    x1=a/2;
	x2=(x1+a/x1)/2;
	while(fabs(x2-x1)>=pow(10,-15))
	{   x1=x2;
		x2=(x1+a/x1)/2;		
	}

	printf("�����Ľ��Ϊ:%16.14e\n",x2);
}
