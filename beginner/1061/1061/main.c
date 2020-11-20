#include <stdio.h>

int main()
{
    int i_day;
    int i_hour, i_minute, i_second;

    int e_day;
    int e_hour, e_minute, e_second;

    scanf("Dia %d", &i_day);
    scanf("%02d : %02d : %02d", &i_hour, &i_minute, &i_second);

    scanf("Dia %d", &e_day);
    scanf("%02d : %02d : %02d", &e_hour, &e_minute, &e_second);

    int it_second = i_day*24*60*60 + i_hour*24*60 + i_minute*60 + i_second;
    int et_second = e_day*24*60*60 + e_hour*24*60 + e_minute*60 + e_second;

    int dt_second = et_second - it_second;

    int dt_day = dt_second/(24*60*60);
    dt_second -= dt_day*24*60*60;

    int dt_hour = dt_second/(60*60);
    dt_second -= dt_hour*60*60;

    int dt_minute = dt_second/(60);
    dt_second -= dt_minute*60;


    printf("%d dia(s)\n", dt_day);
    printf("%d hora(s)\n", dt_hour);
    printf("%d minuto(s)\n", dt_minute);
    printf("%d segundo(s)\n", dt_second);


    return 0;
}
