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

    int v; 
    printf("Entrez la valeur à remplacer : ");
    scanf("%d", &v);

    int nv; 
    printf("Entrez la nouvelle valeur : ");
    scanf("%d", &nv);

    
    for (int i = 0; i < n; i++) {
        if (tableau[i] == v) {
            tableau[i] = nv;
        }
    }

    
    printf("Tableau modifié :\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", tableau[i]);
    }
    printf("\n");

    return 0;
}