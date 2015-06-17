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
	system("cls");
	printf("\n");


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
			printf("%d - %s\n",tabDepartement[idDep].id, tabDepartement[idDep].nom);
			idDep++;
		}
		else
		{
			break;
		}
	}



	printf("\nChoisissez le num%lcro du d%lcpartement dans la lequel se trouve le mus%lce que vous cherchez\n", 130, 130, 130);
	scanf("%d", &choix);
	system("cls");
	printf("\n\n");

	idDep = tabDepartement[choix].id;

	for (int i = 0; i < numVil; i++)				// Boucle pour trouver l'idRegion de tabDepartement 
	{
		if (idDep == tabVille[i].idDepartement)
		{
			idVil = i;
			break;
		}
	}


	for (int i = 1; i < numVil; i++)				// Boucle pour Afficher
	{
		if (idDep == tabVille[idVil].idDepartement) 
		{
			printf("%d - %s\n", tabVille[idVil].id, tabVille[idVil].nom);
			idVil++;
		}
		else
		{
			break;
		}
	}

	printf("\nChoisissez le num%lcro de la ville quel se trouve le mus%lce que vous cherchez\n", 130, 130);
	scanf("%d", &choix);
	system("cls");
	printf("\n\n");
	
	idVil = tabVille[choix].id;

	for (int i = 0; i < numMus; i++)				// Boucle pour trouver l'idRegion de tabDepartement 
	{
		if (idVil == tabMusee[i].idVille)
		{
			idMus = i;
			break;
		}
	}


	for (int i = 1; i < numMus; i++)				// Boucle pour Afficher
	{
		if (idVil == tabMusee[idMus].idVille)
		{
			printf("%d - %s\n", tabMusee[idMus].id, tabMusee[idMus].nom);
			idMus++;
		}
		else
		{
			break;
		}
	}
	system("pause");
}
