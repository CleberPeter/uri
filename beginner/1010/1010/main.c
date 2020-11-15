#include <stdio.h>

int main()
{
    int code_1, units_1;
    double price_1;

    int code_2, units_2;
    double price_2;

    scanf("%d %d %lf", &code_1, &units_1, &price_1);
    scanf("%d %d %lf", &code_2, &units_2, &price_2);

    double total = units_1*price_1 + units_2*price_2;
    printf("VALOR A PAGAR: R$ %.2lf\n", total);

    return 0;
}
