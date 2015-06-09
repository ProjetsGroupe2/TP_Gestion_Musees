#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "GestionDonnes.h"
#include "Affichage.h"
#include "Gestion.h"
#include "Sauvegarde.h"
#include "OuvertureFichier.h"
#include "Region.h"
#include "Departement.h"

void main()

{
	Region* tabRegions = NULL;
	Departement* tabDepartement = NULL;
	int nbRegion = 0;
	int nbDepartement = 0;
	char nomregion = " ";
	int choix = -1;

	ouvertureFichier(&tabRegions, &tabDepartement, nbRegion, nbDepartement);

	for (int i = 0; i < nbRegion; i++)
	{
		nomregion = &tabRegions[nbRegion];
	}

	

	do
	{
		affichage();
		affichageMenu(&choix);
		switch (choix)
		{
		case 1:
			// MenuGererMusees(&choix);
			break;
		case 2:
			// RechercherMusee(&choix);
			break;
		case 3:
			creationFichier();
			break;
		default:
			break;
		}
	} while (choix != 0);
}

