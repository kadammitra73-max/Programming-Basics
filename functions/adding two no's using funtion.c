#include<stdio.h>
int add(int x,int y)
{
    return x+y;
}
int main()
{
    int x,y,sum;
    printf("enter two numbers:");
    scanf("%d %d",&x,&y);
    sum=add(x,y);
    printf("sum=%d\n",sum);
    return 0;
}
