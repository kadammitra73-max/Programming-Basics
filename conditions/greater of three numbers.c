#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter the values\n");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b&&a>c)
	{
		printf("a is greater than b\n");
	}
	else if(b>a&&b>c)
	{
		printf("a is greater than c\n");
	}
	else
	{
		printf("c is grater than a\n");
	}
	return 0;
}
