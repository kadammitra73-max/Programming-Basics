#include<stdio.h>
#include<string.h>
int main()
{
	char str1[20],str2[20];
	printf("enter the first string:");
	scanf("%s",str1);
	printf("enter second string:");
	scanf("%s",str2);
	if(strcmp(str1,str2)==0)
	{
		printf("strings are equal");
	}
	else
	{
		printf("not equal");
	}
	return 0;
}
