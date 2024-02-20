#include <stdio.h>
int main() 
   {
    int a[5][5], b[5][5], c[5][5]={0},i, j, k, m1, n1, m2, n2;
    printf("Enter the number of rows and columns of the first matrix ");
    scanf("%d %d", &m1, &n1);

    printf("Enter the elements of the first matrix ");
    for (i = 0; i < m1; i++) 
    {
        for (j = 0; j < n1; j++) 
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter the number of rows and columns of the second matrix ");
    scanf("%d %d", &m2, &n2);

    printf("Enter the elements of the second matrix ");
    for (i = 0; i < m2; i++) 
    {
        for (j = 0; j < n2; j++) 
        {
            scanf("%d", &b[i][j]);
        }
    }
    if (n1 != m2) 
    {
        printf("The matrices cannot be multiplied ");      
    }
    else 
    {
    for (i = 0; i < m1; i++) 
    {
        for (j = 0; j < n2; j++) 
        {
            for (k = 0; k < n1; k++) 
            {
                c[i][j] = c[i][j] + a[i][k] * b[k][j];
            }
        }
    }}
    printf("Result of matrix multiplication \n");
    for (i = 0; i < m1; i++) 
    {
        for (j = 0; j < n2; j++) 
        {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
