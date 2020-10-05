#include<stdio.h>
#define ROW 3
#define COLUMN 3
void matrixTranspose();
int main(void)
{
	int matrix1[ROW][COLUMN],i,j;
	printf("<-------Enter the elements in the matrix 1-------->\n\n");
	for(i=0;i<ROW;i++)
	{
		for(j=0;j<COLUMN;j++)
		{
			printf("Element at position matrix1[%d][%d] :-",i,j);
			scanf("%d",&matrix1[i][j]);
		}
	}
	matrixTranspose(matrix1);
	
	return 0;
}
void matrixTranspose(int matrix1[][COLUMN])
{
	int i,j,matrix2[ROW][COLUMN];
	for(i=0;i<ROW;i++)
	{
		for(j=0;j<COLUMN;j++)
		{
			matrix2[i][j]=matrix1[j][i];
		}
	}
	printf("\n<------Original matrix is----->\n\n");
	for(i=0;i<ROW;i++)
	{
		for(j=0;j<COLUMN;j++)
		{
			printf("%d\t",matrix1[i][j]);
		}
		printf("\n");
	}
	printf("\n<------Transpose of a  matrix is----->\n\n");
	for(i=0;i<ROW;i++)
	{
		for(j=0;j<COLUMN;j++)
		{
			printf("%d\t",matrix2[i][j]);
		}
		printf("\n");
	}
}
