#include <stdio.h>
int main()
{
	int i,j,m,n,sum=0;
	
	printf("Enter Number of Rows: ");
	scanf("%d",&m);
	printf("Enter Number of Columns: ");
	scanf("%d",&n);
	int matrix[m][n];

	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("Enter Matrix[%d][%d]: ",i,j);
			scanf("%d",&matrix[i][j]);
		}
	}
  printf("\n The ENtered Matrix is :\n");
  for(i=0; i<m; i++)
  {
	for(j=0; j<n; j++)
	{
	printf("%d \t",matrix[i][j]);
	}
	printf("\n");
 }
 printf("\n The sum of rows and Columns :\n");
 for(i=0; i<m; i++)
  {
  sum=0;
	for(j=0; j<n; j++)
	{
    sum+=matrix[i][j];
	}
	printf("Sum of %d row=%d \n",i,sum);
 }
  printf("\n\n");
  for(j=0; j<n; j++)
  {
  sum=0;
	for(i=0; i<m; i++)
	{
    sum+=matrix[i][j];
	}
	printf("Sum of %d column=%d \n",j,sum);
 }
  
 return 0;
 }
	