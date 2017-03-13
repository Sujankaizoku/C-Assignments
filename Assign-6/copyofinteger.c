// Write a program that uses pointers to copy an array of integer.

#include <stdio.h>
#include <stdlib.h>

int *copy (int *arr,int size);
int main(){
	int size,i;
	
	printf("Array Size :");
	scanf("%d",&size);
	
	int arr[size];
	
	printf("Enter values in array\n");
	for(i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	
	int *newarr = copy(arr,size);
	
	printf("Index\t\tValue\t\tAddress\n");
	
	for(i=0;i<size;i++){
    
        printf("%d\t\t%d\t\t%p\n",i,*(newarr+i),newarr+i);
    }
	
	return 0;

}
int *copy (int *arr,int size){
	int *newarr= malloc(sizeof(double) * size);
	int i;
	for(i=0;i<size;i++){
		newarr[i] = arr[i];
	}
	return newarr;
}
