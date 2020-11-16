#include <stdio.h>

int main()
{
    int time, velocity;

    scanf("%d", &time);
    scanf("%d", &velocity);

    int distance = time*velocity;

    float fuel_spent = distance/12.0;

    printf("%.3f\n", fuel_spent);
    return 0;
}
