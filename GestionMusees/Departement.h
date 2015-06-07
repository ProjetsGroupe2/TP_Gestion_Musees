#ifndef DEPARTEMENT
#define DEPARTEMENT

typedef struct Departement Departement;

struct Departement
{
	int id;
	char nom[255];
	int idRegion;
};
#endif