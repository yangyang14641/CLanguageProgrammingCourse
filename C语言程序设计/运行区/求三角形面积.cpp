#include <stdio.h>
#include <math.h>

void main()
{
	double a,b,c,l,m,s;
	printf("����a= ,b= ,c= ����ʽ���������ε����߳���");
	scanf("a=%lf,b=%lf,c=%lf",&a,&b,&c);

	l=(a+b+c)/2.0;
	m=l*(l-a)*(l-b)*(l-c);
	s=sqrt(m);

	printf("�����ε����Ϊ��%f\n",s);
}
/*����a= ,b= ,c= ����ʽ���������ε����߳���a=3,b=4,c=5
�����ε����Ϊ��6.000000
Press any key to continue*/