#include <stdio.h>

int main() {
    int nombre;
    printf("Entrez un nombre : ");
    scanf("%d", &nombre);

    int somme = 0;
    printf("Table de multiplication de %d :\n", nombre);
    for (int i = 1; i <= 10; i++) {
        int produit = nombre * i;
        printf("%d x %d = %d\n", nombre, i, produit);
        somme += produit;
    }

    printf("Somme des produits : %d\n", somme);

    return 0;
}