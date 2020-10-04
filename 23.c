#include <stdio.h>
float force(float m) // Formal Parameter
{
    float result; // Formal Parameter

    result = m * 9.8;

    return result;
}
int main()
{
    float mass, ans;// Actual Parameter

    printf("Enter mass:\n");
    scanf("%f", &mass);

    ans = force(mass);

    printf("The force is %f N", ans);
    return 0;
}