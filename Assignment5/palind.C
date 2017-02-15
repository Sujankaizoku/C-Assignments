//2.WAP in C to input a number and check whether the number is palindrome or not using function.


 
 #include<stdio.h>
 
 int palind();

 int main(void)
 {
	palind();
 }
 
 
 
 int palind()
 {
 int num,rev=0,temp;
 printf("Enter a number to be checked:");
 scanf("%d",&num);
 temp=num;
 
 while(temp!=0)
 {
 rev=rev*10;
 rev=rev+temp%10;
 temp=temp/10;
 }
 if(num==rev)
	{
		printf(" %d is palindrome",num);
	}
	else
	{
		printf("%d is not a palindrome number",num);
	}
 }