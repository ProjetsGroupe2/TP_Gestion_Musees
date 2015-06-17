#include <stdio.h>
#include <stdlib.h>

#include "Region.h"
#include "Departement.h"
#include "Ville.h"
#include "Musee.h"

#include "AfficherTableaux.h"
#include "Supprimer.h"




void Supprimer(Region* tabRegion, Departement* tabDepartement, Ville* tabVille, Musee* tabMusee, int *nbRegions, int * nbDep, int * nbVilles, int * nbMusees)

{

	int numRegion = *nbRegions;
	int numDep = *nbDep;
	int numVille = *nbVilles;
	int numMusee = *nbMusees;

	int idMus = 0;
	int idVil = 0;
	int idReg = 0;
	int idDep = 0;

	int choix = 0;
	char blanc[255] = "";

	system("cls");
	printf("\n");
	printf(" /!\\ Chercher l'index du mus%lce %lc supprimer /!\\ \n\n", 130, 133);
	AfficherMusee(tabMusee, nbMusees);
	printf("Saisissez l'index du mus%lce %lc supprimer : \n", 130, 133);
	scanf("%d", &idMus);
	printf("\n");

	idVil = tabMusee[idMus].idVille;
	idDep = tabVille[idVil].idDepartement;
	idReg = tabDepartement[idDep].idRegion;


	// **************************************************
	if (strcpy(tabMusee[idVil].adresse, ""))
	{

		printf("Adresse vide\n");

	}
	else
	{
		printf("Erreur, adresse non vide\n");
	}

	// **************************************************
	if (strcpy(tabMusee[idVil].anneereouv, ""))
	{
		printf("anneereouv vide\n");
	}
	else
	{
		printf("Erreur, anneereouv non vide\n");
	}

	// **************************************************
	if (strcpy(tabMusee[idVil].cp, ""))
	{
		printf("cp vide\n");
	}
	else
	{
		printf("Erreur, cp non vide\n");
	}

	// **************************************************
	if (strcpy(tabMusee[idVil].ferme, ""))
	{
		printf("ferme? vide\n");
	}
	else
	{
		printf("Erreur, ferme non vide\n");
	}
	
	// **************************************************
	if (strcpy(tabMusee[idVil].fermetureannuelle, ""))
	{
		printf("fermeture annuelle vide\n");
	}
	else
	{
		printf("Erreur, fermeture annuelle non vide\n");
	}

	// **************************************************
	if (strcpy(tabMusee[idVil].nom, ""))
	{
		printf("nom du musee vide\n");
	}
	else
	{
		printf("Erreur, nom du musee non vide\n");
	}
	
	// **************************************************
	if (strcpy(tabMusee[idVil].periodeouverture, ""))
	{
		printf("periode d'ouverture vide\n");
	}
	else
	{
		printf("Erreur, periode d'ouverture non vide\n");
	}
	
	// **************************************************
	if (strcpy(tabMusee[idVil].siteweb, ""))
	{
		printf("siteweb vide\n");
	}
	else
	{
		printf("Erreur, siteweb non vide\n");
	}

	// **************************************************
	if (strcpy(tabVille[idDep].nom, ""))
	{
		printf("nom de la ville vide\n");
	}
	else
	{
		printf("Erreur, nom de la ville non vide\n");
	}
	
	// **************************************************
	if (strcpy(tabDepartement[idReg].nom, ""))
	{
		printf("nom du departement vide\n");
	}
	else
	{
		printf("Erreur, nom du departement non vide\n");
	}
	
	// **************************************************
	if (strcpy(tabRegion[tabRegion[idReg].id].nom, ""))
	{
		printf("nom de la region vide\n");
	}
	else
	{
		printf("Erreur, nom de la region vide non vide\n");
	}

	// **************************************************

	system("pause");
	system("cls");
}