#include <stdio.h>
#include <stdlib.h>

#include "Region.h"
#include "Departement.h"
#include "Traitement.h"
#include "Ville.h"
#include "Musee.h"

void ouvertureFichier(Region* tabRegions, Departement* tabDepartement, Ville * tabVille, Musee * tabMusee,  int nbRegion, int nbDep, int nbVille, int nbMusee)
{
	char lettre = ' ';
	int nbChar = 0;
	int countColonne = 1;
	char data[255] = " ";
//---------------------------------
	char nomRegion[255] = " ";
	char oldRegion[255] = " ";
//---------------------------------
	char nomDep[255] = " ";
	char oldDep[255] = " ";
//---------------------------------
	char nomVille[255] = " ";
	char oldVille[255] = " ";
//---------------------------------
	char nomMusee[255] = " ";
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
		
		tabRegions = NULL/*calloc(1, sizeof(Region))*/;
		tabDepartement = NULL /*calloc(1, sizeof(Departement))*/;
		tabVille = NULL/*calloc(1, sizeof(Ville))*/;

		// Retourne au d�but du fichier
		rewind(fichier);

		// Passer la premiere ligne
		do
		{
			lettre = fgetc(fichier);
		} while (lettre != '\n');

		// Parcour les lignes en v�rifiant chaque caract�re de ";" jusqu'� la fin de ligne '\n' 
		do
		{
			lettre = fgetc(fichier);
			if (lettre == ';')
			{
					
					switch (countColonne)
					{
						//  Region------------------------------------------------------------------------
					case 1 :
						data[nbChar] = '\0';
						if (strcmp(data, oldRegion) != 0) // strcmp pour comparer 2 string 
							{
							strcpy(oldRegion, data); // Copie une char dans une autre (destination, source)
								nbRegion++;
							}
						strcpy(nomRegion, data);
						tabRegions = realloc(tabRegions, sizeof(Region)* nbRegion);
						tabRegions[nbRegion].id = nbRegion;
						strcpy(tabRegions[nbRegion].nom, nomRegion);
						nbChar = 0;
					break;

						// D�partement--------------------------------------------------------------------
					case 2:
						data[nbChar] = '\0';
						if (strcmp(data, oldDep) != 0)
							{
							strcpy(oldDep, data);
								nbDep++;
							}
						strcpy(nomDep, data);
						tabDepartement = realloc(tabDepartement, sizeof(Departement)* nbDep);
						tabDepartement[nbDep].id = nbDep;
						strcpy(tabDepartement[nbDep].nom, nomDep);
						tabDepartement[nbDep].idRegion = nbRegion;
						nbChar = 0;
					break;

						// Ville--------------------------------------------------------------------------
					case 3:		
						data[nbChar] = '\0';
						if (strcmp(data, oldVille)!= 0)
							{
							strcpy(oldVille, data);
								nbVille++;
							}
						strcpy(data, nomVille);
						tabVille = realloc(tabVille, sizeof(Ville)* nbVille);
						tabVille[nbVille].id = nbVille;
						strcpy(tabVille[nbVille].nom, nomVille);
						tabVille[nbVille].idDepartement = nbDep;
						nbChar = 0;

					break;

						// Nom du mus�e-------------------------------------------------------------------
					case 4:
						data[nbMusee] = '\0';
						if (strcmp(data, oldMusee)!= 0) 
						{
							strcpy(oldMusee, data);
							nbMusee++;
						}
						strcpy

						break;

					//	// Adresse 
					//case 5:
					//	break;

					//	// Code postal
					//case 6:
					//	break;

					//	// Ann�e ouverture
					//case 7:
					//	break;

					//	// Ferm�?
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

					}
					countColonne++;
			}
			else
			{
				data[nbChar] = lettre;
				nbChar++;
			}

		} while (lettre != EOF || lettre != '\n'); // Tant que le carract�re est diff�rent de la fin du fichier (EOF)


	}
	fclose(fichier);
}