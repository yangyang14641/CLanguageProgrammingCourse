#include <stdio.h>
#include <math.h>

void mian()
{    double sum;
     int i,m;
     sum=0;
	 m=-1;

	 for(i=1;i<=10000;i++)
	 {
		 sum=sum+pow(m,(i+1))*(1.0/(2*(i-1))) ;
	 }
	 

	 printf("PIµÄÖµÎª:%lf",4*sum);

}
