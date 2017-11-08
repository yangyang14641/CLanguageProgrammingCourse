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

	  for(i=0;i<N;i++)          /*给序号储存数组e赋值*/    
		  e[i]=i; 

      for(i=0;i<N;i++)          /*建立指针数组与d数组的地址映射关系*/
	  {
			a[i]=&d[i][0];
	  }
	                            /*上部操作后字符指针数组a与b与e数组，三数组间元素都有一一对应的映射关系。*/

	printf("请录入文件地址:\n");     
	gets(c);

    input(a,b,c);
     
	for(i=0;i<N;i++)
	{
		k=i;
		for(j=i+1;j<N;j++)
			if(b[j]>b[k])
				k=j;
			if(k!=i)
			{	temp=b[i],b[i]=b[k],b[k]=temp;     /*在选择排列过程中a数组与b数组间映射关系被打乱*/
			    n=e[i],e[i]=e[k],e[k]=n;           /*利用同样的变换序号数组e达到利用e数组重组a与b数组间映射关系的目的*/
			}
			     
	}
	for(i=0;i<N;i++)
		if(b[i]==0)
			break;
		else
			printf("%d.%16s  出现了  %d  次\n",i+1,a[e[i]],b[i]);  /*a数组中的e[i]号元素与b数组i号元素有一一映射关系*/

}


void input(char *a[],int *b,char *c)
{
	FILE *fp;
	char str[M];
	int i;
	if((fp=fopen(c,"r"))==NULL)
	{
		printf("你要的文件打不开o(︶︿︶)o唉\n");
		return;
	}
    
    printf("\n\n恭喜你成功打开文件了o(≧v≦)o好棒！\n\n关键字按降序排列为:\n\n");

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

