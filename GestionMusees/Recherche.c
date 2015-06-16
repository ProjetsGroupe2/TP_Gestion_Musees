#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

#include "Region.h"
#include "Departement.h"
#include "Ville.h"
#include "Musee.h"

#include "Recherche.h"
#include "AfficherTableaux.h"


void Rechercher(Region * tabRegion, Departement* tabDepartement, Ville* tabVille, Musee* tabMusee, int *nbRegion, int * nbDep, int * nbVille, int * nbMusee)
{
	
	int numReg = *nbRegion;
	int numDep = *nbDep;
	int numVil = *nbVille;
	int numMus = *nbMusee;

	int idMus = 0;
	int idVil = 0;
	int idDep = 0;
	int idReg = 0;

	int choix = 0;
	

	AfficherRegion(tabRegion, nbRegion);

	printf("\n\nChoisissez le numero de la region dans laquelle se trouve le musee que vous cherchez\n");
	scanf("%d", &choix);

	idReg = tabRegion[choix].id;
	

	for (int i = 0; i < numDep; i++)				// Boucle pour trouver l'idRegion de tabDepartement 
	{
		if (idReg == tabDepartement[i].idRegion)
		{
			idDep = i;
			break;
		}
	}

	for (int i = 1; i < numDep; i++)				// Boucle pour Afficher
	{
		if (idReg == tabDepartement[idDep].idRegion)
		{
			printf("%d - %s\n",tabDepartement[i].id, tabDepartement[idDep].nom);
			idDep++;
		}
		else
		{
			break;
		}
	}

	printf("Choisissez le numero du département dans la lequel se trouve le musee que vous cherchez\n");
	scanf("%d", &choix);

	idVil = tabMusee[idMus].idVille;
	idDep = tabVille[idVil].idDepartement;
	idReg = tabDepartement[idDep].idRegion;
}
