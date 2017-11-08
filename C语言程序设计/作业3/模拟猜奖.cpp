#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
	int flag=0,i,a,arr[10],m;
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
		{
			printf("中奖号码为%d，下标为%d。\n",a,i);
			flag=1;
		}
	}

    if(flag==0)
		printf("真遗憾你没中奖\n");

	for(i=0;i<10;i++)
      printf("数组元素为：%d\n",arr[i]);
}
/*
请输入一个两位数：88

中奖号码为88，下标为7。
数组元素为：48
数组元素为：51
数组元素为：23
数组元素为：74
数组元素为：39
数组元素为：15
数组元素为：87
数组元素为：88
数组元素为：45
数组元素为：14
Press any key to continue
*/
/*
请输入一个两位数：88

真遗憾你没中奖
数组元素为：56
数组元素为：17
数组元素为：63
数组元素为：72
数组元素为：25
数组元素为：94
数组元素为：92
数组元素为：71
数组元素为：35
数组元素为：36
Press any key to continue
*/