#include "Departement.h"

#ifndef VILLE
#define VILLE

typedef struct Ville Ville;

struct Ville
{
	int id;
	char nom[255];
	int idDepartement;
};

#endif