#include <stdio.h>
void ascend (int [],int);
int main ()
{
   int a[10],n,i;
   printf ("Enter the limit of array ");
   scanf ("%d",&n);
   printf ("enter the elements ");
   for (i=0;i<n;i++)
   {
       scanf ("%d",&a[i]);
   }
   ascend (a,n );
   return 0;
}

void ascend (int a[], int n)
{
    for (int i = 0; i < n - 1; i++) 
    {
        for (int j = 0; j < n - i - 1; j++) 
        {
            if (a[j] > a[j + 1]) 
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
      
        }
    }
    
     for ( int i=0;i<n;i++)
     {
       printf ("%d",a[i]);
     }
return;
}