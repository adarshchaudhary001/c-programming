#include <stdio.h>
int main ()
{
int i=0,f=0;
char s[100],n;
printf ("Enter the string ");
fgets (s,100,stdin);
printf ("Enter the value to be checked ");
scanf ("%c",&n);
while (s[i] != '\0')
{
if (s[i] ==n)
{
printf("%d\n",i);
f++;
}
i++;
}
if (f==0)
{
printf ("match not found");
}
return 0;
}
