#include <stdio.h>
int strlength( char *s);

void main()
{
	char s[100]={'\0'},*p,*a;
	int i,j,m;
    
	p=&s[0];
    printf("请输入一串英语：\n");
	gets(s);
	if(*p==' ')
		p++;

	for(i=0;(*p)!='\0';)
	{  
		m=strlength(p);

		if(m>=i)
		{
			i=m;
			a=p;
		}
		p+=(m+1);
	}
    
	printf("最长单词长度为:%d\n",i);
	for(j=0;j<i;j++)
		printf("%c",*(a+j));

	printf("\n");

}


int strlength(char *s)
{ 
	int i;
	if(*s==' ')
		s++;
	for(i=0;(*s!=' ')&&(*s!='\0');s++,i++);
	
	  return i;
}

/*

请输入一串英语：
Welcome to new China
最长单词长度为:7
Welcome
Press any key to continue
*/
