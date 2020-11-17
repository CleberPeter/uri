#include <stdio.h>

int main()
{
    int init, end;

    scanf("%d %d", &init, &end);

    int time = 0;

    if (end > init) time = end-init;
    else time = 24 - init + end;

    printf("O JOGO DUROU %d HORA(S)\n", time);
    return 0;
}
