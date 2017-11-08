#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
	int i,j,a[5000],sta[6],total[6]={0,0,0,0,0,0};
	double per[6];
	
	srand((unsigned)time(NULL));
	  for(i=0;i<5000;i++)
		  a[i]=1+rand()%6;


	  for(i=0;i<5000;i++)
	  {
		  
		  switch(a[i])
		  {
		  
		    case 1: 
			  total[0]=total[0]+1;
			  break;
            case 2:
			  total[1]=total[1]+1;
			  break;
            case 3:
			  total[2]=total[2]+1;
			  break;
            case 4:
			  total[3]=total[3]+1;
			  break;
            case 5:
			  total[4]=total[4]+1;
			  break;
            case 6:
			  total[5]=total[5]+1;
			  break;
		  }
		  
	  }

	  
	  for(i=0;i<6;i++)
	  { 
		 per[i]=total[i]/50.0;
		 sta[i]=total[i]/500*60;
	  }

	  printf("统计结果如下:\n");
	  for(i=0;i<6;i++)
	  {
		  for(j=0;j<sta[i];j++)
		  {
			  printf("%d",i+1);
		  }
		  printf("\t%d %.1f ％\n",total[i],per[i]);
	  }
}
/*
统计结果如下:
111111111111111111111111111111111111111111111111111111111111    824 16.5 ％
222222222222222222222222222222222222222222222222222222222222    796 15.9 ％
333333333333333333333333333333333333333333333333333333333333    844 16.9 ％
444444444444444444444444444444444444444444444444444444444444    866 17.3 ％
555555555555555555555555555555555555555555555555555555555555    812 16.2 ％
666666666666666666666666666666666666666666666666666666666666    858 17.2 ％
Press any key to continue
*/






