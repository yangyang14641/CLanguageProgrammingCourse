#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void choose(int (*a)[5],int *b, int m,int n)
{   
	int i,j,x;

	for(i=0;i<m;i++)
	{
		x=**(a+i);
		for(j=0;j<n;j++)
		{
			if(*(*(a+i)+j)>x)
				x=*(*(a+i)+j);
		}
		*(b+i)=x;
		
	}
}



void MakeArry(int *a,int m,int n)
{
	int i,j;
	srand(time(NULL));
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
		{
			*(a+i*n+j)=rand()%1000;
			
		}
		
		
}


void main()
{
	int a[10][5],b[10],i,j;
	
	MakeArry(&a[0][0],10,5);

	printf("a数组中的元素：\n");
	for(i=0;i<10;i++)
	{   printf("第%d行:\t",i+1);
		for(j=0;j<5;j++)
		{
			printf("%d ",*(a[i]+j));
			
		}

		printf("\n");

	}

	choose(a,b,10,5);
    printf("每行的最大值：\n");

	for(i=0;i<10;i++)
	{
		printf("第%d行最大元素:\t",i+1);
	    printf("%d\n",*(b+i));
	}

	printf("\n");
}

/*
a数组中的元素：
第1行:  8 399 702 82 90
第2行:  13 464 265 33 698
第3行:  875 653 930 903 279
第4行:  771 306 598 22 325
第5行:  720 131 304 673 399
第6行:  477 458 535 403 473
第7行:  538 787 677 288 46
第8行:  852 170 458 117 604
第9行:  489 275 93 74 612
第10行: 645 719 788 382 494
每行的最大值：
第1行最大元素:  702
第2行最大元素:  698
第3行最大元素:  930
第4行最大元素:  771
第5行最大元素:  720
第6行最大元素:  535
第7行最大元素:  787
第8行最大元素:  852
第9行最大元素:  612
第10行最大元素: 788

Press any key to continue

*/
