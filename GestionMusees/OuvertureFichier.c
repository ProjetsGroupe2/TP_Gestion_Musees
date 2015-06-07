#include <stdio.h>
#include <stdlib.h>
#include "Region.h"
#include "Departement.h"
#include "Traitement.h"


void ouvertureFichier(Region* tabRegions, Departement* tabDepartement)
{
	char lettre = ' ';
	int nbRegions = 0;
	int nbDep = 0;

	FILE* fichier = NULL;
	fichier = fopen("biblio.csv", "r+"); // Ouvre le fichier 

	// Verifie si le fichier s'est bien ouvert
	if (fichier == NULL)
	{
		printf("Erreur lors de l'ouverture du fichier personnes.csv");
	}
	else
	{
		nbRegions = NombreDeRegions(fichier);
		tabRegions = malloc(sizeof(Region)* nbRegions);

		nbDep = NombreDeDepartement(fichier);
		tabDepartement = malloc(sizeof(Departement)* nbDep);


		// Parcour les lignes en vérifiant chaque caractère de ";" jusqu'à "\n" 
		do
		{
			lettre = fgetc(fichier);
			if (lettre == ';' || lettre == '\n')
			{

			}

		} while (lettre != EOF); // Tant que le carractère est différent de la fin du fichier


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