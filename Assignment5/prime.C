 // WAP in C to find whether the given number is prime or not using function

 
 #include<stdio.h>
 
 int prime();
 
 int main(void)
 {
	prime();
 }
 
 int prime()
 {
	int num,count=0,i;
	printf("Enter a number to be checked:");
	scanf("%d",&num);
	for(i=1; i<=num; i++)
	{
		if(num%i==0)
		{
		count++;
		}
		if(count==2)
		{
		printf("%d is a prime number",num);
		}
		else
		{
		printf("%d is not a prime number",num);
		}
	}
	return 0;
 }

 