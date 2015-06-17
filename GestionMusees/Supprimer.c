#include <stdio.h>
#include <stdlib.h>

#include "Region.h"
#include "Departement.h"
#include "Ville.h"
#include "Musee.h"

#include "AfficherTableaux.h"
#include "Supprimer.h"



<<<<<<< HEAD
void Supprimer(Region* tabRegions, Departement* tabDepartement, Ville* tabVille, Musee* tabMusee, int *nbRegions, int * nbDep, int * nbVilles, int * nbMusees)
=======
int Supprimer(Region* tabRegion, Departement* tabDepartement, Ville* tabVille, Musee* tabMusee, int *nbRegions, int * nbDep, int * nbVilles, int * nbMusees)
>>>>>>> cfe240ad5fe319ff39d3b65dd7ceaffa35a9b46d
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
	char blanc = "";

	printf(" /!\\ Chercher l'index du musee a supprimer /!\\ \n");
	//AfficherMusee(tabMusee, &nbMusees);
	printf("Saisissez l'index du musee a supprimer : ");
	scanf("%d", &idMus);

	idVil = tabMusee[idMus].idVille;
	idDep = tabVille[idVil].idDepartement;
	idReg = tabDepartement[idDep].idRegion;
	tabRegion[idReg].id;

	strcpy(blanc, tabMusee[idVil].adresse);
	strcpy(blanc, tabMusee[idVil].anneereouv);
	strcpy(blanc, tabMusee[idVil].cp);
	strcpy(blanc, tabMusee[idVil].ferme);
	strcpy(blanc, tabMusee[idVil].fermetureannuelle);
	strcpy(blanc, tabMusee[idVil].nom);
	strcpy(blanc, tabMusee[idVil].periodeouverture);
	strcpy(blanc, tabMusee[idVil].siteweb);

	strcpy(blanc, tabVille[idDep].nom);
	strcpy(blanc, tabDepartement[idReg].nom);
	strcpy(blanc, tabRegion[tabRegion[idReg].id].nom);

	printf("\n%s %s %s %s %s %s %s %s %s %s", tabMusee[idVil].adresse, tabMusee[idVil].anneereouv, tabMusee[idVil].cp, tabMusee[idVil].ferme, tabMusee[idVil].fermetureannuelle, tabMusee[idVil].nom, tabMusee[idVil].periodeouverture, tabMusee[idVil].siteweb, tabVille[idDep].nom, tabDepartement[idReg].nom, tabRegion[tabRegion[idReg].id].nom);
	system("pause");
}