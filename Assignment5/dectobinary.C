 #include<stdio.h> 
 int converter(); 
 
 int main(void)
 {
 converter();
 }

 
 int converter()
	{
    long int decimalNumber,quotient;
	int binary[100],i=0,j;
	printf("Enter any decimal number: ");
	scanf("%ld",&decimalNumber);
	quotient = decimalNumber;
	while(quotient!=0)
	{
		binary[i] = quotient%2;
		quotient = quotient/2;
		i++;
	}
	printf("The binary conversion of %d is : ", decimalNumber);
	for( j = i-1; j>=0; j--)
	{
		printf("%d",binary[j]);
	}
 return 0;
 }



