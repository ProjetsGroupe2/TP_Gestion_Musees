#include <stdio.h>
#include <stdlib.h>

#include "Region.h"
#include "Departement.h"
#include "Ville.h"
#include "Musee.h"



/* /!\ Comment� par Martin dans le Main et dans Sauvegerde pour cause de d�boggage d'ouverture fichier /!\ */


int CreationFichier(Region * tabRegion, Departement * tabDepartement, Ville * tabVille, Musee * tabMusee, int * numMus)
{

	int nbMus = *numMus;

	FILE* fichier = NULL;
	fichier = fopen("biblio.csv", "w+");

	if (fichier == NULL)
	{
		printf("Erreur lors de l'ouverture du fichier biblio.csv pour la sauvegarde");
	}
	else
	{
		char line[500];
		fprintf(fichier, "NOMREG;NOMDEP;VILLE;NOM DU MUSEE;ADR;CP;ANNREOUV;FERME;SITWEB;FERMETURE ANNUELLE;PERIODE OUVERTURE");
		

		for (int i = 0; i < nbMus ; i++)
		{
			int idVille = tabMusee[i].idVille;
			int idDepartement = tabVille[idVille].idDepartement;
			int idRegion = tabDepartement[idDepartement].idRegion;							// On r�cup�re chaque id en relation dans les structures
			fprintf(fichier, "%s;", tabRegion[idRegion].nom);								// On les ins�res dans le fichier
			fprintf(fichier, "%s;", tabDepartement[idDepartement].nom);
			fprintf(fichier, "%s;", tabVille[idVille].nom);
			fprintf(fichier, "%s;", tabMusee[i].nom);
			fprintf(fichier, "%s;", tabMusee[i].adresse);
			fprintf(fichier, "%s;", tabMusee[i].cp);
			fprintf(fichier, "%s;", tabMusee[i].anneereouv);
			fprintf(fichier, "%s;", tabMusee[i].ferme);
			fprintf(fichier, "%s;", tabMusee[i].siteweb);
			fprintf(fichier, "%s;", tabMusee[i].fermetureannuelle);
			fprintf(fichier, "%s\n", tabMusee[i].periodeouverture);
		}
	
		fclose(fichier);

		return 1;
	}

}