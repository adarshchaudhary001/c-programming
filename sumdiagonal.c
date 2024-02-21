#include <stdio.h>
int main() 
{
    int i,j,a[10][10],m,sum = 0;
    printf("Enter order the square matrix ");
    scanf ("%d",&m);
    printf ("Enter the elements "):
    for ( i = 0; i < m; i++) 
    {
        for ( j = 0; j < m; j++) 
        {
            scanf("%d", &a[i][j]);
        }
    }
    for ( i = 0; i < m; i++) 
    {
        sum = sum + a[i][i];
    }
    printf("Sum of diagonal elements is %d", sum);
    return 0;
}
