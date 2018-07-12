#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void)
{
    float fraction = 1 / 12;
    printf("%f\n", fraction);
    double power = pow(2, fraction);
    printf("%f\n", power);
}