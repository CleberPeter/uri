#include <stdio.h>

int main()
{
    int i;
    int counter = 0;

    for (i = 0; i < 6; i++)
    {
        double val;

        scanf("%lf", &val);

        if (val > 0) counter++;
    }

    printf("%d valores positivos\n", counter);

    return 0;
}
