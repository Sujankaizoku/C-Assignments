 //WAP to find the sum of Natural number up to 10 using recursion. 
 
 #include<stdio.h>
 
 int mysum(int num);
 
 int main(void)
 {
 int num,sum;
 printf("Enter a number upto which you want to find the sum:");
 scanf("%d",&num);
 mysum(num);
 printf("The sum of given series is %d",mysum(num));
 return 0;
 }
 
 int mysum(int num)
 {
 if (num==1)  
 return num;
 
 num=num+mysum(num-1);
 return num;
 }