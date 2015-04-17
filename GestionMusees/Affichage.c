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
