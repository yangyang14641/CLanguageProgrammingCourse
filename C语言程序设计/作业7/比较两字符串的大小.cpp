#include <stdio.h>
int strcompare(char *s,char *t)
{
	for(;*s==*t;s++,t++)
	{
		if(*s=='\0')
			return 0;
	}

	return *s-*t;
}


void main()
{
	char s1[80],s2[80];
	int reasult;
	printf("������ǰ��s1:\n");
	gets(s1);
	printf("��������s2:\n");
	gets(s2);
    reasult=strcompare(s1,s2);
	printf("�ȽϽ��Ϊ%d\n",reasult);
}

/*
������ǰ��s1:
abcdefg
��������s2:
abcdefg
�ȽϽ��Ϊ0
Press any key to continue
*/
/*
������ǰ��s1:
abcdef
��������s2:
abcfdgjlkgjdfl
�ȽϽ��Ϊ-2
Press any key to continue
*/
	