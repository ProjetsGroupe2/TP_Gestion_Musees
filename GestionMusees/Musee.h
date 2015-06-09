#include "Ville.h"
#include "Ville.h"

#ifndef MUSEE
#define MUSEE

typedef struct Musee Musee;

struct Musee
{
	int id;
	char nom[255];
	int idVille;
	char adresse[255];
	char cp[10];
	int ferme;
	int anneereouv;
	char siteweb[255];
	char fermetureannuelle[255];
	char periodeouverture[255];

};

#endif