#include<stdio.h>
int main()
{
	int a;
	printf("enter a value\n");
	scanf("%d",&a);
	if(a>0)
	 {
	 	printf("the given value %d is positive",a);
	 }
	else if(a==0)
	{
		printf("the given value is 0",a);
	}
	else printf("the given value %d is negetive",a);
	return 0;
}
