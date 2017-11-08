#include <stdio.h>
#include <math.h>

void main()
{
	double a,b,c,l,m,s;
	printf("请以a= ,b= ,c= 的形式输入三角形的三边长：");
	scanf("a=%lf,b=%lf,c=%lf",&a,&b,&c);

	l=(a+b+c)/2.0;
	m=l*(l-a)*(l-b)*(l-c);
	s=sqrt(m);

	printf("三角形的面积为：%f\n",s);
}
/*请以a= ,b= ,c= 的形式输入三角形的三边长：a=3,b=4,c=5
三角形的面积为：6.000000
Press any key to continue*/