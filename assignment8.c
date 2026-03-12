#include<stdio.h>
#include<time.h>

void main()
{
	int guess, num;
	srand(time(NULL));
	num = (rand()%19)+1;
	while(1)
	{
		printf("guess the number:\t");
		scanf("%d",&guess);
		
		if(guess==num)
		{
			printf("correct !!");
			break;
		}
		else
		{
			printf("nuhh uh! try again\n");
		}
	}
}
