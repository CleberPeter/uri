#include <stdio.h>

int main()
{
    int days, years, mounths;

    scanf("%d", &days);

    years = days/365;
    days = days - years*365;

    mounths = days/30;
    days = days - mounths*30;

    printf("%d ano(s)\n", years);
    printf("%d mes(es)\n", mounths);
    printf("%d dia(s)\n", days);
    return 0;
}
