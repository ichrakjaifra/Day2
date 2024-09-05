#include <stdio.h>

int main() {
    int n; 
    int max = 0; 

    
    printf("Entrez le nombre d'éléments : ");
    scanf("%d", &n);

    int tab[n]; 

    
    for (int i = 0; i < n; i++) {
        printf("Entrez l'élément %d : ", i + 1);
        scanf("%d", &tab[i]);
    }

    
    max = tab[0];

    
    for (int i = 1; i < n; i++) {
        if (tab[i] > max) {
            max = tab[i];
        }
    }

    
    printf("Le plus grand élément est : %d\n", max);

    return 0;
}