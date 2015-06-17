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
	char anneereouv[255]; 
	char ferme[255];	   
	char siteweb[255];
	char fermetureannuelle[255];
	char periodeouverture[255];
};

#endif