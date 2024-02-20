#include <stdio.h>
void minmax (int [],int );
int main ()
{
int a[20],n,i;
printf ("input the limit of array ");
scanf ("%d",&n);
printf ("enter the elements ");
for (i=0;i<n;i++)
{
scanf ("%d",&a[i]);
}
minmax (a,n);
return 0;
}

void minmax (int a[] ,int n)
{
int max, min,i;
max = a[0];
min = a[0];
for (i=1;i<n;i++)
{
if (max <a[i])
max = a[i];
if (min >a[i])
min = a[i];
}
printf ("biggest = %d smallest = %d",max,min);
}
