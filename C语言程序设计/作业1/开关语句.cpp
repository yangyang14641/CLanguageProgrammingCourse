#include <stdio.h>
void main()
{
	char ch;
	ch='a';
	switch(ch)
	{
	case 'a':
		printf("ch的大写字符为A\n");
		break;
	case 'b':
		printf("ch的大写字符为B\n");
		break;
	default:
		printf("Not a and b\n");
		break;
	}

}

/*ch的大写字符为A
Press any key to continue*/