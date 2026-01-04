#include<stdio.h>
int main()
{
	int a=10;//declare the normal variable
	int *p;//declare the pointer
	p=&a;//stores the address of a variable in pointer
	printf("value of a=%d\n",a);
	printf("address of a=%p\n",&a);
	printf("Value using pointer = %d\n",*p);
	return 0;
	
}
