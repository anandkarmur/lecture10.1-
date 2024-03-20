#include<stdio.h>

data(int a)
{
	if(a%3==0 && a%5==0)
	{
		printf("Number is devisible by 3 & 5\n");
	}
	else
	{
		printf("Number is not devisible by 3 & 5\n");
	}
}
main()
{
	int a;
	printf("enter value A =");
	scanf("%d",&a);
	
	
	data(a);
}