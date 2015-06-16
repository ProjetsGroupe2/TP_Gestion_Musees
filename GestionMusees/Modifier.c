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

	int idMusee = 0;
	int idVille = 0;
	int idRegion = 0;
	int idDepartement = 0;

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

	// Département -----------
	char dep[255] = " ";

	// Region ----------------
	char region[255] = " ";

	char * data = NULL;
	data = calloc(data + 255, sizeof(char));

	//Fonction d'affichage du tableau de Musées
	//AfficherMusee(tabMusee, &nbMusee);

	printf("Entrer le numéro du musée choisi : \n");
	scanf("%d", &idMusee);
	system("cls");
	idVille = tabMusee[idMusee].idVille;
	idDepartement = tabVille[idVille].idDepartement;
	idRegion = tabDepartement[idDepartement].idRegion;
	
	printf("Le musee que vous avez choisi est le :\n");
	printf("**************************************\n");
	printf("\n%s \n\nAdresse : %s \n\nCP : %s\n\nVille :  %s\n\nDepartement : %s\n\nRegion : %s\n", tabMusee[idMusee].nom, tabMusee[idMusee].adresse, tabMusee[idMusee].cp, tabVille[idVille].nom, tabDepartement[idDepartement].nom, tabRegion[idRegion].nom);
	system("pause");

	//************************************************************
	printf("Saisissez la nouveau Musee :\n");
	scanf("%s",musee);
	strcpy(tabMusee[idMusee].nom, musee);

	//************************************************************
	printf("Saisissez la nouvelle adresse :\n");
	scanf("%s", adresse);
	strcpy(tabMusee[idMusee].adresse, adresse);

	//************************************************************
	printf("Saisissez le nouceau Code Postal :\n");
	scanf("%s", cp);
	strcpy(tabMusee[idMusee].cp, cp);

	//************************************************************
	printf("Saisissez la nouvelle Ville :\n");
	scanf("%s", ville);
	strcpy(tabVille[idVille].nom, ville);

	//************************************************************
	printf("Saisissez le departement :\n");
	scanf("%s", dep);
	strcpy(tabDepartement[idDepartement].nom, dep);

	//************************************************************
	printf("Saisissez la Region :\n");
	scanf("%s", region);
	strcpy(tabRegion[idRegion].nom, region);

	//************************************************************
	printf("Saisissez le Site Web :\n");
	scanf("%s", siteweb);
	strcpy(tabMusee[idMusee].siteweb, siteweb);

	//************************************************************
	printf("Saisissez son annee d'ouverture :\n");
	scanf("%s", anneereouv);
	strcpy(tabMusee[idMusee].anneereouv, anneereouv);

	//************************************************************
	printf("Saisissez s'il il est ferme (OUI = Ferme / NON = Ouvert) :\n");
	scanf("%s", ferme);
	strcpy(ferme, tabMusee[idMusee].ferme, ferme);
	
	//************************************************************
	printf("Saisissez la Période de fermeture annuelle :\n");
	scanf("%s", fermetureannuelle);
	strcpy(tabMusee[idMusee].fermetureannuelle, fermetureannuelle);

	//************************************************************
	printf("Saisissez la Periode d'ou ouverture :\n");
	scanf("%s", periodeouverture);
	strcpy(tabMusee[idMusee].periodeouverture, periodeouverture);

	system("pause");
	printf("Voici le nouveau musee :\n");
	printf("************************\n");
	printf("\n%s \n\nAdresse : %s \n\nCP : %s\n\nVille :  %s\n\nDepartement : %s\n\nRegion : %s\n", tabMusee[idMusee].nom, tabMusee[idMusee].adresse, tabMusee[idMusee].cp, tabVille[idVille].nom, tabDepartement[idDepartement].nom, tabRegion[idRegion].nom);
	system("pause");
	system("pause");
}