#include <stdio.h>
#include <string.h>


char titres[100][50];
char auteurs[100][50];
float prix[100];
int quantites[100];
int nbLivres = 0;

void ajouterLivre() {
    if (nbLivres < 100) {
        printf("Veuillez saisir le titre du livre : ");
        scanf("%s", titres[nbLivres]);
        printf("Veuillez saisir l'auteur du livre : ");
        scanf("%s", auteurs[nbLivres]);
        printf("Veuillez saisir le prix du livre : ");
        scanf("%f", &prix[nbLivres]);
        printf("Veuillez saisir la quantité en stock : ");
        scanf("%d", &quantites[nbLivres]);
        nbLivres++;
        printf("Livre est ajoute\n");
    } else {
        printf("Impossible d'ajouter un nouveau livre\n");
    }
}

void afficherLivres() {
    for (int i = 0; i < nbLivres; i++) {
        printf("Titre: %s\n", titres[i]);
        printf("Auteur: %s\n", auteurs[i]);
        printf("Prix: %.2f\n", prix[i]);
        printf("Quantite : %d\n", quantites[i]);
    }
}

void rechercherLivre() {
    char titreRecherche[50];
    printf("Veuillez saisir le titre du livre à rechercher : ");
    scanf("%s",titreRecherche);
    for (int i = 0; i < nbLivres; i++) {
        if (strcmp(titres[i], titreRecherche) == 0) {
            printf("Livre est trouve\n");
            printf("Titre: %s\n", titres[i]);
            printf("Auteur: %s\n", auteurs[i]);
            printf("Prix: %.2f\n", prix[i]);
            printf("Quantite: %d\n\n", quantites[i]);
            return;
        }
    }
    printf("Livre non trouve\n");
}

void mettreAJourQuantite() {
    char titreRecherche[50];
    int nouvelleQuantite;
    printf("Veuillez saisir le titre du livre à mettre à jour : ");
    scanf("%s", titreRecherche);
    for (int i = 0; i < nbLivres; i++) {
        if (strcmp(titres[i], titreRecherche) == 0) {
            printf("Veuillez saisir la nouvelle quantité : ");
            scanf("%d", &nouvelleQuantite);
            quantites[i] = nouvelleQuantite;
            printf("Quantite mise à jour avec succès !\n");
            return;
        }
    }
    printf("Livre non trouve\n");
}

void supprimerLivre() {
}

void afficherNombreTotalLivres() {
    int total = 0;
    for (int i = 0; i < nbLivres; i++) {
        total += quantites[i];
    }
    printf("Nombre total de livres en stock:%d\n",total);
}



int main() {
    int choix;

    do {
        printf("1. Ajouter un livre\n");
        printf("2. Afficher les livres en stock\n");
        printf("3. Rechercher un livre\n");
        printf("4. Mettre à jour la quantité d'un livre\n");
        printf("5. Supprimer un livre\n");
        printf("6. Afficher le nombre total de livres en stock\n");
        printf("7. Quitter\n");
        printf("Entrez votre choix : ");
        scanf("%d", &choix);
        getchar();  

        switch (choix) {
            case 1:
                ajouterLivre();
                break;
            case 2:
                afficherLivres();
                break;
            case 3:
                rechercherLivre();
                break;
            case 4:
                mettreAJourQuantite();
                break;
            case 5:
                supprimerLivre();
                break;
            case 6:
                afficherNombreTotalLivres();
                break;
            case 7:
                printf("Au revoir !\n");
                break;
            default:
                printf("Choix invalide\n");
        }
    } while (choix!=7);

    return 0;
}
