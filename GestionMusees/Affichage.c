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
	int choix = -1;

	printf("choix 1\n");
	printf("choix 2\n");
	printf("choix 0 Quitter\n");

	do
	{
		scanf("%d", &choix);

		switch (choix)
		{
		case 1:
			printf("choix 1\n");
			break;
		case 2 : 
			printf("choix 2\n");
			break;
		}
	} while (choix != 0 );

	/*menu de recherche de mus�s par rapport � la R�gion, le D�partement ou la ville (voir horaires d'ouverture mais je pense que �a va �tre compiqu�) 
	donc faire le menu avec un choix pour chaque possibilit�s 
	puis 3 autres menus avec chaqun un titre et un scanf pour rentrer une chaine de caract�re
	Une fois que ce sera fait je m'occuperais de la fonction de recherche :)
*/
}
// /!\ NE BUTTER PAS SUR LES FONCTIONS QUI SONT A FAIRE LAISSEZ SIMPLEMENT DES COMMENTAIRES A LA PLACE SAUF SI VOUS PENSEZ POUVOIR LES FAIRE /!\


//-------------------------------------------------------------------------------------------------------------------------------------------------------


// Fonction dans le fichier affichage2.c et .h pour �viter les conflits sur github /!\ A REMETTERE DANS AFFICHAGE.C et .H /!\ 
//void  MenuGererMusees()
//{
//	/*menu de gestion des mus�es : Ajouter, modifier ou supprimer un mus�
//	Il faut donc pour �a un menu avec le titre "gestion de mus�s" avec un choix pour les sous parties
//	Pour la fonction ajouter il y a chaque champs � renseigner : Nom du mus�, adresse du mus�, ville du mus�, D�partement du mus� et la r�gion du mus�
//	Pour la modif : un scanf pour saisir l'identifiant du mus� � modifier + un affichage pour modifier chaque champs � modifier -> Nom , adresse, ville, D�partement et la r�gion...
//	et pour la suppression un titre plus l'affichage d'une liste des mus�s et un scanf pour 
//
//*/
//}
