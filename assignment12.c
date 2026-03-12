#include<stdio.h>

void main()
{
	int a[10],i,count=0;
	printf("input ten numbers:\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("the position of the negative elements are:\n");
	for(i=0;i<10;i++)
	{
		if(a[i]<0)
		{
			printf("%d\t",i);
			count++;
		}
	}
	
}
