#include <stdio.h>
int main() 
{
    int a[10][10],i,j,m,f=1;
    printf("Enter the order of the square matrix ");
    scanf("%d", &m);
    printf("Enter the elements of the square matrix ");
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
            if (i != j && a[i][j] != 0) 
            {
                f = 0;
                break;
            }
            else if (i == j && a[i][j] != 1) 
            {
                f = 0;
                break;
            }
        }
    }
    if (f==1) 
    {
        printf("The matrix is an identity matrix.\n");
    } 
    else 
    {
        printf("The matrix is not an identity matrix.\n");
    }

    return 0;
}
