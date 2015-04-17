#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "GestionDonnes.h"
#include "Affichage.h"

void main()

{
	Affichage();
	system("pause>nul");

	int choix = 0;
	do
	{
		system("cls");
		printf(" 1er - Menu Principal ");
		printf(" 2eme - Gerer des Musées ");
		printf(" 3eme - Rechercher des Musées ");
		printf(" 4eme - Sauvegarder ");
		scanf("%d", &choix);

		int choix = 0;
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
		}
	} while (choix != 0);
		system("pause>nul");
		return 0;
	}

