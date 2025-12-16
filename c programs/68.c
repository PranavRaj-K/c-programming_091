#include<stdio.h>
int armstrong(int a);
int main()
{
	int x,A;
	printf("enter the number to check if it is a armstrong number or not");
	scanf("%d",&x);
	A = armstrong(x);
	if(A==x)
	{
		printf("the given number is an armstrong number");
	}
	else 
	{
		printf("the given number is not an armstrong number");
	}
	return 0;
}
int armstrong(int a)
{
	int sum=0,rem=0;
	while(a!=0)
	{
		rem=a%10;
		sum=sum+(rem*rem*rem);
		a=a/10;
	}
	return sum;
}
