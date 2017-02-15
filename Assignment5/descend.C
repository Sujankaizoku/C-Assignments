//Write a program in c to input any 10 number in an array and sort them in descending order using function. (Pass Whole array).
 #include<stdio.h>

 int descend(int ar[10]);
 
 int main(void)
 {
 int i,ar[10];
 printf("Enter the numbers into an array: \n");
 for(i=0; i<10; i++)
 {	
	scanf("%d", &ar[i]);
 }
	
 descend(ar);
 }

 int descend(int ar[10])
 {
     int j,i,tmp=0;
     for(i=0;i<10;i++)
     {
           for(j=i+1;j<10;j++)
           {
                 if(ar[i]<ar[j])
                 {
                       tmp=ar[i];
                       ar[i]=ar[j];
                       ar[j]=tmp;
                 }
           }
     }
     
     printf("\n\n Array in the descending order is - \n");
     for(i=0;i<10;i++)
     {
           printf("\t %d",ar[i]);
     }
     return 0;
}
