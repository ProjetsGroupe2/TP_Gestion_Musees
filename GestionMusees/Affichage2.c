#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void  MenuGererMusees()
{
	int choix;

	printf("----Gestion de Mus%lce----\n\n", 130);
	printf("1. Ajouter\n");
	printf("2. Modifier\n");
	printf("3. Supprimer\n");

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
					


		/*menu de gestion des mus�es : Ajouter, modifier ou supprimer un mus�e
		Il faut donc pour �a un menu avec le titre "gestion de mus�es" avec un choix pour les sous parties
		Pour la fonction ajouter il y a chaque champs � renseigner : Nom du mus�e, adresse du mus�e, ville du mus�e, D�partement du mus�e et la r�gion du mus�e
		Pour la modif : un scanf pour saisir l'identifiant du mus�e � modifier + un affichage pour modifier chaque champs � modifier -> Nom , adresse, ville, D�partement et la r�gion...
		et pour la suppression un titre plus l'affichage d'une liste des mus�s et un scanf pour r�cup�rer l'id du mus� � supprimer*/

// /!\ NE BUTTER PAS SUR LES FONCTIONS QUI SONT A FAIRE LAISSEZ SIMPLEMENT DES COMMENTAIRES A LA PLACE SAUF SI VOUS PENSEZ POUVOIR LES FAIRE /!\

void AjouterMusee()
{
	Affichage();
	int nom;
	{
		printf("Saisir le nom :\n");
		scanf("%d", &nom);

	}
	
	Affichage();
	int adresse;
	{
		printf("Saisir l'adresse :\n");
		scanf("%d", &adresse);
	}

	Affichage();
	int ville;
	{
		printf("Saisir la ville :\n");
		scanf("%d", &ville);
	}

	Affichage();
	int departement;
	{
		printf("Saisir le d%lpartement :\n", 130);
		scanf("%d", &departement);
	}

	Affichage();
	int region;
	{
		printf("Saisir la r%lcgion :\n", 130);
		scanf("%d", &region);
	}
}

void ModifierMusee()
{
	Affichage();
	int saisie;
	{
		printf("Saisir l'identifiant du mus%lcee :\n", 130);
		scanf("%d", &saisie);
	}
}

void SupprimerMusee()
{
	Affichage();
	int suppr;
	{
		printf("Saisir l'identifiant du mus%lce :\n", 130);
		scanf("%d", &suppr);
	}
}