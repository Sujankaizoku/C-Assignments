#include<stdio.h>
int main()
{
int i,j,arr[10];
for(i=0; i<10; i++)
{
printf("Enter a number:");
scanf("%d",&arr[i]);
}
printf("The numbers are:\n");
for(j=0; j<10; j++)
{
printf("%d\n",arr[j]);
}
return 0;
}
