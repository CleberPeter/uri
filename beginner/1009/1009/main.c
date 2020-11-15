#include <stdio.h>

int main()
{
    char* name_seller;
    double salary, sales;

    scanf("%s", &name_seller);
    scanf("%lf", &salary);
    scanf("%lf", &sales);

    printf("TOTAL = R$ %.2lf\n", salary + 0.15*sales);

    return 0;
}
