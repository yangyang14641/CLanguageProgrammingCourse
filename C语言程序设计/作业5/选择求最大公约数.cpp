#include <stdio.h>
int f1(int a,int b);
int f2(int a,int b);

void main()
{
	int a,b,(*p)(int a,int b);
	printf("请输入两个正整数的值：");
	scanf("%d%d",&a,&b);
	if(a>b)
		p=f1;
	else
		p=f2;

	printf("\n计算结果为:%d\n",(*p)(a,b));

}

int f1(int a,int b)
{
	int r;
	if((r=a%b)==0)
		return b;
	else
		return f1(b,r);
}

int f2(int a,int b)
{
	if(b%a==0)
		return b;
	else
		return a*b/f1(a,b);
}

/*
请输入两个正整数的值：27 15

计算结果为:3
Press any key to continue
*/

/*
请输入两个正整数的值：15 27

计算结果为:135
Press any key to continue
*/