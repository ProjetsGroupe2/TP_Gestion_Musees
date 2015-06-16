#include <stdio.h>
#include <stdlib.h>

#include "Region.h"
#include "Departement.h"
#include "Ville.h"
#include "Musee.h"

#include "AfficherTableaux.h"
#include "Supprimer.h"



int Supprimer(Region* tabRegions, Departement* tabDepartement, Ville* tabVille, Musee* tabMusee, int *nbRegions, int * nbDep, int * nbVilles, int * nbMusees)
{
	int choix = 0;

	AfficherMusee(tabMusee, &nbMusees);
	printf("Saisissez l'index du musee a supprimer : ");
	scanf("%d", choix);


}