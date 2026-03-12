#include<stdio.h>
#include<stdbool.h>
void main()
{
	bool f=true;
	int b[5],a[11]={0,1,2,3,4,5,6,7,8,9,10},n=10,i,temp=a[0],temp1,temp2;
	printf("the array has the elements in the following order:\n");
	for(i=0;i<11;i++)
	{
		printf("%d  ",a[i]);
		
	}
	temp1=a[10];
	a[10]=a[0];
	a[0]=temp1;
	for(i=0;i<11;i++)
	{
		
		if( (((i%10)%2)==0) && i!=9)
		{
			temp2=a[(i%10)+2];
			a[(i%10)+2]=temp;
			temp=temp2;
		}
	}
	
	printf("\nthe array has the elements in the following order:\n");
	for(i=0;i<11;i++)
	{
		printf("%d  ",a[i]);
		
	}
	

	
}
