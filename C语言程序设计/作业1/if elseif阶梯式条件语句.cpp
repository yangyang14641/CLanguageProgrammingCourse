#include <stdio.h>

void main()
{
	int score;
	char grade;
	printf("������ɼ�:");
	scanf("%d",&score);
	if(score>=95)
	{
		grade='A';
	}
	else if(score>=80)
	{
		grade='B';
	}
	else if(score>=70)
	{
		grade='C';
	}
	else if(score>=60)
	{
		grade='D';
	}
	else
	{
		grade='E';
	}
	printf("score=%d\ngrade=%c\n",score,grade);
}
/*������ɼ�:87
score=87
grade=B
Press any key to continue*/
