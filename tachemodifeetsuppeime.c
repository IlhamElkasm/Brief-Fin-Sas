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

void modifier()
{
	int i;
	printf("enter le nom de tache modifier: ");
    scanf(" %[^\n]s", nom2);
	for(i=0; i<taille;i++)
	{
		if(!strcmp(tache[i].nom , nom2))
		{
			printf("le nom est : ");
            scanf(" %[^\n]s", tache[i].nom);
		    printf("La description est : ");
            scanf(" %[^\n]s", tache[i].description);
            printf("La priorite est : ");
            scanf(" %d", &tache[i].priorite);
            printf("entrer la date d' echeance sous forme 02/02/2002 :");
            scanf("%d/%d/%d", &tache[i].date.jour,
                          &tache[i].date.mois,
                          &tache[i].date.annee);
			printf("tache de nom  %s modifier avec success \n",nom2); 
		}
		else
		  printf("erreur\n");
	}
}

void supprimer() {
    int i;
    
    printf("Entrer le nom de la tache a supprimer: ");
    scanf(" %[^\n]s", nom2);

    // Recherche de l'index de la tâche 
    for (i = 0; i < taille; i++) {
        if (!strcmp(tache[i].nom , nom2)) {
                tache[i] = tache[i + 1];
            }
            taille--;
            printf("Tache supprimee avec succes.\n");
            return;
    }
    printf("Erreur : Aucune tache trouvee avec cet nom.\n");
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
//                printf("Ajouter :\n");
//                ajouter();
//                break;
            case 2:
            	//Afficher
//                printf("Afficher :\n");
//                afficher(); 
//                break;
            case 3:
                //modifier();
                printf("Modifier :\n");
                modifier();
                break;
            case 4:
            	//supprimer
               printf("supprimer :\n");
               supprimer();
                break;
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
