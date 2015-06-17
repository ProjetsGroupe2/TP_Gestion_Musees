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

	// Département -----------
	char dep[255] = " ";

	// Region ----------------
	char region[255] = " ";

	char * data = NULL;
	data = calloc(data + 255, sizeof(char));

	//Fonction d'affichage du tableau de Musées
	//AfficherMusee(tabMusee, &nbMusee);

	printf("Entrer le num%lcro du musée choisi : \n", 130);
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
	printf("Saisissez la nouveau Mus%lce :\n", 130);
	scanf("%s",musee);
	strcpy(tabMusee[idMus].nom, musee);

	//************************************************************
	printf("Saisissez la nouvelle adresse :\n");
	scanf("%s", adresse);
	strcpy(tabMusee[idMus].adresse, adresse);

	//************************************************************
	printf("Saisissez le nouveau Code Postal :\n");
	scanf("%s", cp);
	strcpy(tabMusee[idMus].cp, cp);

	//************************************************************
	printf("Saisissez la nouvelle Ville :\n");
	scanf("%s", ville);
	strcpy(tabVille[idVil].nom, ville);

	//************************************************************
	printf("Saisissez le d%lcpartement :\n", 130);
	scanf("%s", dep);
	strcpy(tabDepartement[idDep].nom, dep);

	//************************************************************
	printf("Saisissez la R%lcgion :\n", 130);
	scanf("%s", region);
	strcpy(tabRegion[idReg].nom, region);

	//************************************************************
	printf("Saisissez le Site Web :\n");
	scanf("%s", siteweb);
	strcpy(tabMusee[idMus].siteweb, siteweb);

	//************************************************************
	printf("Saisissez son ann%lce d'ouverture :\n", 130);
	scanf("%s", anneereouv);
	strcpy(tabMusee[idMus].anneereouv, anneereouv);

	//************************************************************
	printf("Saisissez s'il est ferm%lc (OUI = Ferme / NON = Ouvert) :\n", 130);
	scanf("%s", ferme);
	strcpy(ferme, tabMusee[idMus].ferme, ferme);
	
	//************************************************************
	printf("Saisissez la P%lcriode de fermeture annuelle :\n", 130);
	scanf("%s", fermetureannuelle);
	strcpy(tabMusee[idMus].fermetureannuelle, fermetureannuelle);

	//************************************************************
	printf("Saisissez la P%lcriode d'ou ouverture :\n", 130);
	scanf("%s", periodeouverture);
	strcpy(tabMusee[idMus].periodeouverture, periodeouverture);

	system("pause");
	printf("Voici le nouveau mus%lce :\n", 130);
	printf("************************\n");
	printf("\n%s \n\nAdresse : %s \n\nCP : %s\n\nVille :  %s\n\nD%lcpartement : %s\n\nR%lcgion : %s\n", 130 , 130, tabMusee[idMus].nom, tabMusee[idMus].adresse, tabMusee[idMus].cp, tabVille[idVil].nom, tabDepartement[idDep].nom, tabRegion[idReg].nom);
	system("pause");
	system("pause");
}