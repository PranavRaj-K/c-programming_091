#include<stdio.h>
int fact(int a);
int main()
{
	int x;
	printf("enter a number to find the factorial of");
	scanf("%d",&x);
	printf("the factorial of the number is %d",fact(x));
	return 0;
}
int fact (int a)
{
	int i=1,r=1;
	while(i<=a)
	{
		r = r * i;
		i++;
	}
	return r;
}
