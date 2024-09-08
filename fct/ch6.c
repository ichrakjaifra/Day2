#include <stdio.h>

int fibonacci(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int n;
    printf("Entrez l'indice de Fibonacci : ");
    scanf("%d", &n);
    
    printf("Le terme %d de Fibonacci est %d\n", n, fibonacci(n));
    return 0;
}
