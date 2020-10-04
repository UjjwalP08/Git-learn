#include <stdio.h>
float temprature(float C) // Formal Parameter 
{

    float f; // Formal Parameter  

    f = ((9 * C) / 5 + 32);

    return f;
}
int main()
{
    float ca, F; //Actual Parameter

    printf("Enter calcius :\n");
    scanf("%f", &ca);

    F = temprature(ca);

    printf("The tempraturer in Feranhit is %f", F);

    return 0;
}
