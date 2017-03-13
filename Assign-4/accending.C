#include<stdio.h>
#include<string.h>

int main()
{
 char name[100],temp[100];
 int i,j,num;
 printf("Enter how many names you want to add in an array:");
 scanf("%d",&num);
 printf("Names are:\n");
 for(i=0; i<num; i++)
 {
 scanf("\n %s\n",name[i]);
 }
     for (i = 0; i < num - 1 ; i++)
    {
        for (j = i + 1; j < num; j++)
        {
            if ((strcmp(name[i], name[j]) > 0)
            {
                strcpy(temp, name[i]);
                strcpy(name[i], name[j]);
                strcpy(name[j], temp);
            }
        }
    }

 printf("\n \n \n");
 printf("Accending Order :\n\n");
 for (i = 0; i < num; i++)
    {
        printf("%s\t\t%s\n",name[i]);
    }
    printf("------------------------------------------\n");

	
	
 
 
 
 
 
 return 0;
 }