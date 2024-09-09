#include <stdio.h>

int main() {
    // Tableau des jours de la semaine
    char* jours[] = {"Lundi", "Mardi", "Mercredi", "Jeudi", "Vendredi", "Samedi", "Dimanche"};

    // Affichage des jours de la semaine
    printf("Choisissez un jour de la semaine :\n");
    for (int i = 0; i < 7; i++) {
        printf("%d. %s\n", i + 1, jours[i]);
    }

    int choix;
    printf("Entrez le numéro du jour : ");
    scanf("%d", &choix);

    if (choix < 1 || choix > 7) {
        printf("Choix invalide\n");
        return 1;
    }

    // Affichage du jour sélectionné et des jours qui le suivent
    printf("Vous avez choisi : %s\n", jours[choix - 1]);
    printf("Les jours qui suivent sont :\n");
    for (int i = choix; i < 7; i++) {
        printf("%s\n", jours[i]);
    }

    // Affichage des jours qui précèdent le jour sélectionné si nécessaire
    if (choix != 7) {
        printf("Les jours qui précèdent sont :\n");
        for (int i = 0; i < choix - 1; i++) {
            printf("%s\n", jours[i]);
        }
    }

    return 0;
}