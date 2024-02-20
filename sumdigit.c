#include <stdio.h>
int sum (int );
int main ()
{
int a[10],n,i,res;
printf ("Enter the limit ");
scanf ("%d",&n);
printf ("enter the elements ");
for (i=0;i<n;i++)
{
scanf ("%d",&a[i]);
}
for (i=0;i<n;i++)
{
res = sum (a[i]);
printf ("%d",res);
}
return 0;
}

int sum (int n)
{
int s=0;
while (n!=0)
{
s= s+ n%10;
n=n/10;
}
return s;
}
