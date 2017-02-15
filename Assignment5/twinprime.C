/* WAP in C to print print TWIN PRIME less than 500 using function. 
[if two consecutive odd numbers are both prime then they are known as twin prime].*/

 #include<stdio.h>
 int twinprime();
 
 int main(void)
 {
 printf("Twin prime numbers are \n");
 twinprime();
 }
 
 int twinprime()
 {
 int arr[200];
 int a=1,flag=0,b,x=0;
 
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
    arr[x]=a;
	x++;
	}
 a++;
 }
 int i,j;
 for(i=1; i<200; i++)
 {
	if(arr[i+1]-arr[i]==2)
	{
	printf("(%d ,%d )\n",arr[i+1],arr[i]);
	}
 }
 
 
 return 0;
 }
 
