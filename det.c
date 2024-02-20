#include <stdio.h>
int main() 
{
    int i,j,a[2][2];
    int d;
    printf("Input the elements of the 2x2 matrix ");
    for ( i = 0; i < 2; i++) 
    {
        for ( j = 0; j < 2; j++) 
        {
            scanf("%d", &a[i][j]);
        }
    }
    d = a[0][0] * a[1][1] - a[0][1] * a[1][0];
    printf("Determinant of the matrix is %d", d);
    return 0;
}