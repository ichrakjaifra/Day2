#include <stdio.h>

int main() {
    int n;
    printf("Entrez un entier : ");
    scanf("%d", &n);

   printf("Les nombres premiers de 1 à %d sont :\n", n);

    for (int i = 2; i <= n; i++) {
        int estPremier = 1;
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                estPremier = 0;
                break;
            }
        }
        if (estPremier) {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}