#include <stdio.h>
#include <string.h>

int main()
{
    char type_1[32], type_2[32], type_3[32] ;

    scanf("%s", type_1);
    scanf("%s", type_2);
    scanf("%s", type_3);

    if (!strcmp(type_1, "vertebrado"))
    {
        if (!strcmp(type_2, "ave"))
        {
            if (!strcmp(type_3, "carnivoro")) printf("aguia\n");
            else if (!strcmp(type_3, "onivoro")) printf("pomba\n");
        }
        else if (!strcmp(type_2, "mamifero"))
        {
            if (!strcmp(type_3, "onivoro")) printf("homem\n");
            else if (!strcmp(type_3, "herbivoro")) printf("vaca\n");
        }
    }
    else if (!strcmp(type_1, "invertebrado"))
    {
        if (!strcmp(type_2, "inseto"))
        {
            if (!strcmp(type_3, "hematofago")) printf("pulga\n");
            else if (!strcmp(type_3, "herbivoro")) printf("lagarta\n");
        }
        else if (!strcmp(type_2, "anelideo"))
        {
            if (!strcmp(type_3, "hematofago")) printf("sanguessuga\n");
            else if (!strcmp(type_3, "onivoro")) printf("minhoca\n");
        }
    }

    return 0;
}
