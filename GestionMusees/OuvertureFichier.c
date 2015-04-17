#include <stdio.h>
#include <stdlib.h>


void ouvertureFichier()
{
	FILE* fichier = NULL;
	fichier = fopen("biblio.csv", "r+");

	if (fichier == NULL)
	{
		printf("Erreur lors de l'ouverture du fichier personnes.csv");
	}
	else
	{
		printf("Le fichier a bien ete cree");
	}

}
