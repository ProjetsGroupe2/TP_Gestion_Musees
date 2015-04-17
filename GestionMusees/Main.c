#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "GestionDonnes.h"
#include "Affichage.h"
#include "Gestion.h"
#include "Sauvegarde.h"
#include "OuvertureFichier.h"
#include "Region.h"

void main()

{
	Region* tabRegions = NULL;


	ouvertureFichier(tabRegions);

	affichage();
	printf("\n\n      ( Appuyez sur une touche pour pouvoir passer au menu principal. )");
	system("pause>nul");

	affichage();

	affichageMenu();
	system("pause>nul");
	
	creationFichier();
	system("pause>nul");
}

