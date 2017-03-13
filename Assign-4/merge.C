//WAP a program to read two arrays and merge these two arrays into third array
#include<stdio.h>
int main(){
 int a,b,c,i,j;
 
 printf("Enter size of an array1:");
 scanf("%d", &a);
 int ary1[a];
 printf("Enter %d  numbers in array1:",a);
 
 for(i=0; i<a; i++){
	scanf("%d", &ary1[i]);
 }
 
 printf("Enter size of an array2:");
 scanf("%d", &b);
 int ary2[b];
 printf("Enter %d numbers in array:",b);
 for(j=0; j<b; j++){
	scanf("%d", &ary2[j]);
 }
 // for merging 
 c = a+b;
 int ary3[c];
 for(i=0; i<a; i++)
 {
	ary3[i] = ary1[i];
 }
 for(j=0; j<b; j++)
 {
	ary3[i] = ary2[j];
	i++;
 }
 printf("Merged Array is :");
 for(j=0; j<c; j++){
	printf("%d ",ary3[j]);
 } 
 return 0;
}

