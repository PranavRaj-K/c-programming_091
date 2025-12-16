#include<stdio.h>
#include<math.h>
int main()
{
	int sum=0,rem,n,x;
	printf("enter a value\t");
	scanf("%d",&n);
	x=n;
	while(n!=0)
	{
		rem=n%10;
		sum=sum+pow(rem,3);
		n=n/10;
	}
	if(sum==x)
	{
		printf("the given number is an armstrong number");
	}
	else
	{
		printf("the givne number is not an armstrong number");
	}
	return 0;
}
