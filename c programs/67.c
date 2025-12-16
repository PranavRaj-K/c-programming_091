#include<stdio.h>
int prime(int a);
int main()
{
	int x , p;
	printf("print a number to check if it is a prime number or not");
	scanf("%d",&x);
	p = prime(x);
	if(p==1)
	{
		printf("the given number is a prime number");
	}
	else 
	{
		printf("the give number is not a prime number");
	}
	return 0;
}
int prime(int a)
{
	int i,count=0;
	for(i=1;i<a;i++)
	{
		if(a%i==0)
		{
			count++;
		}
	}
	return count;
}
