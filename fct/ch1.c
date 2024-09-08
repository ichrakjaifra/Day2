#include <stdio.h>

int somme(int a, int b) {
    return a + b;
}

int main() {
    int n1, n2;
    printf("Entrez deux nombres : ");
    scanf("%d %d", &n1, &n2);
    printf("La somme de %d et %d est %d\n", n1, n2, somme(n1, n2));
    return 0;
}
