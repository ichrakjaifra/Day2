#include <stdio.h>

int minimum(int a, int b) {
    return (a < b) ? a : b;
}

int main() {
    int n1, n2;
    printf("Entrez deux nombres : ");
    scanf("%d %d", &n1, &n2);
    printf("Le minimum entre %d et %d est %d\n", n1, n2, minimum(n1, n2));
    return 0;
}
