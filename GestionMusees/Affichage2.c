//#include <stdio.h>
//#include <stdlib.h>
//#include <windows.h>
//	
//
//
//		/*menu de gestion des musées : Ajouter, modifier ou supprimer un musée
//		Il faut donc pour ça un menu avec le titre "gestion de musées" avec un choix pour les sous parties
//		Pour la fonction ajouter il y a chaque champs à renseigner : Nom du musée, adresse du musée, ville du musée, Département du musée et la région du musée
//		Pour la modif : un scanf pour saisir l'identifiant du musée à modifier + un affichage pour modifier chaque champs à modifier -> Nom , adresse, ville, Département et la région...
//		et pour la suppression un titre plus l'affichage d'une liste des musés et un scanf pour récupérer l'id du musé à supprimer
//
//		NE BUTTER PAS SUR LES FONCTIONS QUI SONT A FAIRE LAISSEZ SIMPLEMENT DES COMMENTAIRES A LA PLACE SAUF SI VOUS PENSEZ POUVOIR LES FAIRE */
//
//
//
//void AjouterMusee()
//{
//	system("cls");
//	petitaffichage();
//	int nom = -1;
//	do
//
//	{
//		printf("                             COPYRIGHT © FRANCE                          \n\n");
//		printf("                  1 .     Saisir le nom du mus%lcee \n",130); //Ajouter "%lc" a la place du "é" puis ajouter en fin de phrase "130" pour un accent donc si deux accents mettre comme cela "130, 130".
//		printf("                  0 .     Retour menu pr%lcc%lcdent \n\n\n",130 ,130);
//		printf("				  Nom du mus%lcee :", 130);
//		
//		scanf("%d", &nom);
//
//		switch (nom)
//		{
//		case 1:
//			AjouterMusee();
//			break;
//		case 0:
//			MenuGererMusees();
//		break;
//		}
//	}while (nom != 0);
//}
//	
//	
//	
//	AffichageAdresse()
//	{
//		int adresse = 0;
//		printf("                             COPYRIGHT © FRANCE                          \n\n");
//		printf("				Saisir l'adresse :										   \n");
//		scanf("%d", &adresse);
//	}
//
//	AffichageVille()
//	{
//		int ville = 0;
//		printf("                             COPYRIGHT © FRANCE                          \n\n");
//		printf("				Saisir la ville :										   \n");
//		scanf("%d", &ville);
//	}
//
//	AffichageDepartement()
//	{
//		int departement;
//		printf("                             COPYRIGHT © FRANCE                          \n\n");
//		printf("				Saisir le d%lpartement :								   \n", 130);
//		scanf("%d", &departement);
//	}
//
//	AffichageRegion()
//	{
//		int region;
//		printf("                             COPYRIGHT © FRANCE                          \n\n");
//		printf("				Saisir la r%lcgion :									   \n", 130);
//		scanf("%d", &region);
//	}
//
//
//void ModifierMusee()
//{
//	system("cls");
//	petitaffichage();
//	int nom = -1;
//	do
//	{
//	printf("                             COPYRIGHT © FRANCE                          \n\n");
//	printf("                  1 .     Modifier le nom du mus%lcee \n", 130); //Ajouter "%lc" a la place du "é" puis ajouter en fin de phrase "130" pour un accent donc si deux accents mettre comme cela "130, 130".
//	printf("				  2 .     Modifier la ville du mus%lcee \n", 130);
//	printf("                  3 .     Modifier le ds%lcpartement du mus%lcee \n", 130 , 130);
//	printf("                  4 .     Modifier la rs%lcgion du mus%lcee \n", 130, 130);
//	printf("                  0 .     Retour menu pr%lcc%lcdent \n\n\n", 130, 130);
//	printf("				  Nom du mus%lcee :", 130);
//
//	scanf("%d", &saisie);
//
//	switch (saisie)
//		{
//		case 1:
//			ModifierMusee();
//			break;
//		case 0:
//			MenuGererMusees();
//			break;
//		}
//	}while (nom != 0);
//}
//	
//	
//
//	AffichageNom()
//	
//	{
//		int modifnom;
//		printf("                             COPYRIGHT © FRANCE                          \n\n");
//		printf("				Saisir le nouveau nom :									   \n");
//		scanf("%d", &modifnom);
//
//	}
//
//	Affichage()
//	{
//		int modifadresse;
//		printf("                             COPYRIGHT © FRANCE                          \n\n");
//		printf("				Saisir la nouvelle adresse :							   \n");
//		scanf("%d", &modifadresse);
//	}
//
//	Affichage()
//	{
//		int modifville;
//		printf("                             COPYRIGHT © FRANCE                          \n\n");
//		printf("				Saisir la nouvelle ville :								   \n");
//		scanf("%d", &modifville);
//	}
//
//	Affichage();
//	int modifdep;
//	{
//		printf("                             COPYRIGHT © FRANCE                          \n\n");
//		printf("				Saisir le nouveau d%lpartement :					       \n", 130);
//		scanf("%d", &modifdep);
//	}
//
//	Affichage();
//	int modifregion;
//	{
//		printf("                             COPYRIGHT © FRANCE                          \n\n");
//		printf("				Saisir la nouvelle r%lcgion :							   \n", 130);
//		scanf("%d", &modifregion);
//	}
//}
//
//
//
//void SupprimerMusee()
//{
//	Affichage();
//	int suppr;
//	{
//		printf("                             COPYRIGHT © FRANCE                          \n\n");
//		printf("				Saisir l'identifiant du mus%lce :						   \n", 130);
//		scanf("%d", &suppr);
//	}
//	}
//
//void SupprimerMusee()
//{
//	system("cls");
//	petitaffichage();
//	int suppr = -1;
//	do
//	{
//	printf("                             COPYRIGHT © FRANCE                          \n\n");
//	printf("                  1 .     Supprimer un mus%lcee \n", 130); //Ajouter "%lc" a la place du "é" puis ajouter en fin de phrase "130" pour un accent donc si deux accents mettre comme cela "130, 130".
//	printf("                  0 .     Retour menu pr%lcc%lcdent \n\n\n", 130, 130);
//	printf("				  Nom du mus%lcee :", 130);
//
//	scanf("%d", &suppr);
//
//	switch (suppr)
//		{
//		case 1:
//			SupprimerMusee();
//			break;
//		case 0:
//			MenuGererMusees();
//			break;
//		}
//	}while (nom != 0);
//}
