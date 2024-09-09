#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int longueur;
    printf("Entrez la longueur du mot de passe : ");
    scanf("%d", &longueur);

    // Initialisation de la graine pour la génération aléatoire
    srand(time(NULL));

    // Génération du mot de passe
    printf("Mot de passe : ");
    for (int i = 0; i < longueur; i++) {
        int type = rand() % 3;

        if (type == 0) { // Lettre minuscule
            printf("%c", 'a' + (rand() % 26));
        } else if (type == 1) { // Lettre majuscule
            printf("%c", 'A' + (rand() % 26));
        } else { // Chiffre
            printf("%c", '0' + (rand() % 10));
        }
    }
    printf("\n");

    return 0;
}