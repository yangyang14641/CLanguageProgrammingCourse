#include <stdio.h>

#define M 1000                  /*�ļ���������*/

void input(char *p,char *s);
void encryption(char *p,int n);
void output(char *p,char *s);

void main()
{
	char p[M],s1[50],s2[50];
	int n;

	printf("Please enter file1's address:\n");
	    gets(s1);
	printf("Please enter file2's address:\n");
	    gets(s2);
	printf("��������Կ:\n");
		scanf("%x",&n);
     
	input(p,s1);
	encryption(p,n);
	output(p,s2);

}

void input(char *p,char *s)   /*������������Ǵ���ļ���������¼������*/
{
	FILE *fp;
	char ch='\0';

	if((fp=fopen(s,"rb"))==NULL)
	{
		printf("Cannot open the file...\n");
		return;
	}

	for(;ch!=EOF;p++)
	{
		ch=fgetc(fp);
		putchar(ch);
		*p=ch;
	}

	*p='\0';

	fclose(fp);
}

void encryption(char *p,int n)    /*����������*/
{
	for(;*p!='\0';p++)
		if((*p!='\n')&&(*p!=' '))
            (*p)=(*p)^n;
}

void output(char *p,char *s)      /*��������������Ǵ�����ܺ�Ľ����������¼�봴�����ļ�*/
{
	FILE *fp;
	char *a;

	for(;*a!='\0';a++)
	   putchar(*a);

    if((fp=fopen(s,"wb"))==NULL)
	{
		printf("Cannot open the file...\n");
		return;
	}

	for(;*p!='\0';p++)
		fputc(*p,fp);
	
	fclose(fp);
}
	






