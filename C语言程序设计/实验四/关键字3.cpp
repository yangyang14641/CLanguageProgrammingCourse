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
	int i,j,f[N]={0},b[N],flag,temp;

        for(i=0;i<N;i++)
			b[N]=i;

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
		flag=0;
		for(j=1;j<=N-i;j++)
		{
			if(f[j]>f[j-1])
			{
				temp=f[j-1],f[j-1]=f[j],f[j]=temp;
				temp=b[j-1],b[j-1]=b[j],b[j]=temp;
				flag=1;
			}
		}

		if(flag==0)
			break;
	}

        for(i=0;i<N;i++)
			if(f[i]==0)
				break;
			else
               printf("%d.%s出现了%d次\n",i+1,a[b[i]],f[i]);
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