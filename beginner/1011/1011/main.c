#include <stdio.h>
#include <math.h>

int main()
{
    double R;
    double pi = 3.14159;

    scanf("%lf", &R);

    double volume_sphere = (4.0/3)*pi*pow(R,3);

    printf("%.3lf\n", volume_sphere);
    return 0;
}
