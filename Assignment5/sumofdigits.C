 #include<stdio.h>

 int SumDigits(int num);
 
 int main(void)
 {
 int num,sum;
 printf("Enter a number whose sum of digits you want to find:");
 scanf("%d",&num);
 sum=SumDigits(num);
 printf("The sum of digits is %d",sum);
 return 0;
 }
 
 
 int SumDigits(int num) 
 {
	if (num<10) 
	{
    return num;
	}
	else 
	{
    return num%10 + SumDigits(num/10);
	}
	
	
}


 