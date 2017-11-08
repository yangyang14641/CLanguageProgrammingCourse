#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void scanarry(double **v,int n);
double det(double **v,int n);

void main()                          /*主函数，其作用在于输入和输出，以及为数组分配内存空间*/
{
	int i,n;
	double m,**p;
	printf("请输入行列式的阶数:");        
	scanf("%d",&n);                    /*接收用户输入的行列式的阶数，以此来决定如何分配内存空间*/
	p=(double **)malloc(n*sizeof(double *));      /*malloc函数用于创建动态二维数组*/
	for(i=0;i<n;i++)
		p[i]=(double *)malloc(n*sizeof(double));
	scanarry(p,n);                   /*调用scanarry函数来为二维数组录入用户的数据*/
	m=det(p,n);                      /*调用det函数计算行列式的值*/

    printf("\n行列式的值为：%lf\n",m);
	system("pause");                 
}

void scanarry(double **v,int n)   /*scanarry函数作用是从用户那里接收行列式的值*/
{   printf("请输入行列式的元素（输入一行后请按回车,每个元素间空一格）:\n");

	int i,j;
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			scanf("%lf",&v[i][j]);


}


double det(double **v,int n)     /*det函数为行列式计算函数*/
{
	int i,j,k,d,switchflag=0;
	double m,s,flag=0,count;
  for(k=0;k<n&&flag!=1;k++)             /* k的作用在于记录当前在从上往下数第几个主对角线元素*/
  {    
	   d=0;
	   count=1;
	  if((*(*(v+k)+k))==0)       /*当发现做乘子分母的元素为零时进行适当行变换*/
	  {    
                for(j=k;j<n;j++)
				{   d=d+(*(*(v+k)+j));
				}
               if(d==0)
			   {
				   flag=1;           /*化简中出现一行全为零则flag=1，以后不再进行行变换,即此时行列式值一定为零了*/
			   }
		    for(i=k;i<n&&flag!=1;i++)
			{    
				   if((*(*(v+i)+k))!=0)
				   {
                       count=0;
					   for(j=k;j<n;j++)
					   {
						   s=(*(*(v+k)+j));
					      (*(*(v+k)+j))=(*(*(v+i)+j));
                          (*(*(v+i)+j))=s;
						  switchflag++;
					   }
					   
				   }
			
			}

			if(count==1)
			{	k++;
				continue;
			}
				
				
	  }
   
	
		for(i=k+1;i<n&&flag!=1;i++)       /*对第i行进行操作来消元,其中i的初始值为k+1，终止值为行列式阶数*/
		{
			m=*(*(v+i)+k)/(*(*(v+k)+k));      /*m为高斯消元法中的乘子*/
			for(j=k;j<n&&flag!=1;j++)
			{
				*(*(v+i)+j)=*(*(v+i)+j)-m*(*(*(v+k)+j));  /*对i行中的j列元素进行运算，j初始值为k，终止值为行列式阶数*/
		      
			}
		}

  }
		m=1;    /*m的作用仅仅是一个连乘的计数器，先把其值归一*/
		for(i=0;i<n&&flag!=1;i++)           /*通过以上的消元已把行列式化为上三角型，该循环将计算对角线元素之积*/
			m=m*(*(*(v+i)+i));

    printf("行列式被化为:\n");
    for(i=0;i<n;i++)
	{	  
		for(j=0;j<n;j++)
			 printf("%lf ",v[i][j]);
		   printf("\n");
	}
        
	    if(flag!=1)
		    return m*pow(-1,switchflag);  /*将m的值作为最终运算结果返回作为det函数的值*/
		else
			return 0;
}

