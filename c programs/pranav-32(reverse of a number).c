#include<stdio.h>
int main()
{
	int sum=0,rem,n;
	printf("enter a value");
	scanf("%d",&n);
	while(n!=0)
	{
		rem=n%10;
		sum=(sum*10)+rem;
		n=n/10;
	}
	printf("reverse of num=%d",sum);
	return 0;
}
