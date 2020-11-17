#include <stdio.h>

int main()
{
    int code, qty;

    scanf("%d %d", &code, &qty);

    double price = 1;

    switch (code) {
        case 1: price = 4; break;
        case 2: price = 4.5; break;
        case 3: price = 5; break;
        case 4: price = 2; break;
        case 5: price = 1.5; break;
    }

    double total = price * qty;

    printf("Total: R$ %.2lf\n", total);

    return 0;
}
