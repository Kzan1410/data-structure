#include <stdio.h>
#include <stdlib.h>
int count1 = 0;
int count2 = 0;

void Function_Show_Matrix(int m,int n,int matrix[m][n])
{
    int i,j;
    if(count2 == 0)
    {
        printf(" Matrix A\n");
    }
    if(count2 == 1)
    {
        printf(" Matrix B\n");
    }
    if(count2 == 2)
    {
        printf(" Matrix A+B\n");
    }
    printf("\n");
    for(i=0; i<m; i++)
            {
                printf(" |");
        for(j=0; j<n; j++)
        {
            printf("  ");

            if(matrix[i][j] < 10)
            {
                printf("   ");
            }
            else if(matrix[i][j] < 100)
            {
                printf("  ");
            }
            else if(matrix[i][j] < 1000)
            {
                printf(" ");
            }
            printf("%d",matrix[i][j]);
        }
         printf("  |");
        printf("\n");
    }
    printf("\n");
}

void Function_Matrix_Addition(int m,int n,int matrix_A[m][n],int matrix_B[m][n],int matrix_C[m][n])
{
    int i,j;

    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            matrix_C[i][j] = matrix_A[i][j] + matrix_B[i][j];
        }
    }
}

void Function_input_value_Matrix(int m,int n,int matrix[m][n])
{
    int i,j;

    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            if(count1 == 0)
            {
                printf("Matrix A [row %d], [column %d] = ",i+1,j+1);
                scanf("%d", &matrix[i][j]);
            }
            else
            {
                printf("Matrix B [row %d], [column %d] = ",i+1,j+1);
                scanf("%d", &matrix[i][j]);
            }

        }
    }
    printf("\n");
}

int main()
{
    printf("Program Matrix addition\n");
    printf("\n");

    int m,n;
    printf("Matrix sizes m x n\n");
    printf("input value m :: ");
    scanf("%d",&m);
    printf("input value n :: ");
    scanf("%d",&n);

    int Matrix_A[m][n];
    int Matrix_B[m][n];
    int Matrix_C[m][n]; // Matrix C equal Matrix A + Matrix B

    printf("\n");
    printf("Input value to Matrix \n");

    printf("\n");
    Function_input_value_Matrix(m,n,Matrix_A);
    count1++;
    Function_input_value_Matrix(m,n,Matrix_B);
    count1--;
    Function_Matrix_Addition(m,n,Matrix_A,Matrix_B,Matrix_C);

    printf("Matrix sizes %d x %d\n\n",m,n);

    Function_Show_Matrix(m,n,Matrix_A);
    count2++;
    Function_Show_Matrix(m,n,Matrix_B);
    count2++;
    Function_Show_Matrix(m,n,Matrix_C);
    count2++;

    return 0;
}
