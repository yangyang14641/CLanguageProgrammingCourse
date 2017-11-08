#include <stdio.h>
#define M 3
#define N 4

void main()
{
	int max(int v[],int m , int n);
	int a[M][N]={{38,23,56,9},{56,2,789,45},{76,7,45,34}};
	printf("Max value is:%d\n",max(*a,M,N) );
}
 int max(int v[],int m, int n)
 {
	 int i,j,maxv;
	 maxv=v[0];
	 for(i=0;i<m;i++)
		 for(j=0;j<n;j++)
			 if(v[i*n+j]>maxv)
				 maxv=v[i*n+j];
			 
		return maxv;
 }
 /*
Max value is:789
Press any key to continue
*/

