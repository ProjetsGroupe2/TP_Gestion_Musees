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
	printf("                                           \n");
	Color(15, 0); //Noir, Noir
}

void affichageMenu()
{
	int choix = 0;
	
		system("cls");
		printf(" 1er - Menu Principal \n");
		printf(" 2eme - Gerer des Mus�es \n");
		printf(" 3eme - Rechercher des Mus�es \n");
		printf(" 4eme - Sauvegarder \n");
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
	
	system("pause>nul");
	return 0;
}