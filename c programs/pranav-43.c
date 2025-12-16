    #include<stdio.h>
    int main()
    {
    	int a[6],i,sum=0,avg,x;
    	printf("enter 6 values");
    	for(i=0;i<6;i++)
    	{
    		scanf("%d",&a[i]);
		}
		for(i=0;i<6;i++)
		{
			sum=sum+a[i];
		}
		avg=(sum/6);
		printf("the average marks of the students=%d\n",avg);
		float p;
		x=20;
		p=(sum/x)*100;
		printf("%d",p);
		return 0;
	}
