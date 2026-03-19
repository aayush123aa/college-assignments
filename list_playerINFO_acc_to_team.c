/*
define a structure called cricket that will describe the following information:
1. player name
2. team name
3. batting average

declare an array of 10 cricketers and WAP to read the information about all and print a team wise list containing the names of the players with their batting average.
*/


#include<stdio.h>
#include<string.h>
struct cricket
{
	char player[50];
	char team[20];
	float ba;
}n[10];

void main()
{
	int i,j,k=1,l,counter=0,num;
	char temp[10][40];

	printf("input the name, team name, and batting average of 10 players:\n");
	
	for(i=0;i<10;i++)
	{
		printf("player name:\t");
		scanf("%s",&n[i].player);
		
		printf("team name:\t");
		scanf("%s",&n[i].team);
		
		printf("batting average:  ");
		scanf("%f",&n[i].ba);		
	}

	strcpy(temp[0],n[0].team);

	for(i=0;i<8;i++)
	{
		if(strcmp(n[i].team,n[i+1].team)!=0)
		{
			for(l=0;l<k;l++)
			{
				if(strcmp(temp[l],n[i+1].team)==0)
				{
					counter++;
				}
			}
			if(counter==0)
			{
				strcpy(temp[k],n[i+1].team);
				k++;
			}
			counter=0;
		}
		
	}
	for(i=0;i<=k;i++)
	{
		printf("\nTeam name: %s\n",temp[i]);
		for(j=0;j<10;j++)
		{
			if(strcmp(n[j].team,temp[i])==0)
			{
				
				printf("\nPlayer name: %s and Batting average: %f\n",n[j].player,n[j].ba);
				
			}
		}
	}
	
	
	
}
