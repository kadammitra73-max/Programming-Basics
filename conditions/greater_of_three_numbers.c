#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter the values\n");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b&&a>c)
	{
		printf("a is greatest\n");
	}
	else if(b>a&&b>c)
	{
		printf("b is greatest\n");
	}
	else if(c>a&&c>b)
	{
		printf("c is greatest\n");
	}
	else
	{
		printf("two or more numbers are equal");
	}
	return 0;
}
