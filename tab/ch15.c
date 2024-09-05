#include <stdio.h>

int main() {
    int n1, n2; 
    printf("Entrez le nombre d'éléments du premier tableau : ");
    scanf("%d", &n1);
    printf("Entrez le nombre d'éléments du deuxième tableau : ");
    scanf("%d", &n2);

    int tableau1[n1], tableau2[n2]; 
    printf("Entrez les éléments du premier tableau :\n");
    for (int i = 0; i < n1; i++) {
        scanf("%d", &tableau1[i]);
    }
    printf("Entrez les éléments du deuxième tableau :\n");
    for (int i = 0; i < n2; i++) {
        scanf("%d", &tableau2[i]);
    }

    int tabfus[n1 + n2]; 
    
    for (int i = 0; i < n1; i++) {
        tabfus[i] = tableau1[i];
    }
    
    for (int i = 0; i < n2; i++) {
        tabfus[n1 + i] = tableau2[i];
    }

    
    printf("Tableau fusionné :\n");
    for (int i = 0; i < n1 + n2; i++) {
        printf("%d ", tabfus[i]);
    }
    printf("\n");

    return 0;
}