#include<stdio.h>

void main()
{
	int a[3][3]={{1,2,3},{4,5,6},{7,8,9}},b[3][3],i,j;
	printf("the matrix we have is: \n");
	
	for(i=0;i<3;i++)
	{
		printf("|\t");
		for(j=0;j<3;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("|\n");
	}

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			b[i][j]=a[j][i];
		}
		
	}
	printf("the transpose of the given matrix is:\n");
	for(i=0;i<3;i++)
	{
		printf("|\t");
		for(j=0;j<3;j++)
		{
			printf("%d\t",b[i][j]);
		}
		printf("|\n");
	}
}
