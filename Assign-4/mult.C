#include <stdio.h>

int main(){	
	int k,m,n,i,j,sum=0;
	int mat1[10][10];
	int mat2[10][10];
	int mat3[10][10];
	printf("ROWS And Columns\n");	
	scanf("%d X %d",&m,&n);
	printf("\nEnter First Matrix:\n");
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			scanf("%d",&mat1[i][j]);
		}
	}
	

	printf("\nEnter Second Matrix:\n");
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			scanf("%d",&mat2[i][j]);
		}
	}
	
	sum=0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			for(k=0;k<m;k++){

				sum+=mat1[i][k]*mat2[k][j];
			}
			mat3[i][j]=sum;
			sum=0;
		}
	}
	
	printf("\n\nMATRIX MULTIPLICATION\n");

	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("%d\t",mat3[i][j]);
		}
		printf("\n");
	}
	return 0;
}