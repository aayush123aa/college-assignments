/*
WAP using pointers to read an array of integers and search a key element within that array. 
Search() has to be a user defined function. the array and the key are to be passed to search() by address.

*/

#include<stdio.h>

void search(int *list, int *key);

void main()
{
	int i,list[10],key;
	
	printf("input a list of 10 numbers:\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&list[i]);	
	}
	
	printf("what element do you wish to find ?\t");
	scanf("%d",&key);
	search(&list[0],&key);
	


}

void search(int *list, int *key)
{
	int i=0;
	for(i=0;i<10;i++)
	{
		if(*(list+i)==*key)
		{
			printf("the element %d is at the #%d index of the list !!",*key, i);
		}
	}
}








