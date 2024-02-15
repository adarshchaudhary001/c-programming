#include <stdio.h>
#include <string.h>
int main ()
{
int i;
char s1[100],s2[100];
printf ("Enter the string ");
fgets (s1,100,stdin);
strcpy (s2,s1);
strrev (s2);
i = strcmp (s1,s2);
if (i==0)
{
printf ("panandrome ");
}
else 
{
printf ("Not panandrome");
}
return 0;
}
