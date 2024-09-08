#include <stdio.h>

int maximum(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    int n1, n2;
    printf("Entrez deux nombres : ");
    scanf("%d %d", &n1, &n2);
    
    printf("Le maximum entre %d et %d est %d\n", n1, n2, maximum(n1, n2));
    return 0;
}
