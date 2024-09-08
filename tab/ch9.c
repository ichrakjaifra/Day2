#include <stdio.h>


void inverserTableau(int tableau[], int taille) {
    int temp;
    for (int i = 0; i < taille / 2; i++) {
        temp = tableau[i];
        tableau[i] = tableau[taille - i - 1];
        tableau[taille - i - 1] = temp;
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

    int tableau[taille];
    printf("Entrez les éléments du tableau :\n");
    for (int i = 0; i < taille; i++) {
        scanf("%d", &tableau[i]);
    }

    printf("Tableau original :\n");
    afficherTableau(tableau, taille);

    inverserTableau(tableau, taille);

    printf("Tableau inversé :\n");
    afficherTableau(tableau, taille);

    return 0;
}
