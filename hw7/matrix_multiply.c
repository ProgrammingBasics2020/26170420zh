#include "stdio.h"

int main()
{
    printf("please input 'm n p' of matrix A(mxn) and B(nxp): ");
    int m, n, p;
    scanf("%d %d %d", &m, &n, &p);

    //matrix A*B : m*n * n*p = matrix C:m*p
    int A[m][n], B[n][p];
    int C[m][p];

    //Enter matrix A, B
    printf("\nplease input matrix A(mxn):\n ");
    for (int i = 0; i <= m - 1; i++) {
        for (int j = 0; j <= n - 1; j++) {
            scanf("%d", &A[i][j]);
        }
    }
    printf("\nplease input matrix B(nxp):\n");
    for (int i = 0; i <= n - 1; i++) {
        for (int j = 0; j <= p - 1; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    //initialize C
    for (int i = 0; i <= m - 1; i++) {
        for (int j = 0; j <= p - 1; j++) {
            C[i][j] = 0;
        }
    }

    //multiply two matrix
    for (int i = 0; i <= m - 1; i++) {
        for (int j = 0; j <= p - 1; j++) {
            for (int k = 0; k <= n - 1; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    //output C
    printf("\nMatrix C=AxB: \n");
    for (int i = 0; i <= m - 1; i++) {
        for (int j = 0; j <= p - 1; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
    return 0;
}
