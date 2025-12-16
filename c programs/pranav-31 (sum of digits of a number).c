#include<stdio.h>
int main()
{ 
	int i=1,rem,sum=0,n;
	printf("enter a value of n");
	scanf("%d",&n);
	while(n!=0)
	{
		rem=n%10;
		sum=sum+rem;
		n=n/10;
	}
	printf("%d",sum);
	return 0;
}
