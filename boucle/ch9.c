#include <stdio.h>

int main() {
    double base;
    int exposant;

    printf("Entrez la base (positive) : ");
    scanf("%lf", &base);

    printf("Entrez l'exposant (non négatif) : ");
    scanf("%d", &exposant);

    double resultat = 1.0;

    int i = 0;
    while (i < exposant) {
        resultat *= base;
        i++;
    }

    printf("%.2f élevé à la puissance %d est %.2f\n", base, exposant, resultat);

    return 0;
}