#include<stdio.h>

void main()
{
	int a[3][3],b[3][3],i,j,count=0;
	
	printf("input the values of the elements of the matrix:\n");
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("the element of row %d and column %d is:  ",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	}
	
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

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(b[i][j]!=a[i][j])
			{
				count++;
			}
		}
	}
	
	if(count==0)
	{
		printf("the matrix is symmetric!!");
	}
	else
	{
		printf("the matrix is not symmetric!!");
	}
}
