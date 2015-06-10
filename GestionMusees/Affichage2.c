#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void  MenuGererMusees()
{
	int choix;

	printf("        ----Gestion de Mus%lce----\n\n", 130);
	printf("              1. Ajouter          \n");
	printf("              2. Modifier         \n");
	printf("              3. Supprimer        \n");
	printf("              4. Quitter          \n");
	printf("			  Entrer le num%lcro du menu que vous avez choisie : ", 130);
	do
	{
		scanf("%d", &choix);

		switch (choix)
		{
		case 1:
			system("cls");
			AjouterMusee();
			break;
		case 2:
			system("cls");
			ModifierMusee();
			break;
		case 3:
			system("cls");
			SupprimerMusee();
			break;
		}
	} while (choix != 0);
}
					


		/*menu de gestion des musées : Ajouter, modifier ou supprimer un musée
		Il faut donc pour ça un menu avec le titre "gestion de musées" avec un choix pour les sous parties
		Pour la fonction ajouter il y a chaque champs à renseigner : Nom du musée, adresse du musée, ville du musée, Département du musée et la région du musée
		Pour la modif : un scanf pour saisir l'identifiant du musée à modifier + un affichage pour modifier chaque champs à modifier -> Nom , adresse, ville, Département et la région...
		et pour la suppression un titre plus l'affichage d'une liste des musés et un scanf pour récupérer l'id du musé à supprimer*/

// /!\ NE BUTTER PAS SUR LES FONCTIONS QUI SONT A FAIRE LAISSEZ SIMPLEMENT DES COMMENTAIRES A LA PLACE SAUF SI VOUS PENSEZ POUVOIR LES FAIRE /!\

void AjouterMusee()
{
	Affichage();
	int nom;
	{
		printf("                             COPYRIGHT © FRANCE                          \n\n");
		printf("				Saisir le nom :											   \n");
		scanf("%d", &nom);

	}
	
	Affichage();
	int adresse;
	{
		printf("                             COPYRIGHT © FRANCE                          \n\n");
		printf("				Saisir l'adresse :										   \n");
		scanf("%d", &adresse);
	}

	Affichage();
	int ville;
	{
		printf("                             COPYRIGHT © FRANCE                          \n\n");
		printf("				Saisir la ville :										   \n");
		scanf("%d", &ville);
	}

	Affichage();
	int departement;
	{
		printf("                             COPYRIGHT © FRANCE                          \n\n");
		printf("				Saisir le d%lpartement :								   \n", 130);
		scanf("%d", &departement);
	}

	Affichage();
	int region;
	{
		printf("                             COPYRIGHT © FRANCE                          \n\n");
		printf("				Saisir la r%lcgion :									   \n", 130);
		scanf("%d", &region);
	}
}

void ModifierMusee()
{
	Affichage();
	int saisie;
	{
		printf("                             COPYRIGHT © FRANCE                          \n\n");
		printf("				Saisir l'identifiant du mus%lcee :					       \n", 130);
		scanf("%d", &saisie);
	}
	
	Affichage();
	int modifnom;
	{
		printf("                             COPYRIGHT © FRANCE                          \n\n");
		printf("				Saisir le nouveau nom :									   \n");
		scanf("%d", &modifnom);

	}

	Affichage();
	int modifadresse;
	{
		printf("                             COPYRIGHT © FRANCE                          \n\n");
		printf("				Saisir la nouvelle adresse :							   \n");
		scanf("%d", &modifadresse);
	}

	Affichage();
	int modifville;
	{
		printf("                             COPYRIGHT © FRANCE                          \n\n");
		printf("				Saisir la nouvelle ville :								   \n");
		scanf("%d", &modifville);
	}

	Affichage();
	int modifdep;
	{
		printf("                             COPYRIGHT © FRANCE                          \n\n");
		printf("				Saisir le nouveau d%lpartement :					       \n", 130);
		scanf("%d", &modifdep);
	}

	Affichage();
	int modifregion;
	{
		printf("                             COPYRIGHT © FRANCE                          \n\n");
		printf("				Saisir la nouvelle r%lcgion :							   \n", 130);
		scanf("%d", &modifregion);
	}
}



void SupprimerMusee()
{
	Affichage();
	int suppr;
	{
		printf("                             COPYRIGHT © FRANCE                          \n\n");
		printf("				Saisir l'identifiant du mus%lce :						   \n", 130);
		scanf("%d", &suppr);
	}
}