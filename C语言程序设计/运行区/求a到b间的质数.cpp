#include <stdio.h>
#include <math.h>

void main()
{ int a,b,num,i,k;
  printf("Input a&b:");
  scanf("%d,%d",&a,&b);
  for(num=a;num<=b;num++)
  {
	  k=sqrt(num);
	  for(i=2;i<=k;i++)
	  {
		  if(num%i==0)
			  break;
		  if(i>k)
			  printf("%d is a prime number. \n",num);
	  }
  }
}