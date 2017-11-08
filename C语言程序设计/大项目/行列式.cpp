#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void scanarry(double **v,int n);
double det(double **v,int n);

void main()                          /*�����������������������������Լ�Ϊ��������ڴ�ռ�*/
{
	int i,n;
	double m,**p;
	printf("����������ʽ�Ľ���:");        
	scanf("%d",&n);                    /*�����û����������ʽ�Ľ������Դ���������η����ڴ�ռ�*/
	p=(double **)malloc(n*sizeof(double *));      /*malloc�������ڴ�����̬��ά����*/
	for(i=0;i<n;i++)
		p[i]=(double *)malloc(n*sizeof(double));
	scanarry(p,n);                   /*����scanarry������Ϊ��ά����¼���û�������*/
	m=det(p,n);                      /*����det������������ʽ��ֵ*/

    printf("\n����ʽ��ֵΪ��%lf\n",m);
	system("pause");                 
}

void scanarry(double **v,int n)   /*scanarry���������Ǵ��û������������ʽ��ֵ*/
{   printf("����������ʽ��Ԫ�أ�����һ�к��밴�س�,ÿ��Ԫ�ؼ��һ��:\n");

	int i,j;
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			scanf("%lf",&v[i][j]);


}


double det(double **v,int n)     /*det����Ϊ����ʽ���㺯��*/
{
	int i,j,k,d,switchflag=0;
	double m,s,flag=0,count;
  for(k=0;k<n&&flag!=1;k++)             /* k���������ڼ�¼��ǰ�ڴ����������ڼ������Խ���Ԫ��*/
  {    
	   d=0;
	   count=1;
	  if((*(*(v+k)+k))==0)       /*�����������ӷ�ĸ��Ԫ��Ϊ��ʱ�����ʵ��б任*/
	  {    
                for(j=k;j<n;j++)
				{   d=d+(*(*(v+k)+j));
				}
               if(d==0)
			   {
				   flag=1;           /*�����г���һ��ȫΪ����flag=1���Ժ��ٽ����б任,����ʱ����ʽֵһ��Ϊ����*/
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
   
	
		for(i=k+1;i<n&&flag!=1;i++)       /*�Ե�i�н��в�������Ԫ,����i�ĳ�ʼֵΪk+1����ֵֹΪ����ʽ����*/
		{
			m=*(*(v+i)+k)/(*(*(v+k)+k));      /*mΪ��˹��Ԫ���еĳ���*/
			for(j=k;j<n&&flag!=1;j++)
			{
				*(*(v+i)+j)=*(*(v+i)+j)-m*(*(*(v+k)+j));  /*��i���е�j��Ԫ�ؽ������㣬j��ʼֵΪk����ֵֹΪ����ʽ����*/
		      
			}
		}

  }
		m=1;    /*m�����ý�����һ�����˵ļ��������Ȱ���ֵ��һ*/
		for(i=0;i<n&&flag!=1;i++)           /*ͨ�����ϵ���Ԫ�Ѱ�����ʽ��Ϊ�������ͣ���ѭ��������Խ���Ԫ��֮��*/
			m=m*(*(*(v+i)+i));

    printf("����ʽ����Ϊ:\n");
    for(i=0;i<n;i++)
	{	  
		for(j=0;j<n;j++)
			 printf("%lf ",v[i][j]);
		   printf("\n");
	}
        
	    if(flag!=1)
		    return m*pow(-1,switchflag);  /*��m��ֵ��Ϊ����������������Ϊdet������ֵ*/
		else
			return 0;
}

