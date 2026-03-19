/*

define a struct in C with the following information:
1. hotel name
2. hotel address
3. grade of the hotel
4. room charge
5. no. of rooms

write functions to:

1. ask the user for a hotel Grade and list the hotels of corresponding grade with their room charges in ascending order.
2. to ask the use for a room charge and list out all the hotels with room charges lower than that price.
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void hotelGrade(char m);
void roomCharges(int l);
struct hotel
{
	char name[20],address[20],grade;
	int charge,rooms;
} n[4];

void main()
{
	char grade;
	int i,roomcharge;
	
	printf("input the d3etails of the hotel:\n");
	for(i=0;i<4;i++)
	{
		printf("name:\t");
		scanf("%s",&n[i].name);
		
		printf("address:\t");
		scanf("%s",&n[i].address);
		
		printf("grade:\t");
		scanf("%s",&n[i].grade);
		
		printf("charge:\t");
		scanf("%d",&n[i].charge);
		
		printf("no. of rooms:\t");
		scanf("%d",&n[i].rooms);
	}
	fflush(stdin);
	
	printf("what grade hotels are you searching for ? (grade ranges from A to D)\t");
	scanf("%c",&grade);
	
	hotelGrade(grade);
	
	printf("what should the maximum room charge be? ");
	scanf("%d",&roomcharge);
	
	roomCharges(roomcharge);
}


void hotelGrade(char m)
{
	
	int i,temp,k=0,ind[4];
	for(i=0;i<4;i++)
	{
		if(m==n[i].grade)
		{
			ind[k]=i;
			k++;
		}
	}
	for(i=0;i<k-1;i++)
	{
		if(ind[i]>ind[i+1])
		{
			temp=ind[i];
			ind[i]=ind[i+1];
			ind[i+1]=temp;
		}
	}
	
	printf("the names of the hotels with the grade %c are listed below in ascending order of charge:\n",m);
	for(i=0;i<k;i++)
	{
		printf("name: %s and charge: %d\n",n[ind[i]].name,n[ind[i]].charge);
	}
	
}

void roomCharges(int l)
{
		
	int i;
	printf("the hotels with room charges less that %d are as follows: \n",l);
	for(i=0;i<4;i++)
	{
		if(n[i].charge<l)
		{
			printf("name: %s and charge: %d\n",n[i].name,n[i].charge);
		}
	}
}
