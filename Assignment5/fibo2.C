// WAP in C to generate the Fibonacci series using recursive Function
#include<stdio.h>

int Fibonacci(int);
 
 int main(void)
 {
	int j,i,n;
	printf("Enter the n'th term you want to get : ");
	scanf("%d", &n);
	printf("The %d'th term of the series is : ", n);
	for (i = 0; i < n; i++) {
		j =Fibonacci(i);
	}
	printf("%d", j);
	
   return 0;
}

 
 int Fibonacci(int i)
 {
   if ( i == 0 )
      return 0;
   else if ( i == 1 )
      return 1;
   else
      return ( Fibonacci(i-1) + Fibonacci(i-2) );
 } 