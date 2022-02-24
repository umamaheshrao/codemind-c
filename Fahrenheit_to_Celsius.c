#include<stdio.h>
int main()
{
    float celsius,fahrenheit;
    scanf("%f",&fahrenheit);
    celsius=(fahrenheit-32)*(0.555555556);
    printf("%.2f",celsius);
    return 0;
}