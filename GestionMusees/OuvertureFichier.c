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
			if (lettre == ';')
			{

			}

		} while (lettre != EOF); // Tant que le carractère est différent de la fin du fichier (EOF)


	}
	fclose(fichier);
}