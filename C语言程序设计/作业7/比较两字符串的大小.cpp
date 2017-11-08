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
	printf("请输入前窜s1:\n");
	gets(s1);
	printf("请输入后窜s2:\n");
	gets(s2);
    reasult=strcompare(s1,s2);
	printf("比较结果为%d\n",reasult);
}

/*
请输入前窜s1:
abcdefg
请输入后窜s2:
abcdefg
比较结果为0
Press any key to continue
*/
/*
请输入前窜s1:
abcdef
请输入后窜s2:
abcfdgjlkgjdfl
比较结果为-2
Press any key to continue
*/
	