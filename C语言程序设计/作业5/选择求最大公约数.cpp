#include <stdio.h>
int f1(int a,int b);
int f2(int a,int b);

void main()
{
	int a,b,(*p)(int a,int b);
	printf("������������������ֵ��");
	scanf("%d%d",&a,&b);
	if(a>b)
		p=f1;
	else
		p=f2;

	printf("\n������Ϊ:%d\n",(*p)(a,b));

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
������������������ֵ��27 15

������Ϊ:3
Press any key to continue
*/

/*
������������������ֵ��15 27

������Ϊ:135
Press any key to continue
*/