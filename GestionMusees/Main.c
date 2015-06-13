#include "Region.h"
#include "Departement.h"
#include "Ville.h"
#include "Musee.h"

#include "Affichage.h"
#include "Affichage2.h"
#include "Sauvegarde.h"
#include "OuvertureFichier.h"
#include "Comptage.h"

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

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
	int i = 0;

	/* /!\ à décommenter avant de commiter /!\ */

	Comptage(&nbRegion, &nbDepartement, &nbVille, &nbMusee);

	tabRegions = calloc(nbRegion, sizeof(Region));
	tabDepartements = calloc(nbDepartement, sizeof(Departement));
	tabVilles = calloc(nbVille, sizeof(Ville));
	tabMusees = calloc(nbMusee, sizeof(Musee));

	/* /!\ à décommenter avant de commiter /!\ */

	ouvertureFichier(tabRegions, tabDepartements, tabVilles, tabMusees, &nbRegion, &nbDepartement, &nbVille, &nbMusee);


	for (i = 0; i < nbRegion; i++)
	{
		printf("%d - %s\n",tabRegions[i].id ,tabRegions[i].nom);
	}
	system("pause");
	

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

