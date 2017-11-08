#include <stdio.h>

void main()
{
	void swap(int *x,int *y);
	int a=3,b=5;
	printf("swap函数调用前：a=%d,b=%d\n",a,b);
	swap(&a,&b);
	printf("swap函数调用后：a=%d,b=%d\n",a,b);

}
void swap(int *x,int* y)
{int t;
   t=*x;
   *x=*y;
   *y=t;
}
/*
swap函数调用前：a=3,b=5
swap函数调用后：a=5,b=3
Press any key to continue
*/