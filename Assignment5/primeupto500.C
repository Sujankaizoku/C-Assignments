 // WAP in C to print all prime number less than 500 using function

 #include<stdio.h>
 
 int prime();
 
 int main(void)
 {
	prime();
 }
 
 int prime()
 {
 int a=1,flag=0,b;
 printf("All the prime numbers are:\n");
 while(a<=500)
 {  
 flag=0;
    for(b=1; b<=a; b++)
    {
	 if(a%b==0)
	 {
	 flag++;
	 }
    }
    if(flag==2)
    {
    printf("%d\n",a);
    }
a++;
}
 return 0;
 }
 