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
	printf("               Mus%lces de France            \n", 130);
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

void affichageMenu()
{
	int choix = 0;

	printf("                             COPYRIGHT © FRANCE                          \n\n");
	printf("\n                  1 .     Menu Principal                          \n");
	printf("                  2 .     G%lcrer les Mus%lces                          \n", 130, 130); //Ajouter "%lc" a la place du "é" puis ajouter en fin de phrase "130" pour un accent donc si deux accents mettre comme cela "130, 130".
	printf("                  3 .     Rechercher les Mus%lces                          \n", 130);
	printf("                  4 .     Sauvegarder                          \n");
	printf("                  5 .     Quitter                          \n\n");
	printf("			  Entrer le num%lcro du menu que vous avez choisie : ", 130);
	scanf("%d", &choix);

	switch (choix)
	{
	case 1:
		printf("Menu Principal");
		system("cls");
		affichage();
		affichageMenu();
		printf("                             COPYRIGHT © FRANCE                          \n\n");
		break;
	case 2:
		printf("G%lcrer les Mus%lces", 130, 130);
		system("cls");
		affichage();
		affichageMenu();
		printf("                             COPYRIGHT © FRANCE                          \n\n");
		break;
	case 3:
		printf("Sauvegarder", 130, 130);
		system("cls");
		affichage();
		affichageMenu();
		printf("                             COPYRIGHT © FRANCE                          \n\n");
		break;
	case 4:
		printf("G%lcrer les Mus%lces", 130, 130);
		system("cls");
		affichage();
		printf("                             COPYRIGHT © FRANCE                          \n\n");
		printf(" TU N'AS PLUS QU'A METTRE TON CODE");
		break;

	case 5:
		printf("Vous avez choisie de quitter l'application");
		return 0;
	}
}



