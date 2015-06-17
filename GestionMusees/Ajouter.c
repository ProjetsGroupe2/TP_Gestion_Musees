#include <stdio.h>
#include <stdlib.h>

#include "Region.h"
#include "Departement.h"
#include "Ville.h"
#include "Musee.h"

#include "Ajouter.h"



void AjouterMusee(Region * tabRegion, Departement* tabDepartement, Ville* tabVille, Musee* tabMusee, int *nbRegion, int * nbDep, int * nbVille, int * nbMusee)
{

	char * data = calloc(255, sizeof(char));
	char dataName[255] = " ";

	int idRegion = 0;
	int idDepartement = 0;
	int idVille = 0;
	int idMusee = 0;

	int numRegion = *nbRegion;
	int numDep = *nbDep;
	int numVille = *nbVille;
	int numMusee = *nbMusee;
	int count = 1;


	FILE * fichier = NULL;
	fichier = fopen("biblio.csv", "a+"); // Ouvre le fichier 

	// Verifie si le fichier s'est bien ouvert
	if (fichier == NULL)
	{
		printf("Erreur lors de l'ouverture du fichier personnes.csv");
	}
	else
	{
		gets(data); // Pour éliminer une saisie fantôme :|
		system("cls");
		printf("Entrer le nom d'un nouveau mus%lce : \n", 130);
		gets(data);

		for (int i = 1; i < numMusee; i++)
		{
			if (strcmp(data, tabMusee[i].nom) != 0) // Si data == tabMusee[i].nom le musée existe deja
			{
				count++;
			}
			else
			{
				count = 1;
			}
		}
		if (count < numMusee - 1) // NumMusee - 1 -> index musée commence à 1
		{
			printf("Ce mus%lce existe d%lcj%lc!", 130, 130, 133);
		}
		else
		{
			numMusee++;
			tabMusee = realloc(tabMusee, (numMusee + 1) * sizeof(Musee));
			strcpy(tabMusee[numMusee].nom, data); // Le copier dans le la liste suivante au nouvel indice de fin
			tabMusee[numMusee].id = numMusee;
		
		}

		// ----------------------------------------------------------------------
		
		data[255] = "";
		printf("Entrer son adresse : \n");
		gets(data);

		strcpy(tabMusee[numMusee].adresse, data);

		// ----------------------------------------------------------------------
		data[255] = '\0';
		printf("Entrer sa ville : \n");
		gets(data);

		tabVille = realloc(tabVille, (numVille + 1) * sizeof(Ville)); // On rajoute une place en memoire
		strcpy(tabVille[numVille + 1].nom, data);                      // On ajoute data dans la nouvelle place mémoire
		tabVille[numVille + 1].id = numVille + 1;
	
		// ----------------------------------------------------------------------
		data[255] = '\0';
		printf("Entrer son code postal : \n");
		gets(data);

		strcpy(tabMusee[numMusee].cp, data);

		// ----------------------------------------------------------------------
		data[255] = '\0';
		printf("Entrer son site web : \n");
		gets(data);

		strcpy(tabMusee[numMusee].siteweb, data);

		// ----------------------------------------------------------------------
		data[255] = '\0';
		printf("Est-il ferm%lc ? (OUI / NON) : \n", 130);
		gets(data);

		strcpy(tabMusee[numMusee].ferme, data);

		// ----------------------------------------------------------------------
		data[255] = '\0';
		printf("En quelle ann%lce reouvre-t'il ? : \n", 130);
		gets(data);

		strcpy(tabMusee[numMusee].adresse, data);

		// ----------------------------------------------------------------------
		data[255] = '\0';
		printf("Quelles sont les p%lcriodes de fermeture annuelles? : \n", 130);
		gets(data);

		strcpy(tabMusee[numMusee].fermetureannuelle, data);

		// ----------------------------------------------------------------------
		data[255] = '\0';
		printf("Quelles sont les p%lcriodes d'ouverture? : \n", 130);
		gets(data);

		strcpy(tabMusee[numMusee].periodeouverture, data);

		// ----------------------------------------------------------------------
		data[255] = '\0';
		printf("Entrer le nom du d%lcpartement ou il se situe : \n", 130);
		gets(data);

		tabDepartement = realloc(tabDepartement, (numDep + 1) * sizeof(Departement)); // On rajoute une place en memoire
		strcpy(tabDepartement[numDep + 1].nom, data);						  // On ajoute data dans la nouvelle place mémoire
		tabDepartement[numDep + 1].id = numDep + 1;
	

		// ----------------------------------------------------------------------
		data[255] = '\0';
		printf("Entrer le nom de la r%lcgion ou il se situe : \n", 130);
		gets(data);

		tabRegion = realloc(tabRegion, (numRegion + 1) * sizeof(Region)); // On rajoute une place en memoire
		strcpy(tabRegion[numRegion + 1].nom, data);                         // On ajoute data dans la nouvelle place mémoire
		tabRegion[numDep + 1].id = numRegion + 1;

		tabDepartement[numDep].idRegion = numRegion + 1;
		tabVille[numVille].idDepartement = numDep;
		tabMusee[numMusee].idVille = numVille;

	fclose(fichier);
	}
}




//	 -------------------------------------------------------------
//	 - Autre solution qui enregistre directement dans le fichier -
//	 -------------------------------------------------------------
// //Chaine de caractère pour récupérer la ligne en entier
//char line[500] = " ";

//// Musee -----------------
//char musee[255] = " ";
//char adresse[255] = " ";
//char cp[10] = " ";
//char siteweb[255] = " ";
//char ferme[20] = " ";
//char anneereouv[20] = " ";
//char fermetureannuelle[255] = " ";
//char periodeouverture[255] = " ";

//// Ville -----------------
//char ville[255] = " ";

//// Département -----------
//char dep[255] = " ";

//// Region ----------------
//char region[255] = " ";
//
//


//	printf("Entrer le nom d'un nouveau musee : \n");
//	gets(musee);									// La fonction gets() récupère la chaine de caractère  
//													// et la met dans une variable de type char même avec les espaces
//	printf("Entrer son adresse : \n");
//	gets(adresse);

//	printf("Entrer sa ville : \n");
//	gets(ville);

//	printf("Entrer son code postal : \n");
//	gets(cp);

//	printf("Entrer son site web : \n");
//	gets(siteweb);

//	printf("Est-il fermé? (OUI / NON) : \n");
//	gets(ferme);

//	printf("En quelle année reouvre-t'il? : \n");
//	gets(anneereouv);

//	printf("Quelles sont les périodes de fermeture? : \n");
//	gets(fermetureannuelle);

//	printf("Quelles sont les périodes d'ouverture? : \n");
//	gets(periodeouverture);

//	printf("Entrer le nom du département ou il se situe : \n");
//	gets(dep);

//	printf("Entrer le nom de la région ou il se situe : \n");
//	gets(region);

//	strcpy(line, region);						// Copie la chaine de la première colonne dans la chaine line
//	strcat(line, ";");							// Concaténation avec ";" pour sinifier le passage à la colonne suivante
//	strcat(line, dep);							// Concaténation de la chaine suivante et ainsi de suite...
//	strcat(line, ";");
//	strcat(line, ville);
//	strcat(line, ";");
//	strcat(line, musee);
//	strcat(line, ";");
//	strcat(line, adresse);
//	strcat(line, ";");
//	strcat(line, cp);
//	strcat(line, ";");
//	strcat(line, anneereouv);
//	strcat(line, ";");
//	strcat(line, ferme);
//	strcat(line, ";");
//	strcat(line, siteweb);
//	strcat(line, ";");
//	strcat(line, fermetureannuelle);
//	strcat(line, ";");
//	strcat(line, periodeouverture);
//	strcat(line, "\n");
//	fputs(line, fichier);