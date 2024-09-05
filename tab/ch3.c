#include <stdio.h>

int main() {
    int n; 
    int somme = 0; 

    
    printf("Entrez le nombre d'éléments : ");
    scanf("%d", &n);

    int tab[n]; 

    
    for (int i = 0; i < n; i++) {
        printf("Entrez l'élément %d : ", i + 1);
        scanf("%d", &tab[i]);
    }

    
    for (int i = 0; i < n; i++) {
        somme += tab[i];
    }

  
    printf("La somme des éléments est : %d\n", somme);

    return 0;
}