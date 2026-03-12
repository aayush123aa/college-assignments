#include<stdio.h>

void main()
{
	int i,j,start,count,end;
	printf("input the starting number of the range:\t");
	scanf("%d",&start);
	printf("now, input the ending number of the given range:\t");
	scanf("%d",&end);
	
	i=start+1;
	printf("the prime numbers in the range are:\n");
	while(i<end)
	{
	
		for(j=2;j<i;j++)
		{
			if(i%j==0)
			{
				count++;
			}
		}
		if(count==0)
		{
			printf("%d ",i);
		}
		i++;
		count=0;
	}
	
}
