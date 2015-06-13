#include "Region.h"
#include "Departement.h"
#include "Ville.h"
#include "Musee.h"

#include "AfficherTableaux.h"

#include <stdio.h>
#include <stdlib.h>

void AfficherTab(Region* tabRegions, Departement* tabDepartement, Ville* tabVille, Musee* tabMusee, int* numRegion, int* numDep, int* numVille, int* numMusee)
{
	int i = 0;

	for (i = 0; i < numRegion; i++)
	{
		printf("%d - %s\n", tabRegions[i].id, tabRegions[i].nom);
	}
}