#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
	


		/*menu de gestion des mus�es : Ajouter, modifier ou supprimer un mus�e
		Il faut donc pour �a un menu avec le titre "gestion de mus�es" avec un choix pour les sous parties
		Pour la fonction ajouter il y a chaque champs � renseigner : Nom du mus�e, adresse du mus�e, ville du mus�e, D�partement du mus�e et la r�gion du mus�e
		Pour la modif : un scanf pour saisir l'identifiant du mus�e � modifier + un affichage pour modifier chaque champs � modifier -> Nom , adresse, ville, D�partement et la r�gion...
		et pour la suppression un titre plus l'affichage d'une liste des mus�s et un scanf pour r�cup�rer l'id du mus� � supprimer

		NE BUTTER PAS SUR LES FONCTIONS QUI SONT A FAIRE LAISSEZ SIMPLEMENT DES COMMENTAIRES A LA PLACE SAUF SI VOUS PENSEZ POUVOIR LES FAIRE */



void AjouterMusee()
{
	system("cls");
	petitaffichage();
	int nom = -1;
	do

	{
		printf("                             COPYRIGHT � FRANCE                          \n\n");
		printf("                  1 .     Saisir le nom du mus%lcee \n",130); //Ajouter "%lc" a la place du "�" puis ajouter en fin de phrase "130" pour un accent donc si deux accents mettre comme cela "130, 130".
		printf("                  0 .     Retour menu pr%lcc%lcdent \n\n\n",130 ,130);
		printf("				  Nom du mus%lcee :", 130);
		
		scanf("%d", &nom);

		switch (nom)
		{
		case 1:
			AjouterMusee();
			break;
		case 0:
		MenuGererMusees()
		break;
		}
	}while (nom != 0);
}
	
	
	
	Affichage();
	int adresse;
	{
		printf("                             COPYRIGHT � FRANCE                          \n\n");
		printf("				Saisir l'adresse :										   \n");
		scanf("%d", &adresse);
	}

	Affichage();
	int ville;
	{
		printf("                             COPYRIGHT � FRANCE                          \n\n");
		printf("				Saisir la ville :										   \n");
		scanf("%d", &ville);
	}

	Affichage();
	int departement;
	{
		printf("                             COPYRIGHT � FRANCE                          \n\n");
		printf("				Saisir le d%lpartement :								   \n", 130);
		scanf("%d", &departement);
	}

	Affichage();
	int region;
	{
		printf("                             COPYRIGHT � FRANCE                          \n\n");
		printf("				Saisir la r%lcgion :									   \n", 130);
		scanf("%d", &region);
	}
}

void ModifierMusee()
{
	system("cls");
	petitaffichage();
	int saisie = -1;
	do
	
	printf("                             COPYRIGHT � FRANCE                          \n\n");
	printf("                  1 .     Modifier le nom du mus%lcee \n", 130); //Ajouter "%lc" a la place du "�" puis ajouter en fin de phrase "130" pour un accent donc si deux accents mettre comme cela "130, 130".
	printf("				  2 .     Modifier la ville du mus%lcee \n", 130);
	printf("                  3 .     Modifier le ds%lcpartement du mus%lcee \n", 130 , 130);
	printf("                  4 .     Modifier la rs%lcgion du mus%lcee \n", 130, 130);
	printf("                  0 .     Retour menu pr%lcc%lcdent \n\n\n", 130, 130);
	printf("				  Nom du mus%lcee :", 130);

	scanf("%d", &saisie);

	switch (saisie)
		{
		case 1:
			ModifierMusee();
			break;
		case 0:
			MenuGererMusees()
			break;
		}
	}while (nom != 0);
}
	
	

	Affichage();
	int modifnom;
	{
		printf("                             COPYRIGHT � FRANCE                          \n\n");
		printf("				Saisir le nouveau nom :									   \n");
		scanf("%d", &modifnom);

	}

	Affichage();
	int modifadresse;
	{
		printf("                             COPYRIGHT � FRANCE                          \n\n");
		printf("				Saisir la nouvelle adresse :							   \n");
		scanf("%d", &modifadresse);
	}

	Affichage();
	int modifville;
	{
		printf("                             COPYRIGHT � FRANCE                          \n\n");
		printf("				Saisir la nouvelle ville :								   \n");
		scanf("%d", &modifville);
	}

	Affichage();
	int modifdep;
	{
		printf("                             COPYRIGHT � FRANCE                          \n\n");
		printf("				Saisir le nouveau d%lpartement :					       \n", 130);
		scanf("%d", &modifdep);
	}

	Affichage();
	int modifregion;
	{
		printf("                             COPYRIGHT � FRANCE                          \n\n");
		printf("				Saisir la nouvelle r%lcgion :							   \n", 130);
		scanf("%d", &modifregion);
	}
}



void SupprimerMusee()
{
	Affichage();
	int suppr;
	{
		printf("                             COPYRIGHT � FRANCE                          \n\n");
		printf("				Saisir l'identifiant du mus%lce :						   \n", 130);
		scanf("%d", &suppr);
	}
	}

void SupprimerMusee()
{
	system("cls");
	petitaffichage();
	int suppr = -1;
	do

	printf("                             COPYRIGHT � FRANCE                          \n\n");
	printf("                  1 .     Supprimer un mus%lcee \n", 130); //Ajouter "%lc" a la place du "�" puis ajouter en fin de phrase "130" pour un accent donc si deux accents mettre comme cela "130, 130".
	printf("                  0 .     Retour menu pr%lcc%lcdent \n\n\n", 130, 130);
	printf("				  Nom du mus%lcee :", 130);

	scanf("%d", &suppr);

	switch (suppr)
		{
		case 1:
			SupprimerMusee();
			break;
		case 0:
			MenuGererMusees()
			break;
		}
	}while (nom != 0);
}
