#include <stdio.h>

int add(int a ,int b);
int minus(int a,int b);
int chenji(int a,int b);


void main()
{   int (*p)(int a, int b);
	int a,b;
	printf("��������������");
	scanf("%d%d",&a,&b);
    
	p=add;
	printf("\n�������ĺ�Ϊ%d\n",(*p)(a,b));
	p=minus;
	printf("������Ϊ%d\n",(*p)(a,b));
	p=chenji;
	printf("�����˻�Ϊ%d\n",(*p)(a,b));

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
��������������7 8

�������ĺ�Ϊ15
������Ϊ-1
�����˻�Ϊ56
Press any key to continue
*/

