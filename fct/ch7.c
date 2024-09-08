#include <stdio.h>
#include <string.h>

void inverserChaine(char c[]) {
    int longueur = strlen(c);
    for (int i = 0; i < longueur / 2; i++) {
        char temp = c[i];
        c[i] = c[longueur - i - 1];
        c[longueur - i - 1] = temp;
    }
}

int main() {
    char chaine[100];
    printf("Entrez une chaine : ");
    scanf("%s", chaine);
    inverserChaine(chaine);
    printf("La chaîne inversee est : %s\n", chaine);
    return 0;
}
