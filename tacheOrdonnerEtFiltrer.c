#include <stdio.h>
#include <string.h>

int taille = 0;
int i,j;

struct Date {
    int jour;
    int mois;
    int annee;
};

typedef struct {
    char nom[40];
    char description[100];
    int priorite;
    struct Date date;
} Tache;

Tache tache[100];

void OrdonnerCroissant() {
    Tache temp;
    for (i = 0; i < taille - 1; i++) {
        for (j = i + 1; j < taille; j++) {
            if (tache[i].date.annee > tache[j].date.annee ||
                (tache[i].date.annee == tache[j].date.annee &&
                 (tache[i].date.mois > tache[j].date.mois ||
                  (tache[i].date.mois == tache[j].date.mois &&
                   tache[i].date.jour > tache[j].date.jour)))) {
                temp = tache[i];
                tache[i] = tache[j];
                tache[j] = temp;
            }
        }
    }
    afficher();
}

void OrdonnerDecroissant() {
    Tache temp;
    for (i = 0; i < taille - 1; i++) {
        for (j = i + 1; j < taille; j++) {
            if (tache[i].date.annee < tache[j].date.annee ||
                (tache[i].date.annee == tache[j].date.annee &&
                 (tache[i].date.mois < tache[j].date.mois ||
                  (tache[i].date.mois == tache[j].date.mois &&
                   tache[i].date.jour < tache[j].date.jour)))) {
                temp = tache[i];
                tache[i] = tache[j];
                tache[j] = temp;
            }
        }
    }
    afficher();
}

void Filtrer() {
    int priorite2;
    printf("Entrer la priorité de la tache à filtrer: ");
    scanf(" %d", &priorite2);

    for (i = 0; i < taille; i++) {
        if (tache[i].priorite == priorite2) {
            printf("Le nom : %s\n", tache[i].nom);
            printf("La description : %s\n", tache[i].description);
            printf("La priorité : %d\n", tache[i].priorite);
            printf("La date : %d %d %d\n", tache[i].date.jour, tache[i].date.mois, tache[i].date.annee);
            printf("\n");
        }
    }
}

void menu() {
    int choix;
    int ordre;
    do {
        printf(" ***************  MENU *************\n");
        printf(" 1 --------> Ajouter une Tache \n");
        printf(" 2 --------> Afficher la Liste des Taches \n");
        printf(" 3 --------> Modifier une Tache \n");
        printf(" 4 --------> Supprimer une Tache \n");
        printf(" 5 --------> Ordonner les Taches \n");
        printf(" 6 --------> Filtrer les Taches  \n");
        printf("       Choisir une operation : ");
        scanf("%d", &choix);
        switch (choix) {
            case 1:
                printf("Ajouter :\n");
                ajouter();
                break;
            case 2:
                printf("Afficher :\n");
                // Correction ici : appeler la fonction afficher sans paramètres
                afficher(); 
                break;
            case 3:
                //modifier();
                printf("Modifier :\n");
                modifier();
                break;
            case 4:
               printf("supprimer :\n");
               supprimer();
                break;
            case 5:
                //Ordonner();
              printf("Veuillez choisir l'ordre de tri : \n");
              printf("1. Croissant\n");
              printf("2. Decroissant\n");
              scanf("%d", &ordre);
               if (ordre == 1){
                OrdonnerCroissant();
               }else if(ordre == 2){
                OrdonnerDecroissant();
               }else
                printf("invalid choix");
                break;
            case 6:
                //Filtrer();
                printf("Filtrer :\n");
                Filtrer();
                break;
            default:
                printf("Entree invalide!!! \n");
        }
    } while (choix < 7);
}


int main()
{
	menu();
	return 0;
}
