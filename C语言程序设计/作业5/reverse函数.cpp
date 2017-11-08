#include <stdio.h>

void reverse(int *v,int n)
{
	int i,m;

	for(i=0;i<n/2l;i++)
		if(n-i+1!=i)
		{ 
			m=*(v+n-i-1);
	    *(v+n-i-1)=*(v+i);
			*(v+i)=m;
		}

}


void main()
{
	int a[20],i;

	for(i=0;i<20;i++)
		a[i]=i+1;

	printf("µßµ¹Ç°£º\n");
	for(i=0;i<20;i++)
		printf("%d ",a[i]);


	reverse(a,20);

	printf("\nµßµ¹ºó£º\n");
	for(i=0;i<20;i++)
		printf("%d ",a[i]);

		printf("\n");

}

/*
µßµ¹Ç°£º
1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20
µßµ¹ºó£º
20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1
Press any key to continue
*/