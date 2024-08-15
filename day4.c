#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void my_swap(int *a, int *b) {
    // b -> int * -> addresse 0x0000000
    // *b -> int -> valeur num 7

    int c = *a;
    *a = *b;
    *b = c;
}

int my_add_4_return(int nb) {
    return nb + 4;
}

void my_add_4_no_return(int *nb) {
    *nb = *nb + 4;
}

    #define randnum(min, max) \
        ((rand() % (int)(((max) + 1) - (min))) + (min))

void my_prep_int_table(int y, int x) {
    int **my_tab_vide;

    srand(time(NULL));

    // allocation du tableau
    my_tab_vide = malloc(sizeof(int *) * y);
    for (int i = 0; i < y; i++) {
        my_tab_vide[i] = malloc(sizeof(int) * x);
    }

    // Tableau 2d en 1d
    int * tab = malloc(sizeof(int) * x * y);

    tab[]

    // remplissage du tableau avec ses valeurs
    for (int i = 0; i < y; i++)
    {
        for (int n = 0; n < x; n++)
        {
            my_tab_vide[i][n] = i + n 
            // randnum(1, 9);
        }
    }

    // affichage du tableau
    for (int i = 0; i < y; i++) {
        for (int n = 0; n < x; n++)
        {
            printf("%d", my_tab_vide[i][n]);
        }
        free(my_tab_vide[i]);
        printf("\n");
    }
    free(my_tab_vide);
}

int main(int ac, char **av) {
    int a = 1;
    int b = 7;

    printf("a: %d, b:%d\n", a, b);
    my_swap(&a, &b);

    int nb = 1;
    nb = my_add_4_return(nb);
    my_add_4_no_return(&nb);

    printf("a: %d, b:%d\n", a, b);

    my_prep_int_table(3, 5);
    return (0);
}