#include<stdio.h>

void main()
{
	int i,n;
	printf("input the number of terms:\t");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		printf("the number is %d and the cube of %d is: %d\n",i,i,i*i*i);
	}
}
