#include<stdio.h>
int main()
{
	int i,sum=0,rem,n;
	printf("enter the value of n");
	scanf("%d",&n);
	i=n;
	while(n!=0)
	{
		rem=n%10;
		sum=(sum*10)+rem;
		n=n/10;
	}
	if(sum==i)
	{
		printf("the given number is a paragrome");
	}
	else
	{
		printf("the given number is not a paragrome");
	}
	return 0;
}
