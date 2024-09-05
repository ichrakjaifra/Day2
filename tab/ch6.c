#include <stdio.h>

int main() {
    int n; 
    int f; 

    
    printf("Entrez le nombre d'éléments : ");
    scanf("%d", &n);

    int tab[n]; 

    
    for (int i = 0; i < n; i++) {
        printf("Entrez l'élément %d : ", i + 1);
        scanf("%d", &tab[i]);
    }

    
    printf("Entrez le facteur de multiplication : ");
    scanf("%d", &f);

  
    for (int i = 0; i < n; i++) {
        tab[i] *= f;
    }

    
    printf("Le tableau résultant est : ");
    for (int i = 0; i < n; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");

    return 0;
}