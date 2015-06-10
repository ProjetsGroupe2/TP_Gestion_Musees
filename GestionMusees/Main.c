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
#include "Musee.h"

void main()

{
	Region* tabRegion = NULL;
	Departement* tabDepartement = NULL;
	Ville* tabVille = NULL;
	Musee* tabMusee = NULL;


	int nbRegion = 0;
	int nbDepartement = 0;
	int nbVille = 0;
	int nbMusee = 0;
	char nomregion = " ";
	int choix = -1;

	/* /!\ � d�commenter avant de commiter /!\ */

	ouvertureFichier(tabRegion, tabDepartement, tabVille, tabMusee, &nbRegion, &nbDepartement, &nbVille, &nbMusee);

	/*tabRegion = calloc(nbRegion, sizeof(Region));
    tabDepartement = calloc(nbDepartement, sizeof(Departement));
	tabVille = calloc(nbVille, sizeof(Ville));
	tabMusee = calloc(nbMusee, sizeof(Musee));
*/
	for (int i = 0; i < nbRegion; i++)
	{
		printf("%d %s\n", tabRegion[i].id, tabRegion[i].nom);
	}
	system("pause");
	do
	{
		affichage();
		affichageMenu(&choix);
		switch (choix)
		{
		case 1:
			system("cls");
			//MenuGererMusees();
			break;
		case 2:
			system("cls");
			MenuRechercherMusee();
			break;
		case 3:
			system("cls");
			/* /!\ Comment� par Martin dans le Main et dans Sauvegerde pour cause de d�boggage d'ouverture fichier /!\ */
			//creationFichier();
			break;
		}
	} while (choix != 0);
}

