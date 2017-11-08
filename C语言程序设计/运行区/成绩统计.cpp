#include <stdio.h>

void main()
{
	double ave,v[3]={0,0,0} ;
    int i,j,a[5][3]={{80,75,92},{61,65,71},{59,63,70},{85,87,90},{76,77,85}};
	ave=0;

	printf("从上到下依次为张王李赵周，从左到右分别为Math,C,DBASE，的成绩矩阵：\n");
	       
	for(i=0;i<5;i++)
	{	for(j=0;j<3;j++)
		{
			printf("\t%d",a[i][j]);
		}
	printf("\n");
	}

	for(j=0;j<3;j++)
		{
			for(i=0;i<5;i++)
				v[j]=v[j]+a[i][j]/5.0;
		}

	for(j=0;j<3;j++)
		{
			for(i=0;i<5;i++)
			{
				ave=ave+a[i][j]/15.0;
			}
		}

    printf("\nMath,C,DBASE的平均成绩分别为:\n");
	for(i=0;i<3;i++)
		printf("%.1f\t",v[i]);

	printf("\n所有科目的平均成绩为:\n%.1f\n",ave);
          
}
/*
从上到下依次为张王李赵周，从左到右分别为Math,C,DBASE，的成绩矩阵：
        80      75      92
        61      65      71
        59      63      70
        85      87      90
        76      77      85

Math,C,DBASE的平均成绩分别为:
72.2    73.4    81.6
所有科目的平均成绩为:
75.7
Press any key to continue
*/