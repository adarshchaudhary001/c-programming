#include <stdio.h>
int main() 
{
    int a[10][10],m,n,i,j;
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
    printf ("Odd lower triangular elements are :");
    for (i = 0; i < m; i++) 
      {
          for (j = 0; j < n; j++) 
          {
             if (i>=j && a[i][j]%2!=0)
               {
                  printf ("%d\n",a[i][j]);
                }
          }
       }
return 0;
}