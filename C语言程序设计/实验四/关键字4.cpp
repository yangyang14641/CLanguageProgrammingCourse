#include <stdio.h>
#include <string.h>
#define N 37
#define M 100

void input(char *a[],int *b,char *c);
int total(char s[],char t[]);

void main()
{
    int i,k=0,m=0,j,b[N]={0},e[N];
	int temp,n;
	char *a[N],c[50];
    char  d[37][12]={"auto","_Bool*","break","case","char","_Complex*","const","continue",
		"default","do","double","else","enum","extern","float","for","goto","if","_Imaginary*",
		"inline*","int","long","register","restrict*","return","short","signed","sizeof",
		"static","struct","switch","typedef","union","unsigned","void","volatile","while"};

	  for(i=0;i<N;i++)          /*����Ŵ�������e��ֵ*/    
		  e[i]=i; 

      for(i=0;i<N;i++)          /*����ָ��������d����ĵ�ַӳ���ϵ*/
	  {
			a[i]=&d[i][0];
	  }
	                            /*�ϲ��������ַ�ָ������a��b��e���飬�������Ԫ�ض���һһ��Ӧ��ӳ���ϵ��*/

	printf("��¼���ļ���ַ:\n");     
	gets(c);

    input(a,b,c);
     
	for(i=0;i<N;i++)
	{
		k=i;
		for(j=i+1;j<N;j++)
			if(b[j]>b[k])
				k=j;
			if(k!=i)
			{	temp=b[i],b[i]=b[k],b[k]=temp;     /*��ѡ�����й�����a������b�����ӳ���ϵ������*/
			    n=e[i],e[i]=e[k],e[k]=n;           /*����ͬ���ı任�������e�ﵽ����e��������a��b�����ӳ���ϵ��Ŀ��*/
			}
			     
	}
	for(i=0;i<N;i++)
		if(b[i]==0)
			break;
		else
			printf("%d.%16s  ������  %d  ��\n",i+1,a[e[i]],b[i]);  /*a�����е�e[i]��Ԫ����b����i��Ԫ����һһӳ���ϵ*/

}


void input(char *a[],int *b,char *c)
{
	FILE *fp;
	char str[M];
	int i;
	if((fp=fopen(c,"r"))==NULL)
	{
		printf("��Ҫ���ļ��򲻿�o(����)o��\n");
		return;
	}
    
    printf("\n\n��ϲ��ɹ����ļ���o(�Rv�Q)o�ð���\n\n�ؼ��ְ���������Ϊ:\n\n");

	while(fgets(str,M,fp)!=NULL)
	{
		printf("%s",str);

		for(i=0;i<N;i++)
			*(b+i)+=total(str,a[i]);
	}

	fclose(fp);           
}


int total(char s[],char t[])
{
	int i=0,j=0,len=strlen(t);
	while(s[i]!='\0')
	{
		if(strncmp(&s[i],t,len)==0)
			j++;

		i++;
	}

	return j;
}

