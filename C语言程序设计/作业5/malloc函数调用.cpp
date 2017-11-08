#include <stdio.h>
#include <stdlib.h>


void main()
{
	int *p,i,k=0;
	p=(int *)malloc(sizeof(int));
	printf("请输入一个数：");
	scanf("%d",p);

	for(i=1;i<*p;i++)
	if(*p%i==0)
		k=k+i;

	if(k==*p)
		printf("%d是一个完数\n ",*p);
	else
		printf("%d不是一个完数\n",*p);

}


/*
请输入一个数：6
6是一个完数
 Press any key to continue
 
*/
