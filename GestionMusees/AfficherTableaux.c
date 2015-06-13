#include <stdio.h>
#include <stdlib.h>

#include "Region.h"
#include "Departement.h"
#include "Ville.h"
#include "Musee.h"

#include "AfficherTableaux.h"




void AfficherTab(Region* tabRegions, Departement* tabDepartement, Ville* tabVille, Musee* tabMusee, int* numRegion, int* numDep, int* numVille, int* numMusee)
{
	int i = 0;

	int nbRegion = 0;
	nbRegion = *numRegion;


	for (i = 0; i < nbRegion; i++)
	{
		printf("%d - %s\n", tabRegions[i].id, tabRegions[i].nom);
	}
}