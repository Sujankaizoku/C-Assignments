#include<stdio.h>
#define MAX 30
int main()
{
int arr[MAX],num,i=0,j,num2,k,l;
int brr[MAX];
printf("Enter a size of a first  array:");
scanf("%d",&num);
printf("Enter %d integers into array:",num);
while(i<num)
{
scanf("%d",&arr[i]);
i++;
}
printf("First Array is:");
for(j=0; j<num; j++)
{
printf("%d ",arr[j]);
}
printf("\n");
printf("Enter a size of a second  array:");
scanf("%d",&num2);
printf("Enter %d integers into array:",num2);
printf("\n");
while(k<num2)
{
scanf("%d",&brr[k]);
k++;
}
printf("Second Array is:");
for(l=0; l<num2; l++)
{
printf("%d ",brr[l]);
}
return 0;
}