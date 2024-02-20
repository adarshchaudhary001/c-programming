#include<stdio.h>
int main ()
{
  int i,j,f=0,m,n,a[5][5];
  printf ("Enter rows and columns ");
  scanf ("%d%d",&m,&n);
  printf ("enter the element of matrix ");
  for(i=0; i<m; i++)
    {
     for(j=0; j<n; j++)
      {
         scanf("%d",&a[i][j]);
      }
    }
  for (i=0;i<m;i++)
    {
      for (j=0;j<n;j++)
        {
          if (a[i][j]!=0)
        {
         f=1; 
        break;
        }
        }
    }
      if (f==0)
      {
        printf ("matrix is a null matrix ");
      }
      else
      {
        printf ("matrix is not a null matri ");
      }
   return 0;
}
