#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "Affichage.h"


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

void affichageMenu(int* choix)
{
	printf("                             COPYRIGHT � FRANCE                          \n\n");
	printf("                  1 .     G%lcrer les Mus%lces                          \n", 130, 130); //Ajouter "%lc" a la place du "�" puis ajouter en fin de phrase "130" pour un accent donc si deux accents mettre comme cela "130, 130".
	printf("                  2 .     Rechercher les Mus%lces                          \n", 130);
	printf("                  3 .     Sauvegarder                          \n");
	printf("                  0 .     Quitter                          \n\n");
	printf("			  Entrer le num%lcro du menu que vous avez choisie : ", 130);

	
	scanf("%d", choix);
}

void MenuRechercherMusee()
{
	affichage();
	int choix = -1;

	{
		printf("                             COPYRIGHT � FRANCE                          \n\n");
		printf("                  1 .     Rechercher par R%lcgion                          \n", 130); //Ajouter "%lc" a la place du "�" puis ajouter en fin de phrase "130" pour un accent donc si deux accents mettre comme cela "130, 130".
		printf("                  2 .     Rechercher par D%lcpartement                          \n", 130);
		printf("                  3 .     Rechercher par Ville                           \n");
		printf("                  0 .     Quitter                          \n\n");
		printf("			  Entrer le num%lcro du menu que vous avez choisie : ", 130);

		scanf("%d", &choix);

		switch (choix)
		{
		case 1:
			system("cls");
			RechercheRegion();
			break;
		case 2:
			system("cls");
			RechercheDepartement();
			break;
		case 3:
			system("cls");
			RechercheVille();
			break;
		}
	} while (choix != 0);
}

void RechercheRegion()
{
	affichage();
	

	{
		printf("                             COPYRIGHT � FRANCE                          \n\n");
		printf("                  1 .     Rechercher les mus%lces par r%lcgion :                          \n", 130); //Ajouter "%lc" a la place du "�" puis ajouter en fin de phrase "130" pour un accent donc si deux accents mettre comme cela "130, 130".
	}
}

void RechercheDepartement()
{
	affichage();

	{
		printf("                             COPYRIGHT � FRANCE                          \n\n");
		printf("                  2 .     Rechercher les mus%lces par d%partement                          \n", 130); //Ajouter "%lc" a la place du "�" puis ajouter en fin de phrase "130" pour un accent donc si deux accents mettre comme cela "130, 130".
		printf("			  Entrer le num%lcro du menu que vous avez choisie : ", 130);
	}
}


void RechercheVille()
{
	affichage();

	{
		printf("                             COPYRIGHT � FRANCE                          \n\n");
		printf("                  3 .     Rechercher les mus%lces par ville                          \n", 130); //Ajouter "%lc" a la place du "�" puis ajouter en fin de phrase "130" pour un accent donc si deux accents mettre comme cela "130, 130".
		printf("			  Entrer le num%lcro du menu que vous avez choisie : ", 130);
	}
}

	/*menu de recherche de mus�es par rapport � la R�gion, le D�partement ou la ville (voir horaires d'ouverture mais je pense que �a va �tre compiqu�) 
	donc faire le menu avec un choix pour chaque possibilit�s 
	puis 3 autres menus avec chaqun un titre et un scanf pour rentrer une chaine de caract�re
	Une fois que ce sera fait je m'occuperais de la fonction de recherche :)
*/

// /!\ NE BUTTER PAS SUR LES FONCTIONS QUI SONT A FAIRE LAISSEZ SIMPLEMENT DES COMMENTAIRES A LA PLACE SAUF SI VOUS PENSEZ POUVOIR LES FAIRE /!\


//-------------------------------------------------------------------------------------------------------------------------------------------------------


// Fonction dans le fichier affichage2.c et .h pour �viter les conflits sur github /!\ A REMETTERE DANS AFFICHAGE.C et .H /!\ 
//void  MenuGererMusees()
//{
//	/*menu de gestion des mus�es : Ajouter, modifier ou supprimer un mus�e
//	Il faut donc pour �a un menu avec le titre "gestion de mus�es" avec un choix pour les sous parties
//	Pour la fonction ajouter il y a chaque champs � renseigner : Nom du mus�e, adresse du mus�e, ville du mus�e, D�partement du mus�e et la r�gion du mus�e
//	Pour la modif : un scanf pour saisir l'identifiant du mus�e � modifier + un affichage pour modifier chaque champs � modifier -> Nom , adresse, ville, D�partement et la r�gion...
//	et pour la suppression un titre plus l'affichage d'une liste des mus�s et un scanf pour 
//
//*/
//}
