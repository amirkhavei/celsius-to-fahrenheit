#include <stdio.h>
#include <stdlib.h>
float CentigradetoFahrenheit(float c)
{
    float f;
    f = ((c*9)/5)+32;
    return f;
}
int main()
{
    float c ,f ;
    printf("please inter the degree (Centigrade) = ");
    scanf("%f",&c);
    f = CentigradetoFahrenheit(c);
    printf("degree is %.2f in Fahrenheit",f);
    return 0;
}
