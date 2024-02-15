#include <stdio.h>
#include <string.h>
int main ()
{
char s1[50],s2[50],s3[100];
int i,l1,l2,j,f=0;
printf ("Enter two strings ");
fgets (s1,50,stdin);
fgets (s2,50,stdin);
l1 = strlen (s1);
l2 = strlen (s2);
if (l1==l2)
{
i=0;
while (s1[i] != '\0')
{
if (s1[i]!=s2[i])
{
f=1;
break;
}
i++;
}
}
else 
{
f=1;
}
if (f==0)
{
printf ( "strings are same \n");
strcpy (s3,s1);
for ( i=l1, j=0;j<l2-1;i++,j++)
{
s3[i] = s2[j];
}
s3[i] = '\0';
puts (s3);
}
else 
{
printf ("strings not same");
}
return 0;
}












