#include <stdio.h>

int main()
{
    int in, n_100, n_50, n_20, n_10, n_5, n_2;

    scanf("%d", &in);
    printf("%d\n", in);

    n_100 = in/100;
    in = in - n_100*100;

    n_50 = in/50;
    in = in - n_50*50;

    n_20 = in/20;
    in = in - n_20*20;

    n_10 = in/10;
    in = in - n_10*10;

    n_5 = in/5;
    in = in - n_5*5;

    n_2 = in/2;
    in = in - n_2*2;


    printf("%d nota(s) de R$ 100,00\n", n_100);

    printf("%d nota(s) de R$ 50,00\n", n_50);

    printf("%d nota(s) de R$ 20,00\n", n_20);

    printf("%d nota(s) de R$ 10,00\n", n_10);

    printf("%d nota(s) de R$ 5,00\n", n_5);

    printf("%d nota(s) de R$ 2,00\n", n_2);

    printf("%d nota(s) de R$ 1,00\n", in);

    return 0;
}
