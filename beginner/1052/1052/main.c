#include <stdio.h>

int main()
{
    int index;
    char mounth[12][12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

    scanf("%d", &index);
    printf("%s\n", mounth[index-1]);


    return 0;
}
