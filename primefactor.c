#include <stdio.h>
void pf ();
int main ()
{
  int n;
  printf ("Enter the number ");
  scanf ("%d",&n);
  pf(n);
  return 0;
}
void pf(int n)
{
    int c ;
    for (c=2;n>1;c++)
    {
        while (n%c==0)
        {
            printf ("%d\n",c);
            n=n/c;
        }
    }
}