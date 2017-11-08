#include <stdio.h>

void main()
{    double sum;
     int i;
     sum=0.0;
	 
     for(i=1;i<=10000;i++)
	 {
		 sum=sum+1.0/(4*i-3)-1.0/(4*i-1);
	 }
	 

	 printf("PI的值为:%lf\n",4*sum);

}

/*PI的值为:3.141543
Press any key to continue*/
