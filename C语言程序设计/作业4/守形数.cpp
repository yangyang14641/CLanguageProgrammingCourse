#include <stdio.h>

void F(int n);

void main()
{
	int i;
	for(i=2;i<=1000;i++)
		F(i);

}

void F(int n)
{
	int b,c;
	b=n*n;

	if(n<10)
		c=b%10;
    else if(n<100)
	    c=b%100;
	else if(n<1000)
		c=b%1000;

	if(n==c)
		printf("%dΪ��������ƽ��Ϊ%d\n",n,b);
}


/*
5Ϊ��������ƽ��Ϊ25
6Ϊ��������ƽ��Ϊ36
25Ϊ��������ƽ��Ϊ625
76Ϊ��������ƽ��Ϊ5776
376Ϊ��������ƽ��Ϊ141376
625Ϊ��������ƽ��Ϊ390625
Press any key to continue
*/
