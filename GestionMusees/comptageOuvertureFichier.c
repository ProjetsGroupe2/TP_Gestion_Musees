#include <stdio.h>
#include <stdlib.h>

//#include "Region.h"
//#include "Departement.h"
//#include "Traitement.h"
//#include "Ville.h"
//#include "Musee.h"

#include "comptageOuvertureFichier.h"

void comptageOuvertureFichier(int *nbRegion, int *nbDep, int *nbVille, int *nbMusee)
{
	char lettre = ' ';
	int nbChar = 0;
	int countColonne = 1;
	char data[255] = " ";

	//Var Region -------------------------------
	int numRegion = 0;
	char nomRegion[255] = " ";
	char oldRegion[255] = " ";

	//Var Departement --------------------------
	int numDep = 0;
	char nomDep[255] = " ";
	char oldDep[255] = " ";

	//Var Ville --------------------------------
	int numVille = 0;
	char nomVille[255] = " ";
	char oldVille[255] = " ";

	//Var Musee --------------------------------
	int numMusee = 0;
	char nomMusee[255] = " ";
	char oldMusee[255] = " ";

	//Var Adresse ------------------
	char strAdresse[255] = " ";

	//Var Code postal --------------
	char strCp[255] = " ";

	//Var Annee --------------------
	char strAnnee[255] = " ";

	//Var Ferm�? -------------------
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
						//  Region ------------------------------------------------------------------------
					case 1:
						data[nbChar] = '\0';
						if (strcmp(data, oldRegion) != 0) // strcmp pour comparer 2 string 
						{
							strcpy(oldRegion, data); // Copie une char dans une autre (destination, source)
							numRegion++;
						}
						strcpy(nomRegion, data);
						nbChar = 0;

						break;

						// D�partement --------------------------------------------------------------------
					case 2:
						data[nbChar] = '\0';
						if (strcmp(data, oldDep) != 0)
						{
							strcpy(oldDep, data);
							numDep++;
						}
						strcpy(nomDep, data);
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
						strcpy(nomVille, data);
						nbChar = 0;

						break;

						// Nom du mus�e -------------------------------------------------------------------
					case 4:
						data[nbChar] = '\0';
						if (strcmp(data, oldMusee) != 0)
						{
							strcpy(oldMusee, data);
							numMusee++;
						}
						strcpy(nomMusee, data);
						nbChar = 0;
						break;

					//	// Adresse -------------------------------------------------------------------------
					//case 5:
					//	data[nbChar] = '\0';
					//	nbChar = 0;
					//	break;

					//	// Code postal ---------------------------------------------------------------------
					//case 6:
					//	data[nbChar] = '\0';
					//	nbChar = 0;
					//	break;

					//	// Ann�e ouverture -----------------------------------------------------------------
					//case 7:
					//	data[nbChar] = '\0';
					//	nbChar = 0;
					//	break;

					//	// Ferm�? --------------------------------------------------------------------------
					//case 8:
					//	data[nbChar] = '\0';
					//	nbChar = 0;
					//	break;

					//	// Site Web ------------------------------------------------------------------------
					//case 9:
					//	data[nbChar] = '\0';
					//	nbChar = 0;

					//	break;

					//	// Fermeture annuelle --------------------------------------------------------------
					//case 10:
					//	data[nbChar] = '\0';
					//	nbChar = 0;
					//	break;

					}
					countColonne++;
				}
				else if (lettre != '\n')
				{
					data[nbChar] = lettre;
					nbChar++;
				}
				else
				{
					countColonne = 0;
				}

			

		} while ((lettre = fgetc(fichier)) != EOF); // Tant que le carract�re est diff�rent de la fin du fichier (EOF) -------
	}

	fclose(fichier);
	*nbRegion = numRegion;
	*nbDep = numDep;
	*nbVille = numVille;
	*nbMusee = numMusee;
}