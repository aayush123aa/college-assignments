#include<stdio.h>

void main()
{
	int a[5],i,max,min;
	printf("input any 5 numbers:\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	max=a[0];
	min=a[0];
	for(i=0;i<4;i++)
	{
		if(a[i+1]>a[i])
		{
			max=a[i+1];
		}
		if(a[i+1]<a[i])
		{
			min=a[i+1];
		}
	}
	printf("the largest number is: %d\n",max);
	printf("the smallest number is: %d",min);
}
