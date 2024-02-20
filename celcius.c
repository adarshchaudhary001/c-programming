#include <stdio.h>
float celcius(float );
int main() 
{
    float f, c;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &f);
    c = celcius(f);
    printf("%f Fahrenheit is equal to %f Celsius\n", f, c);
    return 0;
}

float celcius (float f)
{
    return (f - 32) * 5 / 9;
}
