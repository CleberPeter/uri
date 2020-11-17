#include <stdio.h>

int main()
{
    double a, b, c;

    scanf("%lf %lf %lf", &a, &b, &c);

    if (a + b > c && b + c > a && a + c > b) // it's a triangle ?
    {
        double perimeter = a+b+c;
        printf("Perimetro = %.1lf\n", perimeter);
    }
    else
    {
        double area_trapeze = (a+b)*c/2.0;
        printf("Area = %.1lf\n", area_trapeze);
    }


    return 0;
}
