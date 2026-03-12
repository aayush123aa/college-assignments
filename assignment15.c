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
	printf("\nthe current order of the elements of the other array is: \n");
	
	for(i=0;i<6;i++)
	{
		printf("%d  ",b[i]);
	}
}
