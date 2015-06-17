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

	printf(" /!\\ Chercher l'index du mus%lce %lc supprimer /!\\ \n", 130, 133);
	AfficherMusee(tabMusee, nbMusees);
	printf("Saisissez l'index du mus%lce %lc supprimer : \n", 130, 133);
	scanf("%d", &idMus);

	idVil = tabMusee[idMus].idVille;
	idDep = tabVille[idVil].idDepartement;
	idReg = tabDepartement[idDep].idRegion;


	strcpy(tabMusee[idVil].adresse, "");
	strcpy(tabMusee[idVil].anneereouv, "");
	strcpy(tabMusee[idVil].cp, "");
	strcpy(tabMusee[idVil].ferme, "");
	strcpy(tabMusee[idVil].fermetureannuelle, "");
	strcpy(tabMusee[idVil].nom, "");
	strcpy(tabMusee[idVil].periodeouverture, "");
	strcpy(tabMusee[idVil].siteweb, "");


	strcpy(tabVille[idDep].nom, "");
	strcpy(tabDepartement[idReg].nom, "");
	strcpy(tabRegion[tabRegion[idReg].id].nom, "");

	printf("\n%s %s %s %s %s %s %s %s %s %s %s", tabMusee[idVil].adresse, tabMusee[idVil].anneereouv, tabMusee[idVil].cp, tabMusee[idVil].ferme, tabMusee[idVil].fermetureannuelle, tabMusee[idVil].nom, tabMusee[idVil].periodeouverture, tabMusee[idVil].siteweb, tabVille[idDep].nom, tabDepartement[idReg].nom, tabRegion[idReg].nom);
	system("pause");
}