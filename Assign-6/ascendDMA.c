//Write a program to sort 'n' numbers in ascending order using dynamic memory.

#include <stdio.h>
#include <stdlib.h>

int main(){
	int num,*p,i,j,temp;
	printf("Enter desired numbers : ");
	scanf("%d",&num);
	
	p = (int *)malloc(num*sizeof(int));
	
	printf("Enter numbers :");
	for (i=0;i<num;i++){
		scanf("%d",(p+i));
	}
	
	for (i=0;i<num;i++){
		j=i+1;
		for(j;j<num;j++){
			if(*(p+i)>*(p+j)){
				temp = *(p+i);
				*(p+i) = *(p+j);
				*(p+j) = temp;
			}
		}
	}
	printf("Assending Order: ");
	for(i=0;i<num;i++){
		printf("%d ",*(p+i));
	}
	
	return 0;
}
