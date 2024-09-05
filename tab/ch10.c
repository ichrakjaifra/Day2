#include <stdio.h>

int rechercherElement(int tableau[], int taille, int element) {
    for (int i = 0; i < taille; i++) {
        if (tableau[i] == element) {
            return 1; 
        }
    }
    return 0; 
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

    int element;
    printf("Entrez l'élément à rechercher : ");
    scanf("%d", &element);

    int resultat = rechercherElement(tableau, taille, element);

    if (resultat == 1) {
        printf("L'élément %d est présent dans le tableau.\n", element);
    } else {
        printf("L'élément %d n'est pas présent dans le tableau.\n", element);
    }

    return 0;
}