#include <stdio.h>

void main()
{
	int i;
	for(i=1;;i++)
	{
		if ( (i+3)%5==0 && (i-3)%6==0 )
			break;
	}
	printf("���������ĺ���5�ı��������Ĳ���6�ı�������С�������ǣ�%d\n",i);
}

/* ���������ĺ���5�ı��������Ĳ���6�ı�������С�������ǣ�27
Press any key to continue */