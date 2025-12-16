#include<stdio.h>
int main()
{
	int a[5][5],b[5][5],sum[5][5],i,j,r1,c1,r2,c2;
	printf("enter the number of rows and columns of the first matrix");
	scanf("%d%d",&r1,&c1);
	printf("enter the number of rwos and columns of the second matrix");
	scanf("%d%d",&r2,&c2);
	if(r1==r2&&c1==c2)
	{
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
			{
				scanf("%d",&a[r1][c1]);
			}
		}
		for(i=0;i<r2;i++)
		{
			for(j=0;j<c2;j++)
			{
				scanf("%d",&b[r2][c2]);
			}
		}
	}
}
