#include <stdio.h>
#include <stdlib.h>


void ouvertureFichier()
{	
	char lettre = " ";
	FILE* fichier = NULL;
	fichier = fopen("biblio.csv", "r+");

	// Verifie si le fichier s'est bien ouvert
	if (fichier == NULL)
	{
		printf("Erreur lors de l'ouverture du fichier personnes.csv");
	}
	
	// Affiche le fichier
	else
	{
		printf("Le fichier a bien ete cree \n ");
		
		lettre = fgetc(fichier);
		do
		{
			lettre = fgetc(fichier);
			printf("%c", lettre);
		} while (lettre != EOF);


	}

}
