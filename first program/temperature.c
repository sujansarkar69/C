#include <stdio.h>
int main()
{
    int Temp;
    printf("Test Data: ");
    scanf("%d", &Temp);
    if (Temp < 0)
    {
        printf("Freezing weather");
    }
    else if (Temp >= 0 && Temp <= 10)
    {
        printf("Very Cold weather");
    }
    else if (Temp >= 10 && Temp <= 20)
    {
        printf("Cold weather");
    }
    else if (Temp >= 20 && Temp <= 30)
    {
        printf("Normal in Temp");
    }
    else if (Temp >= 30 && Temp <= 40)
    {
        printf("Its Hot");
    }
    else
    {
        printf("It Very Hot");
    }
}