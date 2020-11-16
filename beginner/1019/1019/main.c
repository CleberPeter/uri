#include <stdio.h>

int main()
{
    int sec, hour, minute;

    scanf("%d", &sec);

    hour = sec/3600;
    sec = sec - hour*3600;

    minute = sec/60;
    sec = sec - minute*60;

    printf("%d:%d:%d\n", hour, minute, sec);
    return 0;
}
