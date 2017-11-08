#include <stdio.h>

void F(int n);

void main()
{
	int a;
	printf("请输入做立方分解的数：");
	scanf("%d",&a);
	printf("\n%d的立方分解的结果为：\n",a);
	F(a);
}

void F(int n)
{
	int i,a,b,c;
	a=n*n;
	if(n%2==0)
		for(i=0;i<n;i++)
		{
			b=(a-1)-(n-2);
			c=b+2*i;
		printf("%d\t",c);
		}
	else
		for(i=0;i<n;i++)
		{
			b=a-(n-1);
			c=b+2*i;
			printf("%d\t",c);
		}
		printf("\n");
}
