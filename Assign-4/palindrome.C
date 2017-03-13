#include <stdio.h>
#include <string.h>
 
int main()
{
   char arr[100];
 
   printf("Enter a string to reverse\n");
   gets(arr);
 
   strrev(arr);
 
   printf("Reverse of entered string is \n%s\n",arr);
   if(strrev(arr)==arr)
   {
   printf("The string is palinndrome");
   }
   else
   {
   printf("The string is not palindrome");
   }
 
   return 0;
}