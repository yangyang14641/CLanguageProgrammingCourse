#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define N 37            /*有多少关键字定义多少*/
#define M 100           /*所开启的文件每行字符不超过M个*/

void input(char *a[],char *d,int *f);
int stiatics(char s[],char t[]);

void main()
{
	char *a[N],d[50];
    char  e[37][12]={"auto","_Bool*","break","case","char","_Complex*","const","continue",
		"default","do","double","else","enum","extern","float","for","goto","if","_Imaginary*",
		"inline*","int","long","register","restrict*","return","short","signed","sizeof",
		"static","struct","switch","typedef","union","unsigned","void","volatile","while"};
	int i,k=0,m=0,j,f[N]={-1};

		for(i=0;i<N;i++)
		{
			a[i]=&e[i][0];
		}

	printf("请录入文件地址:\n");
	gets(d);

	printf("\n");
	
	input(a,d,f);
    
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
			if(f[j]>=m && f[j]!=-1)
			{
				m=f[j];
				k=j;
			}
        if(m==0)
			break;

			printf("%d.%s出现了%d次\n",i+1,a[k],m);
			f[k]=-1;
			m=0;
	}

}



void input(char *a[],char *d,int *f)     /*文件录入模块*/
{  
	FILE *fp;
	char str[M];
	int i;
	if((fp=fopen(d,"r"))==NULL)
	{
		printf("Cannot oprn the file...\n");
		return;
	}

	while(fgets(str,M,fp)!=NULL)
	{
		printf("%s",str);
        for(i=0;i<N;i++)
	         f[i]+=stiatics(str,a[i]);
	}
         
     printf("\n\n\n关键字按降序排列为:\n");
	
	fclose(fp);
}


int stiatics(char s[],char t[])      /*单词统计模块*/
{
	int i,j,len=strlen(t);
	for(i=0,j=0;s[i]!='\0';i++)
		if( strncmp(&s[i],t,len)==0 )
			j++;

		return j;

}