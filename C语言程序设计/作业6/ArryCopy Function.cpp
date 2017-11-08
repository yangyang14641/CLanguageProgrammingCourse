#include <stdio.h>
#include <stdlib.h>

int *ArryCopy(int *source,int n)
{
	int *p,i;
    p=(int *)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
		*(p+i)=*(source+i);

		return p;
}

void main()
{
	int a[20],i,*p;

	for(i=0;i<20;i++)
		a[i]=i+1;
	printf("a中元素为：\n");

	for(i=0;i<20;i++)
	printf("%d ",a[i]);
     
	printf("\n");
    p=ArryCopy(a,20);
	
	printf("拷贝后的首地址为：%x\n",p);

	printf("其后20个元素为：\n");
	for(i=0;i<20;i++)
		printf("%d ",*(p+i));

	printf("\n");
}

/*
a中元素为：
1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20
拷贝后的首地址为：431de0
其后20个元素为：
1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20
Press any key to continue

*/







