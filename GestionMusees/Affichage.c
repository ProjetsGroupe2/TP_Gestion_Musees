#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

#include "Region.h"
#include "Departement.h"
#include "Ville.h"
#include "Musee.h"

#include "Affichage.h"
#include "Sauvegarde.h"
#include "Comptage.h"
#include "OuvertureFichier.h"
#include "AfficherTableaux.h"
#include "Ajouter.h"
#include "Modifier.h"

void Color(int couleurDuTexte, int couleurDeFond) // fonction d'affichage de couleurs
{
	HANDLE H = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(H, couleurDeFond * 16 + couleurDuTexte);
}

void petitaffichage()
{
	
	Color(1, 1); //Bleu, Bleu
	printf("                 ");
	Color(0, 0); //Noir, Noir
	printf("                                                               ");
	Color(1, 1); //Bleu, Bleu
	printf("                 ");
	Color(0, 0); //Noir, Noir
	printf("                                                               ");
	Color(0, 15); //Blanc, Blanc
	printf("      FRANCE     ");
	Color(0, 0); //Noir, Noir
	printf("                                                               ");
	Color(12, 12); //Rouge, Rouge
	printf("                 ");
	Color(0, 0); //Noir, Noir
	printf("                                                               ");
	Color(12, 12); //Rouge, Rouge
	printf("                 \n\n\n");
	Color(15, 0); //Noir, Noir
	printf("    COPYRIGHT ©    \n\n\n"); 
	Color(15, 0); //Noir, Noir
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

void affichageMenu(int* choix)
{
	system("cls");
	affichage();
	printf("                             COPYRIGHT © FRANCE                         \n\n");
	printf("                  1 .     G%lcrer les Mus%lces                          \n", 130, 130); //Ajouter "%lc" a la place du "é" puis ajouter en fin de phrase "130" pour un accent donc si deux accents mettre comme cela "130, 130".
	printf("                  2 .     Rechercher les Mus%lces                       \n", 130);
	printf("                  3 .     Sauvegarder									\n");
	printf("                  0 .     Quitter										\n\n");
	printf("			  Entrer le num%lcro du menu que vous avez choisie : ", 130);

	
	scanf("%d", choix);
}

void MenuGererMusees(Region * tabRegion, Departement* tabDepartement, Ville* tabVille, Musee* tabMusee, int *nbRegion, int * nbDep, int * nbVille, int * nbMusee)
{
	system("cls");
	petitaffichage();
	int choix = -1;
	do

	{
		printf("                  1 .     Ajouter un Mus%lce                           \n", 130); //Ajouter "%lc" a la place du "é" puis ajouter en fin de phrase "130" pour un accent donc si deux accents mettre comme cela "130, 130".
		printf("                  2 .     Modifier un Mus%lce                          \n", 130);
		printf("                  3 .     Supprimer un Mus%lce                         \n", 130);
		printf("                  0 .     Retour menu pr%lcc%lcdent					   \n\n", 130, 130);
		printf("			  Entrer le num%lcro du menu que vous avez choisie : ", 130);

		scanf("%d", &choix);

		switch (choix)
		{
		case 1:
			AjouterMusee(tabRegion, tabDepartement, tabVille, tabMusee, nbRegion, nbDep, nbVille, nbMusee);
			break;
		case 2:
			Modifier(tabRegion, tabDepartement, tabVille, tabMusee, nbRegion, nbDep, nbVille, nbMusee);
			break;
		case 3:
			Supprimer(tabRegion, tabDepartement, tabVille, tabMusee, nbRegion, nbDep, nbVille, nbMusee);
			break;
		}
	} while (choix != 0);
	system("cls");
	affichage();
}
