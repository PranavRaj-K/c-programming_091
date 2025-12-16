#include<stdio.h>
int main()
{
	int n,i,a[1000],even=0,odd=0;
	printf("enter size of array");
	scanf("%d",&n);
	printf("enter n values\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if (a[i]%2==0)
		{
			even++;
		}
		else
		{
			odd++;
		}
	}
	printf("even numbers=%d",even);
	printf("odd numbers=%d",odd);
	return 0;
}
