#include<stdio.h>
#define MAX 30
int main()
{
int arr[MAX],num,i=0,j,temp;
printf("Enter a size of an array:");
scanf("%d",&num);
while(i<num)
{
printf("Enter arr[%d]:",i);
scanf("%d",&arr[i]);
i++;
}
i=0;; //i will be pointing to first element
j=num-1;	//j will be pointing to last element                  
while(i<j)
{
temp=arr[i];
arr[i]=arr[j];
arr[j]=temp;
i++;
j--;
}
printf("\n");
printf("The reverse array is : \n ");

for(i=0; i<num; i++)
{
printf(" Enter [%d]=%d",i,arr[i]);
printf("\n");
}

return 0;
}

