 // WAP in C to find all the divisor of a given number using functions

 #include<stdio.h>
 
 int div();
 
 int main(void)
 {
	div();
 }

int div()
{
int i,a;
	printf("Enter a number :");
	scanf("%d",&a);
	printf("\n All the divisiors of %d are \n\n",a);
	for(i=1; i<=a; i++)
	{
		if(a%i==0)
		{
			printf("%d\n",i);
		}
	}
	return 0;
}