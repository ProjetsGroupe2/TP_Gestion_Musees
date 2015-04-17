#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "GestionDonnes.h"
#include "Affichage.h"
#include "Gestion.h"
#include "Sauvegarde.h"

void main()

{
	affichage();
	printf("\n\n      ( Appuyez sur une touche pour pouvoir passer au menu principal. )");
	system("pause>nul");

	affichage();

	affichageMenu();
	system("pause>nul");
	
	creationFichier();
	system("pause>nul");
}

