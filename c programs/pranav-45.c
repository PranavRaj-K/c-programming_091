#include<stdio.h>
int main()
{
	int i,n,a[1000],max;
	printf("enter n\n");
	scanf("%d",&n);
	printf("enter n values\t");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	max=a[0];
	for(i=1;i<n;i++)
	{
		if(max<a[i])
		{
			max=a[i];
		}
	}
	printf("maximum value of the array is %d",max);
	return 0;
}
