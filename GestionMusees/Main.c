#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "GestionDonnes.h"
#include "Affichage.h"
#include "Gestion.h"
#include "Sauvegarde.h"
#include "OuvertureFichier.h"

void main()

{
	ouvertureFichier();
	system("pause>nul");

	affichage();
	system("pause>nul");

	iconeAffichage();

	affichageMenu();
	system("pause>nul");
	
	creationFichier();
	system("pause>nul");
}

