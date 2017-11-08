#include <stdio.h>
float H(float x,int n);

void main()
{
	int b;
	float a,c;
	printf("请输入x的值和n的值：");
	scanf("%d%d",&a,&b);
	c=H(a,b);
    printf("%f",c);
 }


float H(float x,int n)
{    if(n<1)
	  return 1;
     else if(n==1)
      return (x*2);
	 else if(n>1)
	  return 2*(x)*H(x,n-1)-2*(n-1)*H(x,n-2);
  
}

/*
请输入x的值和n的值：7 4
12.000000Press any key to continue
*/

/*
请输入x的值和n的值：2.0 10
1.000000Press any key to continue
*/
		 
