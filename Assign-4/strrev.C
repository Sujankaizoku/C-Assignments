#include <stdio.h>
#include <string.h>
 
int main()
{
   char arr[100],i,j,temp;
 
   printf("Enter a string to reverse\n");
   gets(arr);
   i=0;
   j=strlen(arr)-1;
   while(i<j)
   {
   temp=arr[i];
   arr[i]=arr[j];
   arr[j]=temp;
   i++;
   j--;
   }
    printf("Reverse of entered string is \n%s\n",arr);
 
   return 0;
}