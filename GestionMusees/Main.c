#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

#include "Affichage.h"
#include "Affichage2.h"
#include "Sauvegarde.h"
#include "OuvertureFichier.h"

#include "Region.h"
#include "Departement.h"
#include "Ville.h"

void main()

{
	Region* tabRegions = NULL;
	Departement* tabDepartement = NULL;
	Ville* tabVille = NULL;
	int nbRegion = 0;
	int nbDepartement = 0;
	int nbVille = 0;
	char nomregion = " ";
	int choix = -1;

	ouvertureFichier(tabRegions, tabDepartement, tabVille, nbRegion, nbDepartement, nbVille);

	for (int i = 0; i < nbRegion; i++)
	{
		printf("%s\n", tabRegions[i]);
	}

	

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
			creationFichier();
			break;
		}
	} while (choix != 0);
}

