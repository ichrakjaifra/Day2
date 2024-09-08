#include <stdio.h>

int multiplication(int a, int b) {
    return a * b;
}

int main() {
    int n1, n2;
    printf("Entrez deux nombres : ");
    scanf("%d %d", &n1, &n2);
    printf("Le produit de %d et %d est %d\n", n1, n2, multiplication(n1, n2));
    return 0;
}
