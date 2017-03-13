#include <stdio.h>
 
int main() 
{
    int array[100], minimum, size, i,maximum,j;
 
    printf("Enter the number of elements in array\n");
    scanf("%d",&size);
 
    printf("Enter %d integers\n", size);
 
    for ( i = 0 ; i < size ; i++ )
        scanf("%d", &array[i]);
 
    minimum = array[0];
 
    for ( i = 1 ; i < size ; i++ ) 
    {
        if ( array[i] < minimum ) 
        {
           minimum = array[i];
      }
    } 
    
    printf("Minimum element  is %d.\n" ,minimum);
	j=size-1;
	maximum=array[j];
	 for ( i = 1 ; i< size ; i++ ) 
    {
        if ( array[i] > maximum ) 
        {
           maximum = array[i];
        }
    } 
	 printf("Maximum element is %d.\n",maximum);
	
    return 0;
}