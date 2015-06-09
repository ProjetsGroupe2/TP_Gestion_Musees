#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Region.h"
#include "Departement.h"


void ouvertureFichier(Region* tabRegions, Departement* tabDepartement,int nbRegions, int nbDep)
{
	char lettre = ' ';
	/*int nbRegions = 0;
	int nbDep = 0;*/


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
	/*char str[255];
	char chaine = " ";
	char *ptr_chaine = &chaine;
	int numLigne = 1;


	if (fgets(str, 100, fichier) != NULL)
	{
		printf("resultat %s", str);
		numLigne++;
		ptr_chaine = strtok(str, ";");
	}
}*/



	
	char lettre = ' ';
	int nbregions = 0;
	char nomregion[200] = " ";
	char previousregion[200] = " ";
	int nbchar = 0;
	int nbrlignes = 0;
	char ligne[] = " ";

	rewind(fichier); // retourne au début du fichier

	// passer la premiere ligne
	do
	{
		lettre = fgetc(fichier);
	} while (lettre != '\n');
	


	do
	{
 		lettre = fgetc(fichier); // cherche dans le fichier 
		if (lettre == ';')
		{
			nomregion[nbchar] = '\0'; // \0 fin de la chaine de caractere
			if (strcmp(nomregion, previousregion) != 0) // strcmp pour comparer 2 string 
			{
				strcpy(previousregion, nomregion); // copie une char dans une autre (destination, source)
				
				
				nbregions++;
			}
			do
			{
				lettre = fgetc(fichier);
			} while (lettre != '\n' && lettre != EOF);

			nbchar = 0;

		}
		else
		{
			nomregion[nbchar] = lettre; 
			nbchar++; 
		}
	} while (lettre != EOF);

	return nbregions;
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