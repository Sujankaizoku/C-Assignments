// a program to check whether the number is divisible by 5 and 7 with no return yes argument

 #include <stdio.h>
 int num; // Global variable.
 void div1();
 void nodiv1();
 void div2(int num);
 int div3();
 int div4(int n);


int main(){
	int choice;
	step:
	printf("\nTo check whether the number is divisible by 5 and 7 Using :\n");
	printf("Press 1 for NO  Return NO  Argument \nPress 2 for NO  Return YES Argument \nPress 3 for YES Return NO  Argument \nPress 4 for YES Return YES Argument\n");
	scanf("%d",&choice);
	
	
	switch (choice){
		case 1:
			printf("Enter any number : ");
			scanf("%d",&num);
			
			if (num%5==0&&num%7==0){
				div1();
			}
			else{
				nodiv1();
			}
			break;
		
		case 2:
			printf("Enter any number : ");
			scanf("%d",&num);
			
			div2(num);
			break;

		case 3:
			printf("Enter a number :");
	
			if(div3()==1){
				printf("It is divisible by 5 and 7");
			}
			else{ 
				printf("it is not divisible by 5 and 7");
			}
			break;
		
		case 4:
			printf("Enter number : ");
			scanf("%d",&num);
			
			if (div4(num) == 1){
				printf("It is divisible by 5 and 7");
			}
			else{
				printf("It is NOT divisible by 5 and 7");
			}
			break;
		default:
			printf("You have pressed the wrong key\n\tPLEASE TRY AGAIN");
			goto step;
	}
	return 0;
}

// NO Return NO Argument.
void div1(){
	printf("It is Divisible by 5 and 7.");
} 

void nodiv1(){
	printf("It is NOT divisible by 5 and 7.");
}

//NO Return YES Argument.
void div2(int num){
	if (num%5==0&&num%7==0){
		printf("It is Divisible by 5 and 7.");
	}
	else{
		printf("It is NOT Divisible by 5 and 7.");
	}
}

//YES Return NO  Argument.
int div3(){
	scanf("%d",&num);
	if (num%5==0&&num%7==0){
		return 1;
	}
	else{
		return 0;
	}
}
//YES Return YES Argument. 
int div4(int n){
	if (n%5==0&&n%7==0){
		return 1;
	}
	else{
		return 0;
	}
}