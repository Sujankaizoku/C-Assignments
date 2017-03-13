#include<stdio.h>
int main()
{
int i,j,arr[10],sum=0,diff=0;
float ave;
for(i=0; i<10; i++)
{
printf("Percenatge of stu%d:",i);
scanf("%d",&arr[i]);
}
for(j=0; j<10; j++)
{
sum+=arr[j];
ave=(sum/10);
}
printf("Sum is %d\n",sum);
printf("\n Average is %f",ave);
return 0;
}