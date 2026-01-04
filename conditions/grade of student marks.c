#include<stdio.h>
int main()
{
	int marks;
	printf("enter the marks");
	scanf("%d",&marks);
	if(marks>=90)
	{
		printf("grade 'A'");
	}
	else if(marks>=80)
	{
		printf("grade 'B'");
	}
	else if(marks>=70)
	{
		printf("grade 'C'");
	}
	else if(marks>=60)
	{
		printf("grade 'D'");
	}
	else if(marks>=50)
	{
		printf("grade 'E'");
	}
	else
	{
		printf("fail");
	}
	return 0;
}
