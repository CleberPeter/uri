#include <stdio.h>

int main()
{
    double N1, N2, N3, N4;
    double p1 = 2;
    double p2 = 3;
    double p3 = 4;
    double p4 = 1;

    scanf("%lf %lf %lf %lf", &N1, &N2, &N3, &N4);

    double average = (N1*p1+N2*p2+N3*p3+N4*p4)/(p1+p2+p3+p4);

    printf("Media: %.1lf\n", average);
    if (average >= 7) printf("Aluno aprovado.\n");
    else if (average >= 5)
    {
        printf("Aluno em exame.\n");

        double NExame;
        scanf("%lf", &NExame);

        printf("Nota do exame: %.1lf\n", NExame);

        average = (average+NExame)/2;
        if (average >= 5) printf("Aluno aprovado.\n");
        else printf("Aluno reprovado.\n");

        printf("Media final: %.1lf\n", average);
    }
    else printf("Aluno reprovado.\n");

    return 0;
}
