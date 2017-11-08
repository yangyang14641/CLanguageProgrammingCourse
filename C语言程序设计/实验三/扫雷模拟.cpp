#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define M 9
#define N 10
void setbomb(int *a,int m,int n);
void statics(int (*a)[11],int (*b)[9],int m,int n);

void main()
{
int a[M+2][M+2]={0},i,j,b[M][M]={0};     /* a数组为雷图数组，其中0代表安全，1代表有瓜。
							                      b为瓜数统计数组。*/
	setbomb(&a[0][0],M+2,M+2);
	printf("雷图矩阵：（其中心的M*M矩阵为数据区）\n");
	for(i=0;i<M+2;i++)                  /*显示瓜图数组以观察数据*/
	{
		for(j=0;j<M+2;j++)
		printf("%d ",a[i][j]);
		printf("\n");
	}

	statics(a,b,M,M);

	printf("\n成型瓜图：(*代表瓜，数字为周围的瓜数）\n");    /*打印模块*/
    for(i=0;i<M;i++)
	{   
		for(j=0;j<M;j++)
		{
			if(*(a[i+1]+j+1)==1)
				printf("%2c",15);
			else
				printf("%2d",*(*(b+i)+j));
		}
		printf("\n");
	}
}

void setbomb(int *a,int m,int n)
{   int i,j,k,c[N],flag;
	srand(time(NULL));
		for(;;)                       /*随机发生10个0到81的不重复数装入b数组,b数组装雷的位置*/
		{                                   
			flag=0;
		    for(i=0;i<N;i++)
			  c[i]=rand()%81;
	
		    for(j=0;j<N;j++)         /*nosame 模块 */
			{  
			   for(k=j+1;k<N;k++)
				if(c[j]==c[k])
				   flag=1;
			}

		    if(flag==0)
			   break;
		}


		for(i=1;i<n-1;i++)            /*布雷模块*/
		{	
			for(j=1;j<m-1;j++)
			{   
				for(k=0;k<10;k++)
					if( c[k]==((i-1)*(n-2)+(j-1)) )
				       *(a+i*n+j)=1;
			     
			}
		}

}


void statics(int (*a)[M+2],int (*b)[M],int m,int n)     /*统计模块*/
{
	int i,j,r,s;
	
	for(i=1;i<m+1;i++)
		for(j=1;j<n+1;j++)
          if(*(a[i]+j)==0)
		  {  
			  for(r=i-1;r<=i+1;r++)
				  for(s=j-1;s<=j+1;s++)
					  *(b[i-1]+(j-1))+=*(a[r]+s);
                  
		  }
}










