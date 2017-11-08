#include <stdio.h>
#include <string.h>

void copy(char *v,char *p);
int findsubstring(char s[],char t[]);
void output(char *s,int*v,int len);
int strncompare(char s[], char t[],int n);

void main()
{
	char s1[80]={'\0'},s2[80]={'\0'},s3[80]={'\0'},s4[80]={'\0'};
	int i,len,m,n,v[80]={-1};

	printf("请输入主串s1:\n");
	gets(s1);
	copy(s3,s1);
	printf("请输入子串s2:\n");
	gets(s2);
	copy(s4,s2);
	
	len=strlen(s2);                                                                                                                                                                                                                        
	for(i=0;;i++)
	{
		m=findsubstring(s3,s4);
        n=n+m+len;
		if(m==-1)
			break;
		else
		{
			strcpy(s3,s3+m+len);
				v[i]=n;
		}
	}

	output(s1,v,len);
}

void copy(char *v,char *p)
{
	while(*p!='\0')
	{
		if(*p>='A'&&*p<='Z')
			*v=*p+32;
		else
			*v=*p;

		p++,v++;
	}

	*v='\0';
}



int findsubstring(char s[],char t[])
{
	int i=0,len=strlen(t);

	while(strncompare(&s[i],t,len)!=0&&s[i]!='\0')
		i++;

	return s[i]!='\0' ? i:-1 ;
}




void output(char *s,int*v,int len)
{
	int i,j,k;
	printf("统计结果如下:\n");

	for(i=0;i<80;i++)
	{
		if(v[i]==-1)
			break;
	}

	printf("一共有%d个子串\n",i+1);

	printf("其在母串中分别是：");      
	for(j=0;j<i;j++)
	{
		for(k=v[j];k<v[j]+len;k++)
			printf("%c",*(s+k));

		printf(" ");
	}
	printf("\n");
}


int strncompare(char s[], char t[],int n)
{
	int i;
	for(i=0;s[i]==t[i];i++)
		if(s[i]=='\0'||--n<=0)
			return 0;

		return s[i]-t[i];
}



/*
请输入主串s1:
xzc klxcnvmxn,nmxcz,vlksjfp ojlkmvxlzmvl knpvxcv
请输入子串s2:
xcvz
统计结果如下:
一共有1个子串
其在母串中分别是：
Press any key to continue
*/