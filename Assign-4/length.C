#include<stdio.h>
int main()
{
char name[30],count=0,i;
printf("Enter your name:");
gets(name);
for(i=0; name[i]!=0; i++)
{
count++;
}
printf("The length of a string is %d ",count);


return 0;
}