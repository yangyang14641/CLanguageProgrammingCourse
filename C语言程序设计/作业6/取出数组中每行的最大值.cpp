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

	printf("a�����е�Ԫ�أ�\n");
	for(i=0;i<10;i++)
	{   printf("��%d��:\t",i+1);
		for(j=0;j<5;j++)
		{
			printf("%d ",*(a[i]+j));
			
		}

		printf("\n");

	}

	choose(a,b,10,5);
    printf("ÿ�е����ֵ��\n");

	for(i=0;i<10;i++)
	{
		printf("��%d�����Ԫ��:\t",i+1);
	    printf("%d\n",*(b+i));
	}

	printf("\n");
}

/*
a�����е�Ԫ�أ�
��1��:  8 399 702 82 90
��2��:  13 464 265 33 698
��3��:  875 653 930 903 279
��4��:  771 306 598 22 325
��5��:  720 131 304 673 399
��6��:  477 458 535 403 473
��7��:  538 787 677 288 46
��8��:  852 170 458 117 604
��9��:  489 275 93 74 612
��10��: 645 719 788 382 494
ÿ�е����ֵ��
��1�����Ԫ��:  702
��2�����Ԫ��:  698
��3�����Ԫ��:  930
��4�����Ԫ��:  771
��5�����Ԫ��:  720
��6�����Ԫ��:  535
��7�����Ԫ��:  787
��8�����Ԫ��:  852
��9�����Ԫ��:  612
��10�����Ԫ��: 788

Press any key to continue

*/
