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

//Var Region -------------------------------
	char nomRegion[255] = " ";
	char oldRegion[255] = " ";

//Var Departement --------------------------
	char nomDep[255] = " ";
	char oldDep[255] = " ";

//Var Ville --------------------------------
	char nomVille[255] = " ";
	char oldVille[255] = " ";

//Var Musee --------------------------------
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
		
		tabRegions = calloc(1, sizeof(Region));
		tabDepartement =  calloc(1, sizeof(Departement));
		tabVille = calloc(1, sizeof(Ville));
		tabMusee = calloc(1, sizeof(Musee));


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
			do
			{
				lettre = fgetc(fichier);
				if (lettre == ';')
				{
					
						switch (countColonne)
						{
							//  Region ------------------------------------------------------------------------
						case 1 :
							data[nbChar] = '\0';
							if (strcmp(data, oldRegion) != 0) // strcmp pour comparer 2 string 
								{
								strcpy(oldRegion, data); // Copie une char dans une autre (destination, source)
									nbRegion++;
									tabRegions = realloc(tabRegions, sizeof(Region)* nbRegion);
								}
							strcpy(nomRegion, data);
							tabRegions[nbRegion].id = nbRegion;
							strcpy(tabRegions[nbRegion].nom, nomRegion);
							nbChar = 0;

						break;

							// D�partement --------------------------------------------------------------------
						case 2:
							data[nbChar] = '\0';
							if (strcmp(data, oldDep) != 0)
								{
								strcpy(oldDep, data);
									nbDep++;
									tabDepartement = realloc(tabDepartement, sizeof(Departement)* nbDep);
								}
							strcpy(nomDep, data);
							tabDepartement[nbDep].id = nbDep;
							strcpy(tabDepartement[nbDep].nom, nomDep);
							tabDepartement[nbDep].idRegion = nbRegion;
							nbChar = 0;
						break;

							// Ville --------------------------------------------------------------------------
						case 3:		
							data[nbChar] = '\0';
							if (strcmp(data, oldVille)!= 0)
								{
								strcpy(oldVille, data);
									nbVille++;
									tabVille = realloc(tabVille, sizeof(Ville)* nbVille);
								}
							strcpy(nomVille, data);
							tabVille[nbVille].id = nbVille;
							strcpy(tabVille[nbVille].nom, nomVille);
							tabVille[nbVille].idDepartement = nbDep;
							nbChar = 0;

						break;

							// Nom du mus�e -------------------------------------------------------------------
						case 4:
							data[nbChar] = '\0';
							if (strcmp(data, oldMusee)!= 0) 
							{
								strcpy(oldMusee, data);
								nbMusee++;
								tabMusee = realloc(tabMusee, sizeof(Musee)* nbMusee);
							}
							strcpy(nomMusee, data);
							tabMusee[nbMusee].id = nbMusee;
							strcpy(tabMusee[nbMusee].nom, nomMusee);
							tabMusee[nbMusee].idVille = nbVille;
							nbChar = 0;
						break;

							// Adresse -------------------------------------------------------------------------
						case 5:
							data[nbChar] = '\0';
							strcpy(strAdresse, data);
							strcpy(tabMusee[nbMusee].adresse, strAdresse);
							nbChar = 0;
						break;

							// Code postal ---------------------------------------------------------------------
						case 6:
							data[nbChar] = '\0';
							strcpy(strCp, data);
							strcpy(tabMusee[nbMusee].cp, strCp);
							nbChar = 0;
						break;

							// Ann�e ouverture -----------------------------------------------------------------
						case 7:
							data[nbChar] = '\0';
							strcpy(strAnnee, data);
							strcpy(tabMusee[nbMusee].anneereouv, strAnnee);
							nbChar = 0;
						break;

							// Ferm�? --------------------------------------------------------------------------
						case 8:
							data[nbChar] = '\0';
							strcpy(strFerme, data);
							strcpy(tabMusee[nbMusee].ferme, strFerme);
							nbChar = 0;
						break;

							// Site Web ------------------------------------------------------------------------
						case 9:
							data[nbChar] = '\0';
							strcpy(strWeb, data);
							strcpy(tabMusee[nbMusee].siteweb, strWeb);
							nbChar = 0;
						
						break;

							// Fermeture annuelle --------------------------------------------------------------
						case 10:
							if (!strcmp(data, ""))
							{
								data[nbChar] = '\0';
								strcpy(strFermeAnn, data);
								strcpy(tabMusee[nbMusee].fermetureannuelle, strFermeAnn);
								nbChar = 0;
							}
							else
							{
								data[nbChar] = '\0';
								strcpy(tabMusee[nbMusee].fermetureannuelle, data);
							}
						break;

						}
						countColonne++;
				}

				// Horaires d'ouverture -> case 11 -------------------------------------------------------------
				else if (lettre != '\n')
				{
					data[nbChar] = lettre;
					nbChar++;
				}
				else
				{
					data[nbChar] = '\0';
					strcpy(strOuvert, data);
					strcpy(tabMusee[nbMusee].periodeouverture, strOuvert);
					nbChar = 0;
				
				}
			} while (lettre != '\n');

			countColonne = 1;

		} while (lettre != EOF ); // Tant que le carract�re est diff�rent de la fin du fichier (EOF) -------


	}
	fclose(fichier);
}