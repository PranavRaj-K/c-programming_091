#include<stdio.h>
int main()
{
	int i,n,min,a[1000];
	printf("enter the value of n\n");
	scanf("%d",&n);
	printf("enter %d values\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	min=a[0];
	for(i=1;i<n;i++)
	{
		if(min>a[i])
		{
			min=a[i];
		}
	}
	printf("minimum most value of the array is %d",min);
	return 0;
}
