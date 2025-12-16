#include<stdio.h>
void swap(int a, int b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
}
void Bubble_sort(int a[],int n)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
				swap(a[j],a[j+1]);
		}
	}
}
int main()
{
	int i,ar[100],n;
	printf("Enter The Size Of The Array");
	scanf("%d",&n);
	printf("Enter The Elemnts Of The Array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&ar[i]);
	}
	Bubble_sort(ar,n);
	printf("The Sorted Series : \n");
	for(i=0;i<n;i++)
	{
		printf("%d ",ar[i]);
	}
	return 0;
}
