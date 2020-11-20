#include <stdio.h>

int main()
{
    double salary;
    double tax;

    scanf("%lf", &salary);

    if (salary > 2000)
    {
        if (salary <= 3000) tax = (salary - 2000) * 0.08;
        else if (salary > 3000 && salary <= 4500) tax = 1000 * 0.08 + (salary - 3000) * 0.18;
        else if (salary > 4500) tax = 1000 * 0.08 + 1500 * 0.18 + (salary - 4500) * 0.28;

        printf("R$ %.2lf\n", tax);
    }
    else printf("Isento\n");

    return 0;
}
