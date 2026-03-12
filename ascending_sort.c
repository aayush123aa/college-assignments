#include<stdio.h>

void main()
{
	int a[6]={6,5,7,8,3,4},i,j,temp;
	
	printf("the current order of the array is:\n");
	for(i=0;i<6;i++)
	{
		printf("%d\t",a[i]);
	}
	
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(a[j+1]<a[j])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
		
	}

	printf("the sorted order of the array is:\n");
	for(i=0;i<6;i++)
	{
		printf("%d\t",a[i]);
	}
	
}
