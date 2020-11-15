#include <stdio.h>
#include <math.h>

int main()
{
    double A,B,C;
    double pi = 3.14159;

    scanf("%lf %lf %lf", &A, &B, &C);

    double area_triangle = A*C/2;
    double area_circle = pi*pow(C,2);
    double area_trapezium = (A+B)*C/2;
    double area_square = pow(B,2);
    double area_rectangle = A*B;

    printf("TRIANGULO: %.3lf\n", area_triangle);
    printf("CIRCULO: %.3lf\n", area_circle);
    printf("TRAPEZIO: %.3lf\n", area_trapezium);
    printf("QUADRADO: %.3lf\n", area_square);
    printf("RETANGULO: %.3lf\n", area_rectangle);
    return 0;
}
