#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void Color(int couleurDuTexte, int couleurDeFond) // fonction d'affichage de couleurs
{
	HANDLE H = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(H, couleurDeFond * 16 + couleurDuTexte);
}

void Affichage()
{
	{
		Color(0, 0); //Noir, Noir
		printf("\n\n                 ");
	}
	{
		Color(1, 1); //Bleu
		printf("                                           \n");
	}
	{
		Color(0, 0); //Noir, Noir
		printf("                 ");
	}
	{
		Color(1, 1); //Bleu
		printf("                                           \n");
	}
	{
		Color(0, 0); //Noir, Noir
		printf("                 ");
	}
	{
		Color(0, 15); //Bleu
		printf("          Bibliotheques de France          \n");
	}
	{
		Color(0, 0); //Noir, Noir
		printf("                 ");
	}
	{
		Color(1, 12); //Bleu
		printf("                                           \n");
	}
	{
		Color(0, 0); //Noir, Noir
		printf("                 ");
	}
	{
		Color(1, 12); //Bleu
		printf("                                           \n");
	}
}