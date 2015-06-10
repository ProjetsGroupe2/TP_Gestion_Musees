#include <stdio.h>
#include <stdlib.h>
#include "Region.h"
#include "Departement.h"
#include "Traitement.h"


void ouvertureFichier(Region* tabRegions, Departement* tabDepartement)
{
	char lettre = ' ';
	int nbChar = 0;
	int countColonne = 1;
	char data[255] = " ";
//---------------------------------
	int nbRegions = 0;
	char nomRegion[255] = " ";
	char oldRegion[255] = " ";
//---------------------------------
	int nbDep = 0;
	char nomDep[255] = " ";
	char oldDep[255] = " ";
//---------------------------------

	FILE* fichier = NULL;
	fichier = fopen("biblio.csv", "r+"); // Ouvre le fichier 

	// Verifie si le fichier s'est bien ouvert
	if (fichier == NULL)
	{
		printf("Erreur lors de l'ouverture du fichier personnes.csv");
	}
	else
	{
		
		tabRegions = calloc(1, sizeof(Region));
		tabDepartement = calloc(1, sizeof(Departement));

		// Retourne au début du fichier
		rewind(fichier);

		// Passer la premiere ligne
		do
		{
			lettre = fgetc(fichier);
		} while (lettre != '\n');

		// Parcour les lignes en vérifiant chaque caractère de ";" jusqu'à la fin de ligne '\n' 
		do
		{
			lettre = fgetc(fichier);
			if (lettre == ';')
			{
					
					switch (countColonne)
					{
						//  Region
					case 1 :
						data[nbChar] = '\0';
						if (strcmp(data, oldRegion) != 0) // strcmp pour comparer 2 string 
							{
							strcpy(oldRegion, data); // Copie une char dans une autre (destination, source)
								nbRegions++;
							}
						    strcpy(nomRegion, data);
							tabRegions[nbRegions].id = nbRegions;
							strcpy(tabRegions[nbRegions].nom, nomRegion);
							nbChar = 0;
							strcpy(data, " ");
						break;

						// Département
					case 2:
						nomDep[nbChar] = '\0';
						if (strcmp(data, oldDep) != 0)
							{
							strcpy(oldDep, data);
								nbDep++;
							}
						strcpy(nomDep, data);
							tabDepartement[nbDep].id = nbDep;
							strcpy(tabDepartement[nbDep].nom, nomDep);
							tabDepartement[nbDep].idRegion = nbRegions;
							nbChar = 0;
							strcpy(data, " ");
						break;

					//	// Ville
					//case 3:
					//	break;

					//	// Nom du musée
					//case 4:
					//	break;

					//	// Adresse 
					//case 5:
					//	break;

					//	// Code postal
					//case 6:
					//	break;

					//	// Année ouverture
					//case 7:
					//	break;

					//	// Fermé?
					//case 8:
					//	break;

					//	// Site Web
					//case 9:
					//	break;

					//	// Fermeture annuelle 
					//case 10:
					//	break;

					//	// Horaires d'ouverture
					//case 11:
					//	break;
					default : 
						strcpy(data, " ");
						break;
					}
					countColonne++;
			}
			else
			{
				data[nbChar] = lettre;
				nbChar++;
			}

		} while (lettre != EOF || lettre != '\n'); // Tant que le carractère est différent de la fin du fichier (EOF)


	}
	fclose(fichier);
}