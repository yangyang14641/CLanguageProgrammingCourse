#include <stdio.h>
#include <stdlib.h>

int fact(int n);

int main()
{  int a;
   a=fact(10)/2+1;
printf("���ӵ�һ��Ե�����Ϊ:%d\n",a);

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
/* ���ӵ�һ��Ե�����Ϊ:768
�밴���������. . . */
