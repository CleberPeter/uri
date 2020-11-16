#include <stdio.h>

int main()
{
    int n_100, n_50, n_20, n_10, n_5, n_2;
    int m_50, m_25, m_10, m_5;
    int in_int, in_int2;
    double in;

    scanf("%lf", &in);

    in_int = (int) in;
    in_int2 = in_int;

    n_100 = in_int/100;
    in_int = in_int - n_100*100;

    n_50 = in_int/50;
    in_int = in_int - n_50*50;

    n_20 = in_int/20;
    in_int = in_int - n_20*20;

    n_10 = in_int/10;
    in_int = in_int - n_10*10;

    n_5 = in_int/5;
    in_int = in_int - n_5*5;

    n_2 = in_int/2;
    in_int = in_int - n_2*2;

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", n_100);
    printf("%d nota(s) de R$ 50.00\n", n_50);
    printf("%d nota(s) de R$ 20.00\n", n_20);
    printf("%d nota(s) de R$ 10.00\n", n_10);
    printf("%d nota(s) de R$ 5.00\n", n_5);
    printf("%d nota(s) de R$ 2.00\n", n_2);

    int in_float = ((int)(in*100)) % 100;

    m_50 = in_float/50;
    in_float = in_float - m_50*50;

    m_25 = in_float/25;
    in_float = in_float - m_25*25;

    m_10 = in_float/10;
    in_float = in_float - m_10*10;

    m_5 = in_float/5;
    in_float = in_float - m_5*5;

    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", in_int);
    printf("%d moeda(s) de R$ 0.50\n", m_50);
    printf("%d moeda(s) de R$ 0.25\n", m_25);
    printf("%d moeda(s) de R$ 0.10\n", m_10);
    printf("%d moeda(s) de R$ 0.05\n", m_5);
    printf("%d moeda(s) de R$ 0.01\n", in_float);

    return 0;
}
