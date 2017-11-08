#include <stdio.h>

int add(int a ,int b);
int minus(int a,int b);
int chenji(int a,int b);


void main()
{   int (*p)(int a, int b);
	int a,b;
	printf("请输入两个数：");
	scanf("%d%d",&a,&b);
    
	p=add;
	printf("\n两整数的和为%d\n",(*p)(a,b));
	p=minus;
	printf("两数差为%d\n",(*p)(a,b));
	p=chenji;
	printf("两数乘积为%d\n",(*p)(a,b));

}

int add(int a ,int b)
{
	int c;
	c=a+b;
	return c;
}

int minus(int a,int b)
{
	int c;
	c=a-b;
	return c;
}

int chenji(int a,int b)
{
	int c;
	c=a*b;
	return c;
}

/*
请输入两个数：7 8

两整数的和为15
两数差为-1
两数乘积为56
Press any key to continue
*/

