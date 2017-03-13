 #include<stdio.h>
 #include<string.h>
 int add(int,int);
 int mult(int,int);
 int sub(int,int);
 float div(float,float);

 int main(void)
 {
 char symbol;
 int c,d;
 sec1:
 printf("Press + for addition \nPress - for substraction\nPress * for multiplication\nPress / for division\n");
 printf("Enter your choice:");
 scanf("%c",&symbol);
 
 switch(symbol)//switching case starts
	{
		printf("YOu have Entered Addition.\nEnter two numbers:");
		scanf("%d%d",&c,&d);
		printf("The sum is %d ",add(c,d));
		break;
		
		case '-':
		case '+':
		printf("YOu have Entered Subtraction.\nEnter two numbers:");
		scanf("%d%d",&c,&d);
		printf("The difference is %d ",sub(c,d));
		break;
		
		case '*':
		printf("YOu have Entered Multiplication.\nEnter two numbers:");
		scanf("%d%d",&c,&d);
		printf("The product is %d",mult(c,d));
		break;
		
		case '/' :
		printf("YOu have Entered Division.\nEnter two numbers:");
		scanf("%f%f",&c,&d);
		printf("The quotient is %f\n",div(c,d));
		break;
		
		default:
		printf("\nYou have pressed the wrong key \n");
		printf("\nPress another key to continue \n");
		goto sec1;
		break;
	}

 return 0;
 }
     //initializing functions as follows 
	 int add(int a,int b)
	 {
		return a+b;
	 }

	 int mult(int a,int b)
	 {
		return a*b;
	 }
	 
	 int sub(int a,int b)
	 {
		return a-b;
	 }
	 float div(float a,float b)
	 {
		return a/b;
	 }
