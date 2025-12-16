#include<stdio.h>
int main()
{
	int a[10][10],i,j,r,c;
	printf("enter the dimensions of the matrix");
	scanf("%d%d",&r,&c);
	printf("enter the elements of the matrix");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	printf ("the transpose of the matrix is \n");
	for(j=0;j<c;j++)
	{
		for(i=0;i<r;i++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	return 0;
	
}