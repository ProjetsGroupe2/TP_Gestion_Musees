#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

#include "Region.h"
#include "Departement.h"
#include "Ville.h"
#include "Musee.h"

#include "Affichage.h"
#include "Affichage2.h"
#include "Sauvegarde.h"
#include "Comptage.h"
#include "OuvertureFichier.h"
#include "AfficherTableaux.h"
#include "Ajouter.h"



void main()

{
	Region* tabRegions = NULL;
	Departement* tabDepartements = NULL;
	Ville* tabVilles = NULL;
	Musee* tabMusees = NULL;

	int nbRegion = 0;
	int nbDepartement = 0;
	int nbVille = 0;
	int nbMusee = 0;

	// /!\ Y'a plus qu'à mettre les fonction là ou elles doivent se trouver dans l'affichage sauf comptage et OuvertureFichier qui ne bougent pas /!\

	// Fonction pour ajouter un musée à la fin du fichier biblio.csv
	AjouterMusee();

	// Fonction de comptage
	Comptage(&nbRegion, &nbDepartement, &nbVille, &nbMusee);

	// Allocation de la memoire 
	tabRegions = calloc(nbRegion + 1, sizeof(Region));
	tabDepartements = calloc(nbDepartement + 1, sizeof(Departement));
	tabVilles = calloc(nbVille + 1, sizeof(Ville));
	tabMusees = calloc(nbMusee + 1, sizeof(Musee));

	// Fonction d'ouverture du fichier biblio.csv et remplissage des tableaux de structures
	ouvertureFichier(tabRegions, tabDepartements, tabVilles, tabMusees);

	// Fonction d'affichage du tableau de Régions
	AfficherRegion(tabRegions,&nbRegion);

	// Fonction d'affichage du tableau de Départements
	AfficherDepartement(tabDepartements, &nbDepartement);

	// Fonction d'affichage du tableau de Villes
	AfficherVille(tabVilles, &nbVille);
	
	//Fonction d'affichage du tableau de Musées
	AfficherMusee(tabMusees, &nbMusee);

	

	int choix = -1;
	do
	{
		affichage();
		affichageMenu(&choix);
		switch (choix)
		{
		case 1:
			system("cls");
			MenuGererMusees();
			break;
		case 2:
			system("cls");
			MenuRechercherMusee();
			break;
		case 3:
			system("cls");
			/* /!\ Commenté par Martin dans le Main et dans Sauvegerde pour cause de déboggage d'ouverture fichier /!\ */
			//creationFichier();
			break;
		}
	} while (choix != 0);
}

