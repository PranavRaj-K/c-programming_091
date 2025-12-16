#include<stdio.h>
int main()
{
	int i=1,fact=1,sum=0,rem,n,x;
	printf("enter a value");
	scanf("%d",&n);
	x=n;
	while(n!=0)
	{
		rem=n%10;
		for(fact=1;i=1;i<=rem;i++)
		{
			fact=fact*i;
		}
		sum=sum+fact;
		n=n/10;
	}
	if(sum==x)
	{
		printf("the given number is a strong number");
	}
	else 
	{
		printf("the given number is not a strong number");
	}
	return 0;
}
