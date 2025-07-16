#include <stdio.h>

int main() {
    int m, n, i, j; 
    printf("Enter number of Rows: ");
    scanf("%d", &m);
    printf("Enter number of Columns: ");
    scanf("%d", &n);

    int M1[m][n];

    for (i = 0; i < m; i++) {
        printf("Row %d : \n", i + 1);
        for (j = 0; j < n; j++) {
            scanf("%d", &M1[i][j]);
        }
    }
    printf("\n Matrix \n");
     for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d\t", M1[i][j]);
        }
        printf("\n");
    }

    int luckynumber = -1;
    for (i = 0; i < m; i++) {
        int rowMin = M1[i][0];
        int colIndex = 0;  

        for (j = 1; j < n; j++) {
            if (M1[i][j] < rowMin) {
                rowMin = M1[i][j];
                colIndex = j;  
            }
        }

        int isLucky = 1;
        for (int k = 0; k < m; k++) {
            if (M1[k][colIndex] > rowMin) { 
                isLucky = 0;
                break;
            }
        }

        if (isLucky) {
            luckynumber = rowMin; 
            break; 
        }
    }

   
    if (luckynumber != -1) {
        printf("Output: [%d]\n", luckynumber);
    } else {
        printf("No Lucky Number found.\n");
    }

    return 0;
}
