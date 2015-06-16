#include <stdio.h>
#include <stdlib.h>

#include "Region.h"
#include "Departement.h"
#include "Ville.h"
#include "Musee.h"

#include "Modifier.h"
#include "AfficherTableaux.h"

void Modifier(Region * tabRegion, Departement* tabDepartement, Ville* tabVille, Musee* tabMusee, int *nbRegion, int * nbDep, int * nbVille, int * nbMusee)
{

	int numRegion = *nbRegion;
	int numDep = *nbDep;
	int numVille = *nbVille;
	int numMusee = *nbMusee;

	int idMus = 0;
	int idVil = 0;
	int idReg = 0;
	int idDep = 0;

	// Musee -----------------
	char musee[255] = " ";
	char adresse[255] = " ";
	char cp[10] = " ";
	char siteweb[255] = " ";
	char ferme[20] = " ";
	char anneereouv[20] = " ";
	char fermetureannuelle[255] = " ";
	char periodeouverture[255] = " ";

	// Ville -----------------
	char ville[255] = " ";

	// D�partement -----------
	char dep[255] = " ";

	// Region ----------------
	char region[255] = " ";

	char * data = NULL;
	data = calloc(data + 255, sizeof(char));

	//Fonction d'affichage du tableau de Mus�es
	//AfficherMusee(tabMusee, &nbMusee);

	printf("Entrer le num�ro du mus�e choisi : \n");
	scanf("%d", &idMus);
	system("cls");
	idVil = tabMusee[idMus].idVille;
	idDep = tabVille[idVil].idDepartement;
	idReg = tabDepartement[idDep].idRegion;
	
	printf("Le musee que vous avez choisi est le :\n");
	printf("**************************************\n");
	printf("\n%s \n\nAdresse : %s \n\nCP : %s\n\nVille :  %s\n\nDepartement : %s\n\nRegion : %s\n", tabMusee[idMus].nom, tabMusee[idMus].adresse, tabMusee[idMus].cp, tabVille[idVil].nom, tabDepartement[idDep].nom, tabRegion[idReg].nom);
	system("pause");

	//************************************************************
	printf("Saisissez la nouveau Musee :\n");
	scanf("%s",musee);
	strcpy(tabMusee[idMus].nom, musee);

	//************************************************************
	printf("Saisissez la nouvelle adresse :\n");
	scanf("%s", adresse);
	strcpy(tabMusee[idMus].adresse, adresse);

	//************************************************************
	printf("Saisissez le nouceau Code Postal :\n");
	scanf("%s", cp);
	strcpy(tabMusee[idMus].cp, cp);

	//************************************************************
	printf("Saisissez la nouvelle Ville :\n");
	scanf("%s", ville);
	strcpy(tabVille[idVil].nom, ville);

	//************************************************************
	printf("Saisissez le departement :\n");
	scanf("%s", dep);
	strcpy(tabDepartement[idDep].nom, dep);

	//************************************************************
	printf("Saisissez la Region :\n");
	scanf("%s", region);
	strcpy(tabRegion[idReg].nom, region);

	//************************************************************
	printf("Saisissez le Site Web :\n");
	scanf("%s", siteweb);
	strcpy(tabMusee[idMus].siteweb, siteweb);

	//************************************************************
	printf("Saisissez son annee d'ouverture :\n");
	scanf("%s", anneereouv);
	strcpy(tabMusee[idMus].anneereouv, anneereouv);

	//************************************************************
	printf("Saisissez s'il il est ferme (OUI = Ferme / NON = Ouvert) :\n");
	scanf("%s", ferme);
	strcpy(ferme, tabMusee[idMus].ferme, ferme);
	
	//************************************************************
	printf("Saisissez la P�riode de fermeture annuelle :\n");
	scanf("%s", fermetureannuelle);
	strcpy(tabMusee[idMus].fermetureannuelle, fermetureannuelle);

	//************************************************************
	printf("Saisissez la Periode d'ou ouverture :\n");
	scanf("%s", periodeouverture);
	strcpy(tabMusee[idMus].periodeouverture, periodeouverture);

	system("pause");
	printf("Voici le nouveau musee :\n");
	printf("************************\n");
	printf("\n%s \n\nAdresse : %s \n\nCP : %s\n\nVille :  %s\n\nDepartement : %s\n\nRegion : %s\n", tabMusee[idMus].nom, tabMusee[idMus].adresse, tabMusee[idMus].cp, tabVille[idVil].nom, tabDepartement[idDep].nom, tabRegion[idReg].nom);
	system("pause");
	system("pause");
}