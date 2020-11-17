#include <stdio.h>
#include <math.h>

int main()
{
    double salary;

    scanf("%lf", &salary);

    double readjustment = 0;

    if (salary >= 0 && salary <= 400) readjustment = 1.15;
    else if (salary > 400 && salary <= 800) readjustment = 1.12;
    else if (salary > 800 && salary <= 1200) readjustment = 1.10;
    else if (salary > 1200 && salary <= 2000) readjustment = 1.07;
    else if (salary > 2000) readjustment = 1.04;

    double new_salary = salary*readjustment;

    printf("Novo salario: %.2lf\n", new_salary);
    printf("Reajuste ganho: %.2lf\n", new_salary-salary);
    printf("Em percentual: %d \%\n", (int)round((readjustment-1)*100));

    return 0;
}
