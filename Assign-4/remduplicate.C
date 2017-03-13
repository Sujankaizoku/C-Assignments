#include<stdio.h>
#define MAX 30
int main()
{
 int arr[MAX],num,i=0,j,temp;
 printf("Enter a size of an array:");
 scanf("%d",&num);
 printf("Enter %d integers into array:",num);
 while(i<num)
 {
	scanf("%d",&arr[i]);
	i++;
 }
 printf("Original Array is:");
 for(j=0; j<num; j++)
 {
	printf("%d ",arr[j]);
 }
 printf("Array after removing duplicate values:");
 //now for removing the duplicated array

 for(i=0; i<num; i++)
{
	for(j=i+1; j<num; j++)
	{
		if(arr[j]==arr[i])
		{	
			for(temp=j; temp<num; temp++)
			{
				arr[temp]=arr[temp+1];
			}
		num--;
		}
		
	}
}
 printf("\n");
 printf("Array after removing the duplicated values:");
 for(i=0; i<num; i++)
 {
	printf("%d ",arr[i]);
 }
 return 0;
}

