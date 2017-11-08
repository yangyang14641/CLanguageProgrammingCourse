#include <stdio.h>
#include <math.h>

double f1(double x);
double f2(double x);
double f3(double x);

double collect(double(*p)(double x),double a,double b,double n)
{
	int i;
	double h,area;
	h=(b-a)/n;
	area=((*p)(a)+(*p)(b))/2.0;
	
	for(i=1;i<n;i++)
		area=area+(*p)(a+i*h);
	
	return area*h;
}

void main()
{
	printf("y1=%lf\n",collect(f1,1,2,1000));
    printf("y2=%lf\n",collect(f2,0,3.0,500));
    printf("y3=%lf\n",collect(f3,0,1,1000));
}

double f1(double x)
{
	double f;
	f=x*x*log(x);
    return f;
}

double f2(double x)
{
	double f;
	f=x*sin(x);
	return f;
}

double f3(double x)
{
	double f;
	f=x/exp(x);
	return f;
}



/*
y1=1.070615
y2=3.111089
y3=0.264241
Press any key to continue
*/
