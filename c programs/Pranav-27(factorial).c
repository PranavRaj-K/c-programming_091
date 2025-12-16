#include<stdio.h>
int main()
{
	int i=1,n,fact=1;
	printf("enter the vlaue of n");
	scanf("%d",&n);
	while(i<=n)
	{
		fact=fact*i;
		i++;
	}
	printf("the factorial=%d\n",fact);
	return 0;
}
