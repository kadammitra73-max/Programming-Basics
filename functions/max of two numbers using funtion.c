#include<stdio.h>
int max(int a,int b)
{
	if(a>b)
	{
		return a;
	}
	else
	{
		return b;
	}
}
	int main()
	{
		int a,b,m;
		printf("enter two numbers:");
		scanf("%d %d",&a,&b);
		m=max(a,b);
		printf("max=%d\n",m);
		return 0;
	}
