 #include<stdio.h>
 
 int myrev(int);
 int rev=0;
 int main()
 {
	int num;
	printf("Enter a number:");
	scanf("%d",&num);
	rev=myrev(num);
	printf("The reversed number is %d",rev);
	return 0;
 }
 int myrev(int x)
 {
 if (x==0) 
	{
    return rev;
	}
	
	rev=rev*10;
	rev=rev+x%10;
	x=x/10;
	
	
	return myrev(x);
 }