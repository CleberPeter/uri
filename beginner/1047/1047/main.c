#include <stdio.h>

int main()
{
    int init_h, init_m, end_h, end_m;

    scanf("%d %d %d %d", &init_h, &init_m, &end_h, &end_m);

    int init_sec = init_h*3600 + init_m*60;
    int end_sec = end_h*3600 + end_m*60;

    int time_sec = 0;

    if (end_sec > init_sec) time_sec = end_sec - init_sec;
    else time_sec = 24*3600 - init_sec + end_sec;

    int time_h = time_sec/3600;
    time_sec -= time_h*3600;

    int time_m = time_sec/60;
    time_sec -= time_m*60;

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", time_h, time_m);

    return 0;
}
