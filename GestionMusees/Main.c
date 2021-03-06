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
#include "Recherche.h"

//  +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//  +																		  +
//  +		ATTENTION NE PAS OUBLIER DE FAIRE UNE COPIE DE BILIO.CSV		  +
//  +				CAR IL A ETE ADAPTE POUR LE PROGRAMME !			          +
//  +																		  +
//  +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

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
	int retour = 0;

	// /!\ Y'a plus qu'� mettre les fonction l� ou elles doivent se trouver dans l'affichage sauf Comptage et ouvertureFichier qui ne bougent pas /!\

	
	// Fonction de comptage
	Comptage(&nbRegion, &nbDepartement, &nbVille, &nbMusee);

	// Allocation de la memoire 
	tabRegions = calloc(nbRegion + 1, sizeof(Region));
	tabDepartements = calloc(nbDepartement + 1, sizeof(Departement));
	tabVilles = calloc(nbVille + 1, sizeof(Ville));
	tabMusees = calloc(nbMusee + 1, sizeof(Musee));

	// Fonction d'ouverture du fichier biblio.csv et remplissage des tableaux de structures
	ouvertureFichier(tabRegions, tabDepartements, tabVilles, tabMusees);

	//===============================================================================================================
	//										Fonctions pour test sans affichage									   ==
	//===============================================================================================================

	//// Fonction pour ajouter un mus�e dans les tableau de structures
	//AjouterMusee(tabRegions, tabDepartements, tabVilles, tabMusees, &nbRegion, &nbDepartement, &nbVille, &nbMusee);

	// Fonction pour Modifier un mus�e dans les tableau de structures
	//Modifier(tabRegions, tabDepartements, tabVilles, tabMusees, &nbRegion, &nbDepartement, &nbVille, &nbMusee);

	// Fonction de recherche de regions
	//Rechercher(tabRegions, tabDepartements, tabVilles, tabMusees, &nbRegion, &nbDepartement, &nbVille, &nbMusee);

	//// Fonction d'affichage du tableau de R�gions
	//AfficherRegion(tabRegions,&nbRegion);

	//// Fonction d'affichage du tableau de D�partements
	//AfficherDepartement(tabDepartements, &nbDepartement);

	//// Fonction d'affichage du tableau de Villes
	//AfficherVille(tabVilles, &nbVille);
	
	////Fonction d'affichage du tableau de Mus�es
	//AfficherMusee(tabMusees, &nbMusee);

	////Fontion de suppression 
	//Supprimer(tabRegions, tabDepartements, tabVilles, tabMusees, &nbRegion, &nbDepartement, &nbVille, &nbMusee);
	

	int choix = -1;
	do
	{
		affichage();
		affichageMenu(&choix);
		switch (choix)
		{
		case 1:
			// fonction de gestin de mus�e -------------------------------------------------
			system("cls");
			MenuGererMusees(tabRegions, tabDepartements, tabVilles, tabMusees, &nbRegion, &nbDepartement, &nbVille, &nbMusee);
			break;

		case 2:
			// fonction de recherche -------------------------------------------------------
			system("cls");
			Rechercher(tabRegions, tabDepartements, tabVilles, tabMusees, &nbRegion, &nbDepartement, &nbVille, &nbMusee);
			break;
		case 3:
			// fonction de sauvegarde ------------------------------------------------------
			CreationFichier(tabRegions, tabDepartements, tabVilles, tabMusees, &nbMusee);
			if (CreationFichier(tabRegions, tabDepartements, tabVilles, tabMusees, &nbMusee))
			{
				printf("Enregistrement du fichier effectu%lc avec succ%lcs!\n\n", 130, 138);
				system("pause");
			}
			else
			{
				printf("Erreur lors de l'enregistrement du fichier_\n\n");
				system("pause");
			}
			break;
		}
	} while (choix != 0);
}

