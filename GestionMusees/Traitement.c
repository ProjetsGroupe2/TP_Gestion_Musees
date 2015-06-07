#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Region.h"
#include "Departement.h"
#include "Musee.h"
#include "Ville.h"

#include "Traitement.h"


int CompareRegions(Region * tabregion, char* region, int nbRegion)
{
	for (int i= 0; i <= nbRegion; i++)
	{
		if (strcmp(tabregion[i].nom, region) == 0)
		{
			return tabregion[i].id;
		}
	}
	return 0;
}