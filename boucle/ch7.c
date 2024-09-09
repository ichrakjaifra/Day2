#include <stdio.h>

int main() {
    int n;
    printf("Entrez un nombre entier positif : ");
    scanf("%d", &n);

    int a = 0;
    int b = 1;

    printf("Les %d premiers termes de la suite de Fibonacci sont : ", n);
    for (int i = 0; i < n; i++) {
        printf("%d ", a);
        int temp = a;
        a = b;
        b = temp + b;
    }
    
    printf("\n");

    return 0;
}