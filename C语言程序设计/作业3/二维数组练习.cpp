#include <stdio.h>

void main()
{ 
	int a[][4]={3,16,87,65,4,32,11,108,10,25,12,27},b[3],i,j,max;
	for(i=0;i<=2;i++)
	{
		max=a[i][0];
		for(j=1;j<=3;j++)
			if(a[i][j]>max)
				max=a[i][j];
			b[i]=max;
	}
	printf("\narray a:\n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=3;j++)
			printf("%5d",a[i][j]);
		printf("\n");
	}
	printf("\narray b:\n");
	for(i=0;i<=2;i++)
		printf("%5d",b[i]);
	printf("\n");
}
/*


array a:
    3   16   87   65
    4   32   11  108
   10   25   12   27

array b:
   87  108   27
Press any key to continue
*/
   