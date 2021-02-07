#include<stdio.h>
int main()
{
	int x,y,z;
	printf("ENTER TWO NUMBERS: ");
	scanf("%d %d",&x,&y);
	z=x+y;
	printf("x+y=%d\n",z);
	z=x-y;
	printf("x-y=%d\n",z);
	z=x*y;
	printf("x*y=%d\n",z);
	z=x/y;
	printf("x/y=%d",z);
	return 0;
}
