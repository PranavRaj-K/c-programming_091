#include<stdio.h>
int fib(int n)
{
	if(n==1||n==0)
	{
		return n;
	}
	else
	{
		return fib(n-1)+fib(n-2);
	}
}
int main()
{
	int x,i;
	printf("Enter Number of Positions to print in fibanocei series");
	scanf("%d",& x);
	printf("The Series : \n");
	for(i=x;i>=1;i--)
	{
		printf("%d  ",fib(i));
	}
	return 0;
}
