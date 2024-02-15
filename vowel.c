#include <stdio.h>
int main ()
{
int i=0,cv=0,cc=0;
char s [100];
printf ("Enter the string ");
fgets (s,100,stdin);
while (s[i]!='\0')
{
if (s[i]!=' ')
{
if (s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U')
{
cv++;
}
else 
{
cc++;
}
}
i++;
}
printf ("vowels are %d consonants are %d",cv,cc-1);
return 0;
}   
