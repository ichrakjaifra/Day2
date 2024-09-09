#include <stdio.h>

int main() {
    int n;
    printf ("Entrez un entier positif : ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Erreur : la factorielle n'est pas définie pour les entiers négatifs.\n");
        return 1;
    }

    unsigned long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }

    printf("La factorielle de %d est : %llu\n", n, fact);

    return 0;
}