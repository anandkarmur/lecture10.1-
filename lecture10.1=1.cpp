#include<stdio.h>

data(int a)
{
	printf("cube = %d\n",a*a*a);
}
main()
{
	int a;
	printf("enter value A =");
	scanf("%d",&a);
	
	
	data(a);
}