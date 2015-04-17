#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void Color(int couleurDuTexte, int couleurDeFond) // fonction d'affichage de couleurs
{
	HANDLE H = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(H, couleurDeFond * 16 + couleurDuTexte);
}

void affichage()
{
	Color(0, 0); //Noir, Noir
	printf("\n\n                 ");
	Color(1, 1); //Bleu, Bleu
	printf("                                           \n");
	Color(0, 0); //Noir, Noir
	printf("                 ");
	Color(1, 1); //Noir, Bleu
	printf("                                           \n");
	Color(0, 0); //Noir, Noir
	printf("                 ");
	Color(0, 15); //Noir, Bleu
	printf("          Bibliotheques de France          \n");
	Color(0, 0); //Noir, Noir
	printf("                 ");
	Color(1, 12); //Noir, Bleu
	printf("                                           \n");
	Color(0, 0); //Noir, Noir
	printf("                 ");
	Color(1, 12); //Noir, Bleu
	printf("                                           \n\n");
	Color(15, 0); //Noir, Noir
	printf("\n\n      ( Appuyez sur une touche pour pouvoir passer au menu principal. )");
}

void affichageMenu()
{
	int choix = 0;

	printf("                             COPYRIGHT � FRANCE                          \n\n");
	printf("\n                  1.     Menu Principal                          \n");
	printf("                  2.     Gerer des Mus�es                          \n");
	printf("                  3.     Rechercher des Mus�es                          \n");
	printf("                  4.     Sauvegarder                          \n");
	scanf("%d", &choix);

	switch (choix)
	{
	case 1:
		printf("Rouge");
		break;
	case 2:
		printf("Vert");
		break;
	case 3:
		printf("Bleu");
		break;
	case 4:
		printf("Blanc");
		break;

	default:
		printf("Quitter");
		break;
	}
}

void iconeAffichage()
{
	system("cls");
	Color(0, 0); //Noir, Noir
	printf("\n\n                 ");
	Color(1, 1); //Bleu, Bleu
	printf("                                           \n");
	Color(0, 0); //Noir, Noir
	printf("                 ");
	Color(1, 1); //Noir, Bleu
	printf("                                           \n");
	Color(0, 0); //Noir, Noir
	printf("                 ");
	Color(0, 15); //Noir, Bleu
	printf("          Bibliotheques de France          \n");
	Color(0, 0); //Noir, Noir
	printf("                 ");
	Color(1, 12); //Noir, Bleu
	printf("                                           \n");
	Color(0, 0); //Noir, Noir
	printf("                 ");
	Color(1, 12); //Noir, Bleu
	printf("                                           \n\n");
	Color(15, 0); //Noir, Noir
}


