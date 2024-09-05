#include <stdio.h>


void echanger(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}


void trierTableau(int tab[], int taille) {
    for (int i = 0; i < taille - 1; i++) {
        for (int j = i + 1; j < taille; j++) {
            if (tab[i] > tab[j]) {
                echanger(&tab[i], &tab[j]);
            }
        }
    }
}

int main() {
    int taille;
    printf("Entrez la taille du tableau : ");
    scanf("%d", &taille);

    int tab[taille];
    printf("Entrez les éléments du tableau :\n");
    for (int i = 0; i < taille; i++) {
        scanf("%d", &tab[i]);
    }

    trierTableau(tab, taille);

    printf("Tableau trié en ordre croissant :\n");
    for (int i = 0; i < taille; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");

    return 0;
}

