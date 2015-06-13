#include <stdio.h>
#include <stdlib.h>

#include "Region.h"
#include "Departement.h"
#include "Ville.h"
#include "Musee.h"

#include "AfficherTableaux.h"




void AfficherRegion(Region* tabRegion, int* numRegion)
{
	int i = 0;

	int nbRegion = 0;
	nbRegion = *numRegion;


	for (i = 0; i < nbRegion; i++)
	{
		printf("%d - %s\n", tabRegion[i + 1].id, tabRegion[i + 1].nom);
	}
	system("pause");
}

void AfficherDepartement(Departement* tabDepartement, int* numDep)
{
	int i = 0;

	int nbDep = 0;
	nbDep = *numDep;


	for (i = 0; i < nbDep; i++)
	{
		if (i < (nbDep / 2))
		{
			printf("%d - %s\n", tabDepartement[i + 1].id, tabDepartement[i + 1].nom);
		}
		else if (i > (nbDep / 2))
		{
			printf("%d - %s\n", tabDepartement[i + 1].id, tabDepartement[i + 1].nom);
		}
	}
	system("pause");
}

void AfficherVille(Ville* tabVille, int* numVille)
{
	int i = 0;

	int nbVilles = 0;
	nbVilles = *numVille;


	for (i = 0; i < nbVilles; i++)
	{
		printf("%d - %s\n", tabVille[i + 1].id, tabVille[i + 1].nom);
	}
	system("pause");
}


void AfficherMusee(Musee* tabMusee, int* numMusee)
{
	int i = 0;

	int nbMusee = 0;
	nbMusee = *numMusee;


	for (i = 0; i < nbMusee; i++)
	{
		printf("%d - %s \n", tabMusee[i + 1].id, tabMusee[i + 1].nom);
	}
	system("pause");
}
