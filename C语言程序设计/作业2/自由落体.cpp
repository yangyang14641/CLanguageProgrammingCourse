#include <stdio.h>

void main()
{
	double h,s;
	int i,n;
	h=100;
	s=0;
printf("��������صĴ���:");
scanf("%d",&n);
	
for(i=1;i<=n;i++)
	{  h=h/2.0;
	   s=s+3*h;
	}

	printf("��%d����صĸ߶�Ϊ%lf�ף��߹���·��Ϊ%lf�ס�\n",n,h,s);
}

/* ��������صĴ���:10
��10����صĸ߶�Ϊ0.097656�ף��߹���·��Ϊ299.707031�ס�
Press any key to continue */