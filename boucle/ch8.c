#include <stdio.h>

int main() {
    int tableau[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int taille = 10;

    printf("Tableau : ");
    for (int i = 0; i < taille; i++) {
        printf("%d ", tableau[i]);
    }
    printf("\n");

    int recherche;
    printf("Entrez un nombre à rechercher : ");
    scanf("%d", &recherche);

    int debut = 0;
    int fin = taille - 1;
    int trouve = 0;

    while (debut <= fin) {
        int milieu = (debut + fin) / 2;

        if (tableau[milieu] == recherche) {
            printf("Le nombre %d a été trouve a l'indice %d\n", recherche, milieu);
            trouve = 1;
            break;
        } else if (tableau[milieu] < recherche) {
            debut = milieu + 1;
        } else {
            fin = milieu - 1;
        }
    }

    if (!trouve) {
        printf("Le nombre %d n'a pas été trouvé dans le tableau.\n", recherche);
    }

    return 0;
}