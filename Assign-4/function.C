 #include<stdio.h>
 int add(int,int);
 int mult(int,int);
 int sub(int,int);
 float div(float,float);

 

 int main(void)
 {
 char symbol;
 int c,d,choice;
 sec1:
 printf("Press 1 for addition \nPress 2 for substraction\nPress 3 for multiplication\nPress 4 for division\n");
 printf("Enter your choice:");
 scanf("%d",&choice);
 
 switch(choice)//switching case starts
	{
	case 1:
	printf("YOu have Entered Addition.\nEnter two numbers:");
	scanf("%d%d",&c,&d);
	printf("The sum is %d ",add(c,d));
	break;
	
	case 2:
	printf("YOu have Entered Subtraction.\nEnter two numbers:");
	scanf("%d%d",&c,&d);
	printf("The difference is %d ",sub(c,d));
	break;
	
	case 3:
	printf("YOu have Entered Multiplication.\nEnter two numbers:");
	scanf("%d%d",&c,&d);
	printf("The product is %d",mult(c,d));
	break;
	
	case 4 :
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
