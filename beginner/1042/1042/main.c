#include <stdio.h>

int main()
{
    int a, b, c;
    int i, j;
    int arr[3];

    scanf("%d %d %d", &a, &b, &c);
    arr[0] = a;
    arr[1] = b;
    arr[2] = c;

    for (i = 0; i < 2; i++)
    {
        for (j = i+1; j < 3; j++)
        {
            if (arr[j] < arr[i])
            {
                int dummy = arr[j];
                arr[j] = arr[i];
                arr[i] = dummy;
            }
        }
    }

    printf("%d\n", arr[0]);
    printf("%d\n", arr[1]);
    printf("%d\n", arr[2]);

    printf("\n");

    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d\n", c);
    return 0;
}
