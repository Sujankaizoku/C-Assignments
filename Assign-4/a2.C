#include<stdio.h>
int main()
{
 int a,b,c,i,j;
 int arr1[a];
 int arr2[b];
 printf("Enter size of an 1st array :");
 scanf("%d",&a);
 printf("Enter %d elements in  1st array :",a);
 for(i=0; i<a; i++)
 {
	scanf("%d",&arr1[i]);
 }
 printf("Enter size of an 2nd array :");
 scanf("%d",&b);
 printf("Enter %d elements in  2nd array :",b);
 for(j=0; i<b; j++)
 {
	scanf("%d",&arr2[j]);
 }
 return 0;
 }