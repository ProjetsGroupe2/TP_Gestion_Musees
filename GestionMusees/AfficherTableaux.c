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


	for (i = 1; i < nbRegion; i++)
	{
		printf("%d - %s\n", tabRegion[i].id, tabRegion[i].nom);  
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

	// Boucle d'affichage par 20 *********************************************************

	for (j = 0; j < nbDep; j++)															
	{
		for (j = j; j < nbTours; j++)
		{
			printf("%d - %s\n", tabDepartement[j + 1].id, tabDepartement[j + 1].nom); // +1 pour commencer l'id à 1 vu que j est déjà utilisé
		}

		printf("\n");
		system("pause");
		printf("\n");
		nbTours += 20;	// 20 tours par 20
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
	int count = 0;
	int reste = 0;

	int nbMusee = 0;
	nbMusee = *numMusee;

	// Boucle d'affichage spéciale *********************************************************
	for (j = 0; j < (nbMusee - 10); j++)  // Musees - 10 pour calculer le count et le reste
	{
		for (j = j; j < nbTours; j++)     // j = j pour ne pas perdre l'index
		{
			printf("%d - %s \n", tabMusee[j + 1].id, tabMusee[j + 1].nom); // 
			count++; // Pour tout compter
		}
		count++; // Pour tout compter
		printf("\n");
		system("pause");
		printf("\n");
		nbTours += 10;
	}

	reste = (nbMusee - count); // Cherche le reste pour ne pas dépasser la mémoire avec la boucle


	for (i = -1; i < reste; i++) // Ajoute juste les musées qui reste
	{
		printf("%d - %s\n", tabMusee[j].id, tabMusee[j].nom);
		j++;
	}

	printf("\n");
	printf("FIN DES MUSEE\n");
	system("pause");
}
