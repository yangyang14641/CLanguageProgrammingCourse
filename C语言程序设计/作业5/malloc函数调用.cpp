#include <stdio.h>
#include <stdlib.h>


void main()
{
	int *p,i,k=0;
	p=(int *)malloc(sizeof(int));
	printf("������һ������");
	scanf("%d",p);

	for(i=1;i<*p;i++)
	if(*p%i==0)
		k=k+i;

	if(k==*p)
		printf("%d��һ������\n ",*p);
	else
		printf("%d����һ������\n",*p);

}


/*
������һ������6
6��һ������
 Press any key to continue
 
*/
