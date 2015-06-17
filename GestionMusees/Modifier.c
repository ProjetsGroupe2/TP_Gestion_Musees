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
	char cp[255] = " ";
	char siteweb[255] = " ";
	char ferme[255] = " ";
	char anneereouv[255] = " ";
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

	system("cls");
	//Fonction d'affichage du tableau de Musées
	AfficherMusee(tabMusee, nbMusee);

	printf("\n");
	printf("Entrer le num%lcro du musée choisi : \n", 130);
	scanf("%d", &idMus);
	system("cls");
	idVil = tabMusee[idMus].idVille;			// Correspondance des id des structure
	idDep = tabVille[idVil].idDepartement;
	idReg = tabDepartement[idDep].idRegion;
	
	printf("\n");
	printf("Le musee que vous avez choisi est le :\n");
	printf("**************************************\n");
	printf("\n%s \n\nAdresse : %s \n\nCP : %s\n\nVille :  %s\n\nDepartement : %s\n\nRegion : %s\n\n", tabMusee[idMus].nom, tabMusee[idMus].adresse, tabMusee[idMus].cp, tabVille[idVil].nom, tabDepartement[idDep].nom, tabRegion[idReg].nom);
	system("pause");
	printf("\n");
	//************************************************************
	printf("Saisissez le nom du nouveau Mus%lce :\n", 130);
	scanf("%s",musee);
	strcpy(tabMusee[idMus].nom, musee);
	system("cls");

	//************************************************************
	printf("Saisissez la nouvelle adresse :\n");
	scanf("%s", adresse);
	strcpy(tabMusee[idMus].adresse, adresse);
	system("cls");

	//************************************************************
	printf("Saisissez le nouveau Code Postal :\n");
	scanf("%s", cp);
	strcpy(tabMusee[idMus].cp, cp);
	system("cls");

	//************************************************************
	printf("Saisissez la nouvelle Ville :\n");
	scanf("%s", ville);
	strcpy(tabVille[idVil].nom, ville);
	system("cls");

	//************************************************************
	printf("Saisissez le d%lcpartement :\n", 130);
	scanf("%s", dep);
	strcpy(tabDepartement[idDep].nom, dep);
	system("cls");

	//************************************************************
	printf("Saisissez la R%lcgion :\n", 130);
	scanf("%s", region);
	strcpy(tabRegion[idReg].nom, region);
	system("cls");

	//************************************************************
	printf("Saisissez le Site Web :\n");
	scanf("%s", siteweb);
	strcpy(tabMusee[idMus].siteweb, siteweb);
	system("cls");

	//************************************************************
	printf("Saisissez son ann%lce d'ouverture :\n", 130);
	scanf("%s", anneereouv);
	strcpy(tabMusee[idMus].anneereouv, anneereouv);
	system("cls");

	//************************************************************
	printf("Saisissez s'il est ferm%lc (OUI = Ferme / NON = Ouvert) :\n", 130);
	scanf("%s", ferme);
	strcpy(ferme, tabMusee[idMus].ferme, ferme);
	system("cls");

	//************************************************************
	printf("Saisissez la P%lcriode de fermeture annuelle :\n", 130);
	scanf("%s", fermetureannuelle);
	strcpy(tabMusee[idMus].fermetureannuelle, fermetureannuelle);
	system("cls");

	//************************************************************
	printf("Saisissez la P%lcriode d'ou ouverture :\n", 130);
	scanf("%s", periodeouverture);
	strcpy(tabMusee[idMus].periodeouverture, periodeouverture);
	system("cls");

	system("pause");
	printf("\n");
	printf("Voici le nouveau mus%lce :\n", 130);
	printf("************************\n");
	printf("\n%s \n\nAdresse : %s \n\nCP : %s\n\nVille :  %s\n\nD%lcpartement : %s\n\nR%lcgion : %s\n", tabMusee[idMus].nom, tabMusee[idMus].adresse, tabMusee[idMus].cp, tabVille[idVil].nom, tabDepartement[idDep].nom, tabRegion[idReg].nom);
	system("pause");
	system("cls");
}