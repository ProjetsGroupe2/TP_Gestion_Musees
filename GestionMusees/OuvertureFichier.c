#include <stdio.h>
#include <stdlib.h>
#include "Region.h"


void ouvertureFichier(Region* tabRegions)
{
	char lettre = ' ';
	int nbRegions = 0;

	FILE* fichier = NULL;
	fichier = fopen("biblio.csv", "r+");

	// Verifie si le fichier s'est bien ouvert
	if (fichier == NULL)
	{
		printf("Erreur lors de l'ouverture du fichier personnes.csv");
	}
	else
	{
		nbRegions = NombreDeRegions(fichier);
		tabRegions = malloc(sizeof(Region)* nbRegions);

		do
		{
			lettre = fgetc(fichier);
			if (lettre == ';' || lettre == '\n')
			{

			}

		} while (lettre != EOF);


	}
	fclose(fichier);
}

int NombreDeRegions(FILE* fichier)
{
	char lettre = ' ';
	int nbRegions = 0;
	char nomRegion[200] = "";
	char previousRegion[200] = "";
	int nbChar = 0;

	rewind(fichier);


	do
	{
		lettre = fgetc(fichier);
	} while (lettre != '\n');

	do
	{
		lettre = fgetc(fichier);
		if (lettre == ';')
		{
			nomRegion[nbChar] = '\0';
			if (strcmp(nomRegion, previousRegion) != 0)
			{
				strcpy(previousRegion, nomRegion);
				nbRegions++;
			}
			do
			{
				lettre = fgetc(fichier);
			} while (lettre != '\n' && lettre != EOF);
			nbChar = 0;
		}
		else
		{
			nomRegion[nbChar] = lettre;
		}
		nbChar++;

	} while (lettre != EOF);

	return nbRegions;
}