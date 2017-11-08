/*
半期考试
要求在程序中输入自己的学号（8位），并将学号的各位数字分开，逆序输出后，
计算冗余码并输出冗余码（冗余码就是将各位非0数字相乘的积，除以16取余数，如果余数大于等于10，冗余码取值X，否则取值为余数），
同时还要将学号和冗余码一并输出。

*/
#include <stdio.h>

void seaperate(int m ,int *a);
void secret(int *a, int *b);

void main()
{
	int m,a[8],b=1,i;
	printf("请输入你的学号：");
	scanf("%d",&m);
    void seaperate(m,a);
	
	printf("\n逆序后的学号为：");
	for(i=0,i<8,i++)
		printf("%d",a[i]);
	
	void secret(a,&b);
	if(b>10)
		printf("加密后的学号为：%dX",m);
	else
	printf("加密后学号为：%d",m*10+b);
}

void seaperate(int m,int *a)
{
	int i;
	for(i=0;i<8;i++)
	{
		a[i]=m%10;
		m=m/10;
	}
}

void secret(int *a,int* b)
{
	int i;
	for(i=0;i<8;i++)
	{
		if(a[i]!=0)
		{
			b=b*a[i];
		}
	}
	b=b%16;
}






