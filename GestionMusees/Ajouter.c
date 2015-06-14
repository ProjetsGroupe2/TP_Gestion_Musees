#include <stdio.h>
#include <stdlib.h>

#include "Ajouter.h"


void AjouterMusee() //  /!\ Quentin voil� la fonction AjouterMusee() finale pas besoin d'y retoucher /!\ 
{
	// Chaine de caract�re pour r�cup�rer la ligne en entier
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

	// D�partement -----------
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
		gets(musee);									// La fonction gets() r�cup�re la chaine de caract�re  
														// et la met dans une variable de type char m�me avec les espaces
		printf("Entrer son adresse : \n");
		gets(adresse);

		printf("Entrer sa ville : \n");
		gets(ville);

		printf("Entrer son code postal : \n");
		gets(cp);

		printf("Entrer son site web : \n");
		gets(siteweb);

		printf("Est-il ferm�? (OUI / NON) : \n");
		gets(ferme);

		printf("En quelle ann�e reouvre-t'il? : \n");
		gets(anneereouv);

		printf("Quelles sont les p�riodes de fermeture? : \n");
		gets(fermetureannuelle);

		printf("Quelles sont les p�riodes d'ouverture? : \n");
		gets(periodeouverture);

		printf("Entrer le nom du d�partement ou il se situe : \n");
		gets(dep);

		printf("Entrer le nom de la r�gion ou il se situe : \n");
		gets(region);

		strcpy(line, region);						// Copie la chaine de la premi�re colonne dans la chaine line
		strcat(line, ";");							// Concat�nation avec ";" pour sinifier le passage � la colonne suivante
		strcat(line, dep);							// Concat�nation de la chaine suivante et ainsi de suite...
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
/*************************
 *
 * Code �crit par Quentin
 *
 *************************/
// 
//
//void AjouterMusee(int* Region, int* Departement, int* Ville, int* Nom)
//{
//	FILE* fopen(const char* nomDuFichier, const char* modeOuverture);
//	char* fputs(const char* chaine, FILE* pointeurSurFichier);
//	char* fgets(char* chaine, int nbreDeCaracteresALire, FILE* pointeurSurFichier);
//
//	#define TAILLE_MAX 1000 
//
//	int main(int argc, char *argv[])
//	{
//		FILE* fichier = NULL;
//		char chaine[TAILLE_MAX] = ""; // Cha�ne vide de taille TAILLE_MAX
//		fichier = fopen("biblio.csv", "r+");
//		int ajout[4] = { 0 }; 
//
//		if (fichier != NULL)
//		{
//			fputs(fichier);
//			fscanf(fichier, "%d %d %d %d", &Nom, &Ville, &Departement, &Region);
//			printf("Les meilleurs scores sont : %d, %d et %d", Nom, Ville, Departement, Region);
//			while (fgets(chaine, TAILLE_MAX, fichier); // On lit maximum TAILLE_MAX caract�res du fichier, on stocke le tout dans "chaine"
//			{
//				printf("%s", chaine); // On affiche la cha�ne
//			}
//			fclose(fichier);
//	
//		}
//		else
//		{
//			// On affiche un message d'erreur si on veut
//			printf("Impossible d'ouvrir le fichier test.txt");
//	
//		}
//
//		return 0;
//	}
//}
//
