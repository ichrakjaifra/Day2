#include <stdio.h>

int main() {
    int n; 
    printf("Entrez le nombre d'éléments du tableau : ");
    scanf("%d", &n);

    int tableau[n]; 
    printf("Entrez les éléments du tableau :\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &tableau[i]);
    }

    
    printf("Éléments pairs du tableau :\n");
    for (int i = 0; i < n; i++) {
        if (tableau[i] % 2 == 0) {
            printf("%d ", tableau[i]);
        }
    }
    printf("\n");

    return 0;
}