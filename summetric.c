#include <stdio.h>
int main() 
{
    int i,j,a[5][5],m,f=1;
    printf ("Enter order of square matrix ");
    scanf ("%d",&m);
    printf("Enter elements of matrix \n");
    for (i = 0; i < m; i++) 
    {
        for (j = 0; j < m; j++) 
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < m; i++) 
    {
        for (j = 0; j < m; j++) 
        {
            if (a[i][j] != a[j][i]) 
            {
                f = 0;
                break;
            }
        }
        if (f==0)
         break;
    }
    if (f==1) 
    {
        printf("The matrix is symmetric \n");
    } 
    else 
    {
        printf("The matrix is not symmetric \n");
    }

    return 0;
}
