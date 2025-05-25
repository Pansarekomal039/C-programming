#include <stdio.h> 
#include <math.h>     
#define row 10    
#define col 10   
void gaussianElimination(double A[row][col], double b[row], double x[row], int n) {
    for (int i = 0; i < n; i++){
        int max_row = i; 
        for (int k = i + 1; k < n; k++) {  
            if (fabs(A[k][i]) > fabs(A[max_row][i])) {
                max_row = k;
            }  
        }     
        for (int k = i; k < n; k++) {
            double temp = A[max_row][k];
            A[max_row][k] = A[i][k];
            A[i][k] = temp;
        }    
        double temp = b[max_row];
        b[max_row] = b[i];
        b[i] = temp;
       
        for (int k = i + 1; k < n; k++) {
            double factor = A[k][i] / A[i][i];
            for (int j = i; j < n; j++) {
                A[k][j] -= factor * A[i][j];
           }
            b[k] -= factor * b[i];
        }
    
    for (int i = n - 1; i >= 0; i--) {
        x[i] = b[i];
        for (int j = i + 1; j < n; j++) {
            x[i] -= A[i][j] * x[j];
        }
        x[i] /= A[i][i];
    }
}

int main() {
    int mat1[row][col];
    int mat2[row][col];
    int sum[row][col];
    int r, c;

    
    printf("Enter the number of rows for the matrix: ");
    scanf("%d", &r);
    printf("Enter the number of columns for the matrix: ");
    scanf("%d", &c);

    printf("Enter first matrix values:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }

    // Display first matrix
    printf("First Matrix:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("%d\t", mat1[i][j]);
        }
        printf("\n");
    }

      printf("Enter second matrix values (same dimensions):\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &mat2[i][j]);
            sum[i][j] = mat1[i][j] + mat2[i][j];  // Add matrices
        }
    }

    // Display sum of matrices
    printf("Sum of Matrices:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }

    // Gaussian elimination part (if needed)
    int n;
    printf("Enter the number of variables for Gaussian elimination: ");
    scanf("%d", &n);

    double A[row][col], b[row], x[row];
    
    // Input augmented matrix for Ax = b
    printf("Enter the coefficients of the matrix A:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%lf", &A[i][j]);
        }
    }
    printf("Enter the constants vector b:\n");
    for (int i = 0; i < n; i++) {
        scanf("%lf", &b[i]);
    }

    gaussianElimination(A, b, x, n);

    // Output solution
    printf("Solution vector x:\n");
    for (int i = 0; i < n; i++) {
        printf("x[%d] = %lf\n", i, x[i]);
    }

    return 0;
}
