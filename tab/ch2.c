#include <stdio.h>

int main() {
    int n;

    
    printf("Veuillez saisir la taille tab:");
    scanf("%d", &n);

    int tab[n]; 

    
    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &tab[i]);
    }

    
    printf("les elements dans tableaux:\n");
    for (int i = 0; i < n; i++) {
        printf("%d\n", tab[i]);
    }

    return 0;
}