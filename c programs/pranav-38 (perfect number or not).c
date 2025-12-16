#include<stdio.h>
int main()
{
	int n,i,j,sum=0;
	printf("enter a value");
	scanf("%d",&n);
	j=n;
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		{
			sum=sum+i;
		}
	}
	if(sum==j)
	{
		printf("the given number is perfect");
	}
	else
	{
		printf("the given number is not perfect");
	}
	return 0;
}
