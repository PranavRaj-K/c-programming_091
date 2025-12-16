#include<stdio.h>
int main()
{
	int i,n,count=0;
	printf("enter a number\t");
	scanf("&d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			count++;
		}	
	}
	if(count==2) 
	printf("the given number is a prime number");
	else 
	printf("the given number is not a prime number");
	return 0;
}
