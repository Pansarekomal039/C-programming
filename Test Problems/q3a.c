#include<stdio.h>
#include<stdlib.h>
int main()
{
    int rowsA,colsA,rowsB,colsB,i,j,k;
    printf("Enter the rows for matrix A");
    scanf("%d",&rowsA);
    printf("Enter the cols for matrix A");
    scanf("%d",&colsA);
    printf("Enter the rows for matrix B");
    scanf("%d",&rowsB);
    printf("Enter the cols for matrix B");
    scanf("%d",&colsB);
    if(rowsA!=rowsB)
    {
        printf("Matrix multiplication can't be performed");
    }
    int **A = (int **)malloc(rowsA * sizeof(int *));
    int **B = (int **)malloc(rowsB * sizeof(int *));
    int **C = (int **)malloc(rowsA * sizeof(int *)); // Result matrix for multiplication
    int **D = (int **)malloc(rowsA * sizeof(int *)); // Result matrix for addition
    int **E = (int **)malloc(rowsA * sizeof(int *)); // Result matrix for subtraction

    for ( i = 0; i < rowsA; i++) {
        A[i] = (int *)malloc(colsA * sizeof(int));
        C[i] = (int *)malloc(colsB * sizeof(int)); // Multiplication result
        D[i] = (int *)malloc(colsA * sizeof(int)); // Addition result
        E[i] = (int *)malloc(colsA * sizeof(int)); // Subtraction result
    }
    for (int i = 0; i < rowsB; i++) {
        B[i] = (int *)malloc(colsB * sizeof(int));
    }

    printf("Enter elements for the matrixA");
    for(i=0;i<rowsA;i++)
    {
        for(j=0;j<colsA;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    printf("Enter elements for the matrixB");
    for(i=0;i<rowsB;i++)
    {
        for(j=0;j<colsB;j++)
        {
            scanf("%d",&B[i][j]);
        }
    }
    printf("MatrixA");
    for(i=0;i<rowsA;i++)
    {
        for(j=0;j<colsA;j++)
        {
            printf("%d\n",A[i][j]);
        }
    }
    printf("MatrixB");
    for(i=0;i<rowsB;i++)
    {
        for(j=0;j<colsB;j++)
        {
            printf("%d\n",B[i][j]);
        }
    }
     printf("\nMatrix Multiplication Result:\n");
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsB; j++) {
            C[i][j] = 0;
            for (int k = 0; k < colsA; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

 printf("\nMatrix Addition\n");
     for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsB; j++) {
                D[i][j]=A[i][j]+B[i][j];
            }
            printf("%d\t", D[i][j]);
        }
        printf("\n");
    
printf("\nMatrix Substraction\n");
     for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsB; j++) {
                E[i][j]=A[i][j]-B[i][j];
            }
            printf("%d\t", E[i][j]);
        }
        printf("\n");for (int i = 0; i < rowsA; i++) {
        free(A[i]);
        free(C[i]);
        free(D[i]);
        free(E[i]);
    }
    for (int i = 0; i < rowsB; i++) {
        free(B[i]);
    }
    free(A);
    free(B);
    free(C);
    free(D);
    free(E);

    return 0;
    }
