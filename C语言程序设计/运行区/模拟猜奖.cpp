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

	
	
	printf("������һ����λ����");
	scanf("%d",&a);
	printf("\n");

	for(i=0;i<10;i++)
	{
		if(arr[i]==a)
			printf("�н�����Ϊ%d���±�Ϊ%d��\n",a,i);
	}

	for(i=0;i<10;i++)
      printf("����Ԫ��Ϊ��%d\n",arr[i]);
}

/*
������һ����λ����66

����Ԫ��Ϊ��96
����Ԫ��Ϊ��14
����Ԫ��Ϊ��81
����Ԫ��Ϊ��99
����Ԫ��Ϊ��69
����Ԫ��Ϊ��24
����Ԫ��Ϊ��60
����Ԫ��Ϊ��72
����Ԫ��Ϊ��99
����Ԫ��Ϊ��98
Press any key to continue
*/