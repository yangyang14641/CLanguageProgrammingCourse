#include <stdio.h>
int strlength( char *s);

void main()
{
	char s[100]={'\0'},*p,*a;
	int i,j,m;
    
	p=&s[0];
    printf("������һ��Ӣ�\n");
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
    
	printf("����ʳ���Ϊ:%d\n",i);
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

������һ��Ӣ�
Welcome to new China
����ʳ���Ϊ:7
Welcome
Press any key to continue
*/
