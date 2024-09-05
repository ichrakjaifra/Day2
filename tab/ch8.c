#include <stdio.h>


void copierTableau(int tab[], int tabC[], int taille) {
    for (int i = 0; i < taille; i++) {
        tabC[i] = tab[i];
    }
}


void afficherTableau(int tableau[], int taille) {
    for (int i = 0; i < taille; i++) {
        printf("%d ", tableau[i]);
    }
    printf("\n");
}

int main() {
    int taille;
    printf("Entrez la taille du tableau : ");
    scanf("%d", &taille);

    int tab[taille];
    printf("Entrez les éléments du tableau original :\n");
    for (int i = 0; i < taille; i++) {
        scanf("%d", &tab[i]);
    }

    int tabC[taille];
    copierTableau(tab, tabC, taille);

    printf("Tableau original :\n");
    afficherTableau(tab, taille);

    printf("Tableau copié :\n");
    afficherTableau(tabC, taille);

    return 0;
}