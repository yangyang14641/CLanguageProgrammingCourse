#include "stdio.h" 
void main()
{ 
int x,m,n,a,b; 
m=n=a=b=8; 
x=(m=a>b)&&(n=a>b); 
printf("n=%d",n); 
getchar(); 
}   
