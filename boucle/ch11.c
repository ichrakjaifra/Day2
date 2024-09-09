#include <stdio.h>

int main() {
    int nombre;
    int somme = 0;
    int compteur = 0;

    printf("Entrez une série de nombres positifs (terminez par 0) : ");

    while (1) {
        scanf("%d", &nombre);

        if (nombre == 0) {
            break;
        }

        somme += nombre;
        compteur++;
    }

    if (compteur == 0) {
        printf("Aucun nombre n'a été saisi.\n");
    } else {
        double moyenne = (double) somme / compteur;
        printf("La moyenne des nombres est : %.2f\n", moyenne);
    }

    return 0;
}