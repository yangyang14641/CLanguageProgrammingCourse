#include <stdio.h>

void main()
{
	void swap(int *x,int *y);
	int a=3,b=5;
	printf("swap��������ǰ��a=%d,b=%d\n",a,b);
	swap(&a,&b);
	printf("swap�������ú�a=%d,b=%d\n",a,b);

}
void swap(int *x,int* y)
{int t;
   t=*x;
   *x=*y;
   *y=t;
}
/*
swap��������ǰ��a=3,b=5
swap�������ú�a=5,b=3
Press any key to continue
*/