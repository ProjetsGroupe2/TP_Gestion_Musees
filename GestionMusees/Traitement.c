#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Region.h"
#include "Departement.h"
#include "Musee.h"
#include "Ville.h"

#include "Traitement.h"


int CompareRegions(Region * tabregion, char* region, int nbRegion)
{
	for (int i= 0; i <= nbRegion; i++)
	{
		if (strcmp(tabregion[i].nom, region) == 0)
		{
			return tabregion[i].id;
		}
	}
	return 0;
}




//***********************************************************************************************

int NombreDeRegions(FILE* fichier)
{
	char lettre = ' ';
	int nbRegions = 0;
	char nomRegion[200] = "";
	char previousRegion[200] = "";
	int nbChar = 0;

	// Retourne au début du fichier
	rewind(fichier);

	// Passer la premiere ligne
	do
	{
		lettre = fgetc(fichier);
	} while (lettre != '\n');

	do
	{
		lettre = fgetc(fichier); // Cherche dans le fichier 
		if (lettre == ';')
		{
			nomRegion[nbChar] = '\0'; // \0 fin de la chaine de caractere
			if (strcmp(nomRegion, previousRegion) != 0) // strcmp pour comparer 2 string 
			{
				strcpy(previousRegion, nomRegion); // Copie une char dans une autre (destination, source)
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
			nbChar++;
		}
	} while (lettre != EOF);

	return nbRegions;
}

//----------------------------------------------------------------------------------------------

int NombreDeDepartement(FILE* fichier)
{
	char lettre = ' ';
	int nbDep = 0;
	char nomDep[200] = " ";
	char previousDep[200] = " ";
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
			nomDep[nbChar] = '\0';
			if (strcmp(nomDep, previousDep) != 0)
			{
				strcpy(previousDep, nomDep);
				nbDep++;
			}
			do
			{
				lettre = fgetc(fichier);
			} while (lettre != '\n' && lettre != EOF);

			nbChar = 0;
		}
		else
		{
			nomDep[nbChar] = lettre;
			nbChar++;
		}

	} while (lettre != EOF);
	return nbDep;
}