#include<stdio.h>

void main()
{
	int i,b[6],a[6]={1,2,3,4,5,6};
	printf("the current order of the elements of the array is: \n");
	for(i=0;i<6;i++)
	{
		printf("%d  ",a[i]);
	}
	for(i=0;i<6;i++)
	{
		b[i]=a[i];
		
	}
	for(i=0;i<6;i++)
	{
		a[i]=b[5-i];
		
	}
	printf("\nthe reversed order of the elements are: ");
	for(i=0;i<6;i++)
	{
		printf("%d  ",a[i]);
	}
}
