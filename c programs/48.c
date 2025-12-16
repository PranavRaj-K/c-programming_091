#include<stdio.h>
int main()
{
	int a[10][10],i,j,R,C;
	printf("enter the rows and columns pf the marix");
	scanf("%d%d",&R,&C);
	printf("enter the elements of the matrix");
	for(i=0;i<R;i++)
	{
		for(j=0;j<C;j++)
		{
			scanf("%d",&a[i][j]);
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}