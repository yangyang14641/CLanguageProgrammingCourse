#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
	int i,a,arr[10],m;
	srand((unsigned) time(NULL));
	for (i=0;;)
	{   m=rand()%100;
		if(m/10!=0)
		{ arr[i]=m;
		    i++;
		}
		if(i>9)
			break;
	}

	
	
	printf("请输入一个两位数：");
	scanf("%d",&a);
	printf("\n");

	for(i=0;i<10;i++)
	{
		if(arr[i]==a)
			printf("中奖号码为%d，下标为%d。\n",a,i);
	}

	for(i=0;i<10;i++)
      printf("数组元素为：%d\n",arr[i]);
}

/*
请输入一个两位数：66

数组元素为：96
数组元素为：14
数组元素为：81
数组元素为：99
数组元素为：69
数组元素为：24
数组元素为：60
数组元素为：72
数组元素为：99
数组元素为：98
Press any key to continue
*/