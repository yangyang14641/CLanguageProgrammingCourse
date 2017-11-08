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
		printf("%d为守形数其平方为%d\n",n,b);
}


/*
5为守形数其平方为25
6为守形数其平方为36
25为守形数其平方为625
76为守形数其平方为5776
376为守形数其平方为141376
625为守形数其平方为390625
Press any key to continue
*/
