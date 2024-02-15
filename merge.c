#include <stdio.h>
#include <string.h>
int main ()
{
char s1[50],s2[50],s3[100];
int i,j,l1,l2;
printf ("Enter two strings ");
fgets (s1,50,stdin);
fgets (s2,50,stdin);
l1 = strlen (s1);
l2 = strlen (s2);
strcpy (s3,s1);
for ( i=l1, j=0;j<l2-1;i++,j++)
{
s3[i] = s2[j];
}
s3[i] = '\0';
puts (s3);
return 0;
}
