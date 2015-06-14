#include <stdio.h>
#include <stdlib.h>

#include "Ajouter.h"


void AjouterMusee() 
{
	// Chaine de caractère pour récupérer la ligne en entier
	char line[500] = " ";

	// Musee -----------------
	char musee[255] = " ";
	char adresse[255] = " ";
	char cp[10] = " ";
	char siteweb[255] = " ";
	char ferme[20] = " ";
	char anneereouv[20] = " ";
	char fermetureannuelle[255] = " ";
	char periodeouverture[255] = " ";

	// Ville -----------------
	char ville[255] = " ";

	// Département -----------
	char dep[255] = " ";

	// Region ----------------
	char region[255] = " ";
	
	

	
	FILE * fichier = NULL;
	fichier = fopen("biblio.csv", "a+"); // Ouvre le fichier 

	// Verifie si le fichier s'est bien ouvert
	if (fichier == NULL)
	{
		printf("Erreur lors de l'ouverture du fichier personnes.csv");
	}
	else
	{
		printf("Entrer le nom d'un nouveau musee : \n");
		gets(musee);									// La fonction gets() récupère la chaine de caractère  
														// et la met dans une variable de type char même avec les espaces
		printf("Entrer son adresse : \n");
		gets(adresse);

		printf("Entrer sa ville : \n");
		gets(ville);

		printf("Entrer son code postal : \n");
		gets(cp);

		printf("Entrer son site web : \n");
		gets(siteweb);

		printf("Est-il fermé? (OUI / NON) : \n");
		gets(ferme);

		printf("En quelle année reouvre-t'il? : \n");
		gets(anneereouv);

		printf("Quelles sont les périodes de fermeture? : \n");
		gets(fermetureannuelle);

		printf("Quelles sont les périodes d'ouverture? : \n");
		gets(periodeouverture);

		printf("Entrer le nom du département ou il se situe : \n");
		gets(dep);

		printf("Entrer le nom de la région ou il se situe : \n");
		gets(region);

		strcpy(line, region);						// Copie la chaine de la première colonne dans la chaine line
		strcat(line, ";");							// Concaténation avec ";" pour sinifier le passage à la colonne suivante
		strcat(line, dep);							// Concaténation de la chaine suivante et ainsi de suite...
		strcat(line, ";");
		strcat(line, ville);
		strcat(line, ";");
		strcat(line, musee);
		strcat(line, ";");
		strcat(line, adresse);
		strcat(line, ";");
		strcat(line, cp);
		strcat(line, ";");
		strcat(line, anneereouv);
		strcat(line, ";");
		strcat(line, ferme);
		strcat(line, ";");
		strcat(line, siteweb);
		strcat(line, ";");
		strcat(line, fermetureannuelle);
		strcat(line, ";");
		strcat(line, periodeouverture);
		strcat(line, "\n");
		fputs(line, fichier);
		
		fclose(fichier);
	}
}

