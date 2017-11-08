#include <stdio.h>
void main()
{
	int H,F,X,Y;
	printf("请以H= ,F= 的样式输入头和脚的数：");
	scanf("H=%d,F=%d",&H,&F);
	X=(4*H-F)/2;
	Y=(F-2*H)/2;
	printf("鸡的数=%d，兔的数=%d\n",X,Y);
}
/*请以H= ,F= 的样式输入头和脚的数：H=2,F=6
鸡的数=1，兔的数=1
Press any key to continue */