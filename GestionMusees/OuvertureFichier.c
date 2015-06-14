#include <stdio.h>
#include <stdlib.h>

#include "Region.h"
#include "Departement.h"
#include "Ville.h"
#include "Musee.h"

//#include "Comptage.h"
#include "OuvertureFichier.h"




void ouvertureFichier(Region* tabRegions, Departement* tabDepartement, Ville* tabVille, Musee* tabMusee)
{

	char lettre = ' ';
	int nbChar = 0;
	int countColonne = 0;
	char data[255] = " ";

	//Var Region -------------------------------
	int nbRegion = 0;
	char oldRegion[255] = " ";

	//Var Departement --------------------------
	int nbDep = 0;
	char oldDep[255] = " ";

	//Var Ville --------------------------------
	int nbVille = 0;
	char oldVille[255] = " ";

	//Var Musee --------------------------------
	int nbMusee = 0;
	char oldMusee[255] = " ";

	//Var Adresse ------------------
	char strAdresse[255] = " ";

	//Var Code postal --------------
	char strCp[255] = " ";

	//Var Annee --------------------
	char strAnnee[255] = " ";

	//Var Fermé? -------------------
	char strFerme[255] = " ";

	//Var Site Web -----------------
	char strWeb[255] = " ";

	//Var Fermture Annuelle --------
	char strFermeAnn[255] = " ";

	//Var Horaires d'Ouverture------
	char strOuvert[255] = " ";
	

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

		// *************************

		// Parcour les lignes en vérifiant chaque caractère de ";" jusqu'à la fin de ligne '\n' 
		do
		{
				lettre = fgetc(fichier);
				if (lettre == ';')
				{

					switch (countColonne)
					{
						//  Region ------------------------------------------------------------------------
					case 0:
						data[nbChar] = '\0';
						if (strcmp(data, oldRegion) != 0)
						{
							strcpy(oldRegion, data);
							nbRegion++;
							tabRegions[nbRegion].id = nbRegion;
							strcpy(tabRegions[nbRegion].nom, data);
						}
						break;

						// Département --------------------------------------------------------------------
					case 1:
						data[nbChar] = '\0';
						if (strcmp(data, oldDep) != 0)
						{
							strcpy(oldDep, data);
							nbDep++;
							tabDepartement[nbDep].id = nbDep;
							strcpy(tabDepartement[nbDep].nom, data);
							tabDepartement[nbDep].idRegion = nbRegion;
						}
						break;

						// Ville --------------------------------------------------------------------------
					case 2:
						data[nbChar] = '\0';
						if (strcmp(data, oldVille) != 0)
						{
							strcpy(oldVille, data);
							nbVille++;
							tabVille[nbVille].id = nbVille;
							strcpy(tabVille[nbVille].nom, data);
							tabVille[nbVille].idDepartement = nbDep;
						}
						break;

						// Nom du musée -------------------------------------------------------------------
					case 3:
						data[nbChar] = '\0';
						if (strcmp(data, oldMusee) != 0)
						{
							strcpy(oldMusee, data);
							nbMusee++;
							tabMusee[nbMusee].id = nbMusee;
							strcpy(tabMusee[nbMusee].nom, data);
							tabMusee[nbMusee].idVille = nbVille;
						}
						break;

						// Adresse -------------------------------------------------------------------------
					case 4:
						data[nbChar] = '\0';
						strcpy(tabMusee[nbMusee].adresse, data);
						break;

						// Code postal ---------------------------------------------------------------------
					case 5:
						data[nbChar] = '\0';
						strcpy(tabMusee[nbMusee].cp, data);
						break;

						// Année ouverture -----------------------------------------------------------------
					case 6:
						data[nbChar] = '\0';
						strcpy(tabMusee[nbMusee].anneereouv, data);
						break;

						// Fermé? --------------------------------------------------------------------------
					case 7:
						data[nbChar] = '\0';
						strcpy(tabMusee[nbMusee].ferme, data);
						break;

						// Site Web ------------------------------------------------------------------------
					case 8:
						data[nbChar] = '\0';
						strcpy(tabMusee[nbMusee].siteweb, data);
						break;

						// Fermeture annuelle --------------------------------------------------------------
					case 9:
						data[nbChar] = '\0';
						strcpy(tabMusee[nbMusee].fermetureannuelle, data);
						break;

					}
					countColonne++; // ajoute une colone pour changer de cas
					nbChar = 0;
				}
				else if (lettre == '\n') // Horaires d'ouverture -> "case 11:" -----------------------------
				{
					data[nbChar] = '\0';
					countColonne = 0; // Remise à zéro des colonnes pour changement de lignes
					nbChar = 0;
				}
				else 
				{
					data[nbChar] = lettre; // On récupère chaque lettre pour la mettre dans data avec le nbChar pour connaitre le nombre de caratère de la chaine
					nbChar++;
				}
		} while (lettre != EOF); // Tant que le carractère est différent de la fin du fichier (EOF) -------
		
		fclose(fichier); // ferme le fichier
	}
}