//Write a Program in C to input any 10 elements in an array and display them using function. (Passing individual array element).
#include<stdio.h>

 int myarray();

 int main()
 {
	myarray();
 }
 
 int myarray()
 {
	int arr[10],i,j;
	printf("Enter 10 numbers into an array :");
	for(i=0; i<10; i++)
	{
		scanf("%d",arr[i]);
	}
	
	for(j=0; j<10; j++)
	{
		printf("%d\n",arr[j]);
	}
	
 return 0;
 }