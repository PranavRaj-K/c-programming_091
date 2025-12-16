#include<stdio.h>
int main()
{
	int i,n,m,a[1000];
	printf("enter the size of the array");;
	scanf("%d",&n);
	printf("enter %d values",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the value to search for");
	scanf("%d",&m);
	for(i=0;i<n;i++)
	{
		if(m==a[i])
		{
			printf("the given number exists in the postion %d",i+1);
			break;
		}
		if(i==n-1)
		{
			printf("the given number does not exist in this array");
		}
	}
	return 0;
}
