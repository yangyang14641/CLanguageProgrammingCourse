#include <stdio.h>
#include <math.h>


void seaperate( int m,int *a);
void qiuhe( int *a,int *n);


void main()
{   
	int m,n=0,p,a[10];
	printf("����������ֻ�����:");
	scanf("%10d",&m);
	seaperate(m,a);
	qiuhe(a,&n);
	p=n%16;
	if(p<=10)
		printf("���ܺ��ֻ�����Ϊ��%d%d\n",m,p);
	else
		printf("���ܺ��ֻ�����Ϊ��%dx\n",m);
}

void seaperate(int m,int *a)
{   int i;
    a[0]=m%10;
	for(i=1;i<10;i++)
	{    
	     m=m/10;
         a[i]=m%10;
	}
    
	
}

void qiuhe( int *a,int *n)
{    int i;
	 for(i=0;i<10;i++)
	 {
	   	*n=a[i]+(*n);
	 }
}








