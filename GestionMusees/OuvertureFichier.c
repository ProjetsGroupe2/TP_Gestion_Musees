#include <stdio.h>
#include <stdlib.h>

#include "Region.h"
#include "Departement.h"
#include "Traitement.h"
#include "Ville.h"
#include "Musee.h"

void ouvertureFichier(Region* tabRegion, Departement* tabDepartement, Ville* tabVille, Musee* tabMusee)
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
		
		tabRegion = calloc(1, sizeof(Region));
		tabDepartement =  calloc(1, sizeof(Departement));
		tabVille = calloc(1, sizeof(Ville));
		tabMusee = calloc(1, sizeof(Musee));


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
						case 1 :
							data[nbChar] = '\0';
							if (strcmp(data, oldRegion) != 0) // strcmp pour comparer 2 string 
								{
								strcpy(oldRegion, data); // Copie une char dans une autre (destination, source)
									numRegion++;
									tabRegion = realloc(tabRegion, (numRegion + 1) * sizeof(Region));
								}
							strcpy(nomRegion, data);
							tabRegion[numRegion].id = numRegion;
							strcpy(tabRegion[numRegion].nom, nomRegion);
							nbChar = 0;

						break;

							// Département --------------------------------------------------------------------
						case 2:
							data[nbChar] = '\0';
							if (strcmp(data, oldDep) != 0)
								{
								strcpy(oldDep, data);
									numDep++;
									tabDepartement = realloc(tabDepartement, (numDep + 1) * sizeof(Departement));
								}
							strcpy(nomDep, data);
							tabDepartement[numDep].id = numDep;
							strcpy(tabDepartement[numDep].nom, nomDep);
							tabDepartement[numDep].idRegion = numRegion;
							nbChar = 0;
						break;

							// Ville --------------------------------------------------------------------------
						case 3:		
							data[nbChar] = '\0';
							if (strcmp(data, oldVille)!= 0)
								{
								strcpy(oldVille, data);
									numVille++;
									tabVille = realloc(tabVille, (numVille + 1) * sizeof(Ville));
								}
							strcpy(nomVille, data);
							tabVille[numVille].id = numVille;
							strcpy(tabVille[numVille].nom, nomVille);
							tabVille[numVille].idDepartement = numDep;
							nbChar = 0;

						break;

							// Nom du musée -------------------------------------------------------------------
						case 4:
							data[nbChar] = '\0';
							if (strcmp(data, oldMusee)!= 0) 
							{
								strcpy(oldMusee, data);
								numMusee++;
								tabMusee = realloc(tabMusee, (numMusee + 1)* sizeof(Musee));
							}
							strcpy(nomMusee, data);
							tabMusee[numMusee].id = nomMusee;
							strcpy(tabMusee[numMusee].nom, nomMusee);
							tabMusee[numMusee].idVille = numVille;
							nbChar = 0;
						break;

							// Adresse -------------------------------------------------------------------------
						case 5:
							data[nbChar] = '\0';
							strcpy(strAdresse, data);
							strcpy(tabMusee[numMusee].adresse, strAdresse);
							nbChar = 0;
						break;

							// Code postal ---------------------------------------------------------------------
						case 6:
							data[nbChar] = '\0';
							strcpy(strCp, data);
							strcpy(tabMusee[numMusee].cp, strCp);
							nbChar = 0;
						break;

							// Année ouverture -----------------------------------------------------------------
						case 7:
							data[nbChar] = '\0';
							strcpy(strAnnee, data);
							strcpy(tabMusee[numMusee].anneereouv, strAnnee);
							nbChar = 0;
						break;

							// Fermé? --------------------------------------------------------------------------
						case 8:
							data[nbChar] = '\0';
							strcpy(strFerme, data);
							strcpy(tabMusee[numMusee].ferme, strFerme);
							nbChar = 0;
						break;

							// Site Web ------------------------------------------------------------------------
						case 9:
							data[nbChar] = '\0';
							strcpy(strWeb, data);
							strcpy(tabMusee[numMusee].siteweb, strWeb);
							nbChar = 0;
						
						break;

							// Fermeture annuelle --------------------------------------------------------------
						case 10:
							if (!strcmp(data, ""))
							{
								data[nbChar] = '\0';
								strcpy(strFermeAnn, data);
								strcpy(tabMusee[numMusee].fermetureannuelle, strFermeAnn);
								nbChar = 0;
							}
							else
							{
								data[nbChar] = '\0';
								strcpy(tabMusee[numMusee].fermetureannuelle, data);
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
					strcpy(tabMusee[numMusee].periodeouverture, strOuvert);
					nbChar = 0;
				
				}
			} while (lettre != '\n');

			countColonne = 1;

		} while ((lettre = fgetc(fichier)) != EOF); // Tant que le carractère est différent de la fin du fichier (EOF) -------
	}
	fclose(fichier);
	/**nbRegion = numRegion;
	*nbDep = numDep;
	*nbVille = numVille;
	*nbMusee = numMusee;*/
}