#include <stdio.h>
int main() 
{
    int max,a[10][10],m,n,i,j;
    printf ("Enter rows and columns ");
    scanf ("%d%d",&m,&n);
    printf("Enter elements of matrix ");
    for (i = 0; i < m; i++) 
    {
        for (j = 0; j < n; j++) 
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Maximum elements in each row \n");
    for (i = 0; i < m; i++) 
    {
        max = a[i][0]; 
        for (j = 1; j < n; j++) 
        {
            if (a[i][j] > max) 
            {
                max = a[i][j];
            }
        }

        printf("Row %d: %d\n", i + 1, max);
    }

    return 0;
}