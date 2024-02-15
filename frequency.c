#include <stdio.h>
int main ()
{
int i=0,f=0;
char s1[100],n;
printf ("Enter the string ");
fgets (s1,100,stdin);
printf ("enter the letter to check frequecy ");
scanf ("%c",&n);
while (s1[i] != '\0')
{
if (s1[i] ==n)
{
f++;
}
i++;
}
printf ("The frequency is %d",f);
return 0;
} 
