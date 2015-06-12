#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Region.h"
#include "Departement.h"
#include "Musee.h"
#include "Ville.h"

#include "Comptage.h"


// Code pour compter les régions, départements, villes et musées

void Comptage(int *nbRegions, int * nbDep, int * nbVilles, int * nbMusees)
{
	// Var Générales --------------------------------
	int nbChar = 0;	
	char lettre = ' ';
	int countColonne = 0;
	char data[255] = " ";

	// Var Regions ----------------------------------
	int nbR = 0;
	char nomRegion[200] = "";
	char previousRegion[200] = "";

	// Var Départements -----------------------------
	int nbD = 0;
	char nomDep[200] = "";
	char previousDep[200] = "";

	// Var Villes -----------------------------------
	int nbV = 0;
	char nomVille[200] = "";
	char previousVille[200] = "";

	// Var Musées------------------------------------
	int nbM = 0;
	char nomMusee[200] = "";
	char previousMusee[200] = "";


	FILE* fichier = NULL;
	fichier = fopen("biblio.csv", "r+"); // Ouvre le fichier 

	// Verifie si le fichier s'est bien ouvert
	if (fichier == NULL)
	{
		printf("Erreur lors de l'ouverture du fichier personnes.csv");
	}
	else
	{
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
			
				switch (countColonne)
				{

				case 0: // Regions--------------------------------------------------------------------------------
					data[nbChar] = '\0';
					strcpy(nomRegion, data);
					if (strcmp(nomRegion, previousRegion) != 0) 
					{
						strcpy(previousRegion, nomRegion); 
						nbR++;
					}
					nbChar = 0;
					break;

				case 1: // Departement----------------------------------------------------------------------------
					data[nbChar] = '\0';
					strcpy(nomDep, data);
					if (strcmp(nomDep, previousDep) != 0) 
					{
						strcpy(previousDep, nomDep); 
						nbD++;
					}
					nbChar = 0;
					break;

				case 2: // Ville----------------------------------------------------------------------------------
					data[nbChar] = '\0'; 
					strcpy(nomVille, data);
					if (strcmp(nomVille, previousVille) != 0) 
					{
						strcpy(previousVille, nomVille); 
						nbV++;
					}
					nbChar = 0;
					break;

				case 3: // Musee----------------------------------------------------------------------------------
					data[nbChar] = '\0';
					strcpy(nomMusee, data);
					if (strcmp(nomMusee, previousMusee) != 0) 
					{
						strcpy(previousMusee, nomMusee); 
						nbM++;
					}
					nbChar = 0;
					break;
				}
				countColonne++;
				if (countColonne == 4)
				{
					do
					{
						lettre = fgetc(fichier);
						countColonne = 0;
					} while (lettre != '\n');
				}
			}
			
			else 
			{
				data[nbChar] = lettre;
				nbChar++;
			}
		} while (lettre != EOF);
	}
	fclose(fichier);
	*nbRegions = nbR;
	*nbDep = nbD;
	*nbVilles = nbV;
	*nbMusees = nbM;
}
