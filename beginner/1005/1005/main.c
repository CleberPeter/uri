#include <stdio.h>

int main()
{
    double A,B;
    double pa = 3.5;
    double pb = 7.5;

    scanf("%lf", &A);
    scanf("%lf", &B);

    printf("MEDIA = %.5f\n", (pa*A+pb*B)/(pa+pb));

    return 0;
}
