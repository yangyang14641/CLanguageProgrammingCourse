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

	
	
	printf("������һ����λ����");
	scanf("%d",&a);
	printf("\n");

	for(i=0;i<10;i++)
	{   
		if(arr[i]==a)
		{
			printf("�н�����Ϊ%d���±�Ϊ%d��\n",a,i);
			flag=1;
		}
	}

    if(flag==0)
		printf("���ź���û�н�\n");

	for(i=0;i<10;i++)
      printf("����Ԫ��Ϊ��%d\n",arr[i]);
}
/*
������һ����λ����88

�н�����Ϊ88���±�Ϊ7��
����Ԫ��Ϊ��48
����Ԫ��Ϊ��51
����Ԫ��Ϊ��23
����Ԫ��Ϊ��74
����Ԫ��Ϊ��39
����Ԫ��Ϊ��15
����Ԫ��Ϊ��87
����Ԫ��Ϊ��88
����Ԫ��Ϊ��45
����Ԫ��Ϊ��14
Press any key to continue
*/
/*
������һ����λ����88

���ź���û�н�
����Ԫ��Ϊ��56
����Ԫ��Ϊ��17
����Ԫ��Ϊ��63
����Ԫ��Ϊ��72
����Ԫ��Ϊ��25
����Ԫ��Ϊ��94
����Ԫ��Ϊ��92
����Ԫ��Ϊ��71
����Ԫ��Ϊ��35
����Ԫ��Ϊ��36
Press any key to continue
*/