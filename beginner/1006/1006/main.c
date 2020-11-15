#include <stdio.h>

int main()
{
    double A,B,C;
    double pa = 2;
    double pb = 3;
    double pc = 5;

    scanf("%lf", &A);
    scanf("%lf", &B);
    scanf("%lf", &C);

    printf("MEDIA = %.1f\n", (pa*A+pb*B+pc*C)/(pa+pb+pc));

    return 0;
}
