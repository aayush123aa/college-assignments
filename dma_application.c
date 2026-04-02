/*
allocate 20 bytes of memory block dynamically. store as many no. of integer values into it. then find the sum of prime numbers in it
*/

#include<stdio.h>
#include<stdlib.h>
void main()
{
	int i,j,sum=0,count=0;
	int *dem = malloc(20);
	printf("input values: \n");
	for(i=0;i<20/sizeof(int);i++)
	{
		scanf("%d",&dem[i]);
	}
	for(i=0;i<20/sizeof(int);i++)
	{
		for(j=2;j<dem[i];j++)
		{
			if(dem[i]%j==0)
			{
				count++;
			}
		}
		if(count==0)
		{
			sum+=dem[i];	
		}
		count=0;
		
	}
	printf("the sum is %d",sum);
}
