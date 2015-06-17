#include <stdio.h>
#include <stdlib.h>

#include "Region.h"
#include "Departement.h"
#include "Ville.h"
#include "Musee.h"

#include "AfficherTableaux.h"


// /!\ Fonction incomplète dépassement des structures /!\

void AfficherRegion(Region* tabRegion, int* numRegion)
{
	int i = 0;

	int nbRegion = 0;
	nbRegion = *numRegion;


	for (i = 0; i < nbRegion; i++)
	{
		printf("%d - %s\n", tabRegion[i + 1].id, tabRegion[i + 1].nom);
	}
	
	printf("\nFIN DES REGIONS\n");
	system("pause");
}

void AfficherDepartement(Departement* tabDepartement, int* numDep)
{
	int i = 0;
	int j = 0;
	int nbTours = 10;

	int nbDep = 0;
	nbDep = *numDep;


	for (j = 0; j < nbDep; j++)																// Boucle d'affichage par 20
	{
			for (j = j; j < nbTours; j++)
			{
				printf("%d - %s\n", tabDepartement[j + 1].id, tabDepartement[j + 1].nom);
			}

			printf("\n");
			system("pause");
			printf("\n");
			nbTours += 20;	
	}
	printf("FIN DES DEPARTEMENTS\n");
	system("pause");
}

void AfficherVille(Ville* tabVille, int* numVille)
{
	int i = 0;
	int j = 0;
	int nbTours = 10;

	int nbVilles = 0;
	nbVilles = *numVille;


	for (j = 0; j < nbVilles; j++)
	{
		
		for (j = j; j < nbTours; j++)
		{
			printf("%d - %s\n", tabVille[j + 1].id, tabVille[j + 1].nom);
		}

		printf("\n");
		system("pause");
		printf("\n");
		nbTours += 20;
	}
	printf("FIN DES VILLES\n");
	system("pause");
}



void AfficherMusee(Musee* tabMusee, int* numMusee)
{
	int i = 0;
	int j = 0;
	int nbTours = 10;

	int nbMusee = 0;
	nbMusee = *numMusee;

	for (j = 0; j < nbMusee; j++)
	{
		for (j = j; j < nbTours; j++)
		{
			printf("%d - %s\n", tabMusee[j + 1].id, tabMusee[j + 1].nom, tabMusee[j + 1].adresse, tabMusee[j + 1].cp);
		}

		printf("\n");
		system("pause");
		printf("\n");
		nbTours += 10;

	}
	printf("\n");
	printf("FIN DES MUSEE\n");
	system("pause");
}
