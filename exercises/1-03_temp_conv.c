#include <stdio.h>
int main()
{
int min, max, step;
float fahr, cels;
min = 0;
max = 300;
step = 20;

fahr = min;
printf("|--------------------|\n");
printf("|Fahrenheit | Celsius|\n");
printf("|--------------------|\n");
while (fahr <= max) {
        cels = (5.0/9.0) * (fahr - 32.0);
        printf("|%10.0f | %7.1f|\n", fahr, cels);
        fahr = fahr + step;
        }
printf("|--------------------|\n");
 }
