#include<stdio.h>

void main()
{
	int a[3][3],b[3][3],i,j,k=1,choice;
	
	printf("input the values of the elements of the 1st matrix:\n");
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("the element of row %d and column %d is:  ",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("the array we have is: \n{");
	
	for(i=0;i<3;i++)
	{
		printf("{");
		for(j=0;j<3;j++)
		{
			if(j<2)
			{
				printf("%d, ",a[i][j]);	
			}
			else
			{
				printf("%d",a[i][j]);
			}
		}
		if(i<2)
			{
				printf("},");
			}
			else
			{
				printf("}");
			}
	}
	printf("}");
	
	printf("\ninput the values of the elements of the 2nd matrix:\n");
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("the element of row %d and column %d is:  ",i+1,j+1);
			scanf("%d",&b[i][j]);
		}
	}

	printf("the array we have is: \n{");
	
	for(i=0;i<3;i++)
	{
		printf("{");
		for(j=0;j<3;j++)
		{
			if(j<2)
			{
				printf("%d, ",b[i][j]);	
			}
			else
			{
				printf("%d",b[i][j]);
			}
		}
		if(i<2)
			{
				printf("},");
			}
			else
			{
				printf("}");
			}
	}
	printf("}");
		
	while(k)
	{
		printf("\nnow, what do you wish to do ?\n1.Add\n2.Subtract\n3.Multiply\n4.Divide\n5.Exit\n");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1:
					printf("the addition of the two arrays is: \n{");
					
					for(i=0;i<3;i++)
					{
						printf("{");
						for(j=0;j<3;j++)
						{
							if(j<2)
							{
								printf("%d, ",a[i][j]+b[i][j]);	
							}
							else
							{
								printf("%d",a[i][j]+b[i][j]);
							}
						}
						if(i<2)
							{
								printf("},");
							}
							else
							{
								printf("}");
							}
					}
					printf("}");
					break;
			case 2:
					printf("the subtraction of the two arrays is: \n{");
					for(i=0;i<3;i++)
					{
						printf("{");
						for(j=0;j<3;j++)
						{
							if(j<2)
							{
								printf("%d, ",a[i][j]-b[i][j]);	
							}
							else
							{
								printf("%d",a[i][j]-b[i][j]);
							}
						}
						if(i<2)
							{
								printf("},");
							}
							else
							{
								printf("}");
							}
					}
					printf("}");
					break;
			case 3:
					printf("the product of the elements of the two arrays is: \n{");
					for(i=0;i<3;i++)
					{
						printf("{");
						for(j=0;j<3;j++)
						{
							if(j<2)
							{
								printf("%d, ",a[i][j]*b[i][j]);	
							}
							else
							{
								printf("%d",a[i][j]*b[i][j]);
							}
						}
						if(i<2)
							{
								printf("},");
							}
							else
							{
								printf("}");
							}
					}
					printf("}");
					break;
			case 4:
					printf("the division of the elements of the two arrays is: \n{");
					for(i=0;i<3;i++)
					{
						printf("{");
						for(j=0;j<3;j++)
						{
							if(j<2)
							{
								printf("%d, ",a[i][j]/b[i][j]);	
							}
							else
							{
								printf("%d",a[i][j]/b[i][j]);
							}
						}
						if(i<2)
							{
								printf("},");
							}
							else
							{
								printf("}");
							}
					}
					printf("}");
					break;
			case 5:
				k=0;
			default:
				printf("invalid input, try again!");
				break;
		}
	}
	


}
