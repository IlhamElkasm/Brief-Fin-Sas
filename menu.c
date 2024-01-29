#include<stdio.h>

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


