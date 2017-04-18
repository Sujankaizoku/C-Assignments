//Write a program in C to find factorial of a given number using Recursive Function
 
 #include<stdio.h>
 
 int myfact(int num);
 
 int main(void)
 {
 int num,sum;
 printf("Enter a number whose you want to find the fact:");
 scanf("%d",&num);
 printf("The factorial of given number is %d",myfact(num));
 return 0;
 }
 
 int myfact(int num)
 {
 int rev=0;
 if (num==1)
 { 
 return num;
 }
 else
 {
 return num*myfact(num-1);
 }
 }