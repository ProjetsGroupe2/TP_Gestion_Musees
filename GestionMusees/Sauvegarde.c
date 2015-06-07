#include <stdio.h>
#include <stdlib.h>
#include "Musee.h"

int creationFichier()
{
	// Code à remplacer par la vraie liste
	Musee* tabMusees;
	tabMusees = malloc(sizeof(Musee)* 2);
	// Faux musee 1
	strcpy((tabMusees)->nom, "Musee 1");
	(tabMusees)->anneereouv = 2012;
	
	// Faux musee 2
	strcpy((tabMusees + 1)->nom, "Musee 2");

	system("cls");
	printf("1 - Afficher le fichier");

	FILE* fichier = NULL;
	fichier = fopen("biblio.csv", "w+");

	if (fichier == NULL)
	{
		return 0;
	}
	else
	{
		char line[500];
		strcpy(line, "NOMREG;NOMDEP;FERME;ANNREOUV;NOM DU MUSEE;ADR;CP;VILLE;SITWEB;FERMETURE ANNUELLE;PERIODE OUVERTURE\n");

		fputs(line, fichier);

		for (int i = 0; i < 2; i++)
		{
			strcpy(line, (tabMusees + i)->nom);
			strcat(line, ";");

			strcat(line, "\n");
			fputs(line, fichier);
		}

		fclose(fichier);
		system("pause>nul");
		return 1;
		
	}

}