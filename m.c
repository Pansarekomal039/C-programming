#include <stdio.h> 
 
int main() { 
    int rows, cols; 
    printf("Enter number of rows: "); 
    scanf("%d", &rows); 
    printf("Enter number of columns: "); 
    scanf("%d", &cols); 
 
    int matrix[rows][cols]; 
    printf("Enter matrix elements:\n"); 
    for (int i = 0; i < rows; i++) { 
        for (int j = 0; j < cols; j++) { 
            scanf("%d", &matrix[i][j]); 
        } 
    } 
 
    printf("Matrix:\n"); 
    for (int i = 0; i < rows; i++) { 
        for (int j = 0; j < cols; j++) { 
            printf("%d", matrix[i][j]); 
            } 
            printf("\n"); 
        } 
     
        return 0; 
    } 


