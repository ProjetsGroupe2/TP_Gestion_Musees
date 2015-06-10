#include <stdio.h>
#include <stdlib.h>

#include "Region.h"
#include "Departement.h"
#include "Traitement.h"
#include "Ville.h"
#include "Musee.h"

void comptageOuvertureFichier(int *nbRegion, int *nbDep, int *nbVille, int *nbMusee)
{
	char lettre = ' ';
	int nbChar = 0;
	int countColonne = 1;
	char data[255] = " ";

	//Var Region -------------------------------
	int numRegion = 0;
	char oldRegion[255] = " ";

	//Var Departement --------------------------
	int numDep = 0;
	char oldDep[255] = " ";

	//Var Ville --------------------------------
	int numVille = 0;
	char oldVille[255] = " ";

	//Var Musee --------------------------------
	int numMusee = 0;
	char oldMusee[255] = " ";


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
			lettre = getc(fichier);
		} while (lettre != '\n');

		// Parcour les lignes en vérifiant chaque caractère de ";" jusqu'à la fin de ligne '\n' 
		do
		{
			do
			{
				lettre = fgetc(fichier);
				if (lettre == ';')
				{

					switch (countColonne)
					{
						//  Region ------------------------------------------------------------------------
					case 1:
						data[nbChar] = '\0';
						if (strcmp(data, oldRegion) != 0) // strcmp pour comparer 2 string 
						{
							strcpy(oldRegion, data); // Copie une char dans une autre (destination, source)
							numRegion++;
						}
						nbChar = 0;

						break;

						// Département --------------------------------------------------------------------
					case 2:
						data[nbChar] = '\0';
						if (strcmp(data, oldDep) != 0)
						{
							strcpy(oldDep, data);
							numDep++;
						}
						nbChar = 0;
						break;

						// Ville --------------------------------------------------------------------------
					case 3:
						data[nbChar] = '\0';
						if (strcmp(data, oldVille) != 0)
						{
							strcpy(oldVille, data);
							numVille++;
						}
						nbChar = 0;
						break;

						// Nom du musée -------------------------------------------------------------------
					case 4:
						data[nbChar] = '\0';
						if (strcmp(data, oldMusee) != 0)
						{
							strcpy(oldMusee, data);
							numMusee++;
						}
						nbChar = 0;
						break;
					}
					countColonne++;
				}

				// Horaires d'ouverture -> case 11 ---------------------------------------------------------
				else if (lettre != '\n')
				{
					data[nbChar] = lettre;
					nbChar++;
				}
			} while (lettre != '\n');

			countColonne = 1;

		} while ((lettre = fgetc(fichier)) != EOF); // Tant que le carractère est différent de la fin du fichier (EOF) -------
	}
	fclose(fichier);
	*nbRegion = numRegion;
	*nbDep = numDep;
	*nbVille = numVille;
	*nbMusee = numMusee;
}