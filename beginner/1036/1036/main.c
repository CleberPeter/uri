#include <stdio.h>
#include <math.h>

int main()
{
    double A,B,C;

    scanf("%lf %lf %lf", &A, &B, &C);

    if (A != 0)
    {
        double delta = pow(B,2) - 4*A*C;
        if (delta >= 0)
        {
            double R1 = (-B + sqrt(delta)) / (2*A);
            double R2 = (-B - sqrt(delta)) / (2*A);

            printf("R1 = %.5lf\n", R1);
            printf("R2 = %.5lf\n", R2);

            return 0;
        }
    }

    printf("Impossivel calcular\n");
    return 0;
}
