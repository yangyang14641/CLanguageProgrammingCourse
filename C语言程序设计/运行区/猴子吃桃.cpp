#include <stdio.h>
#include <stdlib.h>

int fact(int n);

int main()
{  int a;
   a=fact(10)/2+1;
printf("猴子第一天吃的桃子为:%d\n",a);

system ("pause");
return 0 ;

}

int fact(int n)
{
	if (n<=1)
	    return 1;
	else
		return (fact(n-1)+1)*2;
}
/* 猴子第一天吃的桃子为:768
请按任意键继续. . . */
