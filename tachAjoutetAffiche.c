#include <stdio.h>
#include<string.h>
#define taille_max 100
#define taille_description 100

 // Initialiser la taille à 0
int taille = 0;
char nom2[40];

struct Date {
    int jour;
    int mois;
    int annee;
};

typedef struct {
	char nom[40];
    char description[20];
    int priorite;
    struct Date date;
} Tache;

Tache tache[300];

void ajouter() {
	// Vérifier que la taille est inférieure à la taille maximale
    if (taille < taille_max) { 
	    printf("le nom est : ");
        scanf(" %[^\n]s", &tache[taille].nom);
        printf("La description est : ");
        scanf(" %[^\n]s", tache[taille].description);
        printf("La priorite est : ");
        scanf(" %d", &tache[taille].priorite);
        printf("entrer la date d' echeance sous forme 02/02/2002 :");
        scanf("%d/%d/%d", &tache[taille].date.jour,
                          &tache[taille].date.mois,
                          &tache[taille].date.annee);
        // Copier la tâche ajoutee dans la tache Afficher
        tache[taille] = tache[taille]; 
        taille++;
    } else {
        printf("La liste des taches est pleine.\n");
    }
}


void afficher() {
    int i;
    for (i = 0; i < taille; i++) { 
	// Utiliser taille au lieu de <=taille
        printf("le nom : %s\n", tache[i].nom);
        printf("La description : %s\n", tache[i].description);
        printf("La priorite : %d\n", tache[i].priorite);
        printf("La date : %d %d %d\n", tache[i].date.jour, tache[i].date.mois, tache[i].date.annee);
    }
}

void menu() {
    int choix;

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
            	//Ajouter
                printf("Ajouter :\n");
                ajouter();
                break;
            case 2:
            	//Afficher
                printf("Afficher :\n");
                afficher(); 
                break;
            case 3:
                //modifier();
//                printf("Modifier :\n");
//                modifier();
//                break;
            case 4:
            	//supprimer
//               printf("supprimer :\n");
//               supprimer();
//                break;
            //case 5:
                //Ordonner();
                //break;
            //case 6:
                //Filtrer();
                //break;
            default:
                printf("Entree invalide!!! \n");
        }
    } while (choix != 6);
}


int main()
{
	menu();
	return 0;
}
