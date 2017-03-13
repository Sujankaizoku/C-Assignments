/*Write a program to read a matrix of size m*n entered by the user 
and display its transpose matrix. Use Dynamic Memory Allocation.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	int m,n,i,j;
	
	printf("Enter the number of rows and columns of matrix\n");
   	scanf("%dX%d", &m, &n);
	int (*matrix)[n] = malloc(sizeof(*matrix) * m );
	
	printf("\nEnter values in matrix\n");
	
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d",&matrix[i][j]);
		}
	}
	
	printf("\nMatrix Before Transpose : \n\n");
	
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%d\t",matrix[i][j]);
		}
		printf("\n");
	}
	
	printf("\nMatrix after Transpose: \n");
	
	for(j=0;j<m;j++){
		for(i=0;i<n;i++){
			printf("%d\t",matrix[i][j]);
		}
		printf("\n");
	}
	return 0;
}

	
