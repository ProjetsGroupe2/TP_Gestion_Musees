//#include <stdio.h>
//#include <stdlib.h>
//#include "Ville.h"
//#include "Region.h"
//#include "Musee.h"
//#include "Departement.h"
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
//		char chaine[TAILLE_MAX] = ""; // Chaîne vide de taille TAILLE_MAX
//		fichier = fopen("biblio.csv", "r+");
//		int ajout[4] = { 0 }; 
//
//		if (fichier != NULL)
//		{
//			fputs(fichier);
//			fscanf(fichier, "%d %d %d %d", &Nom, &Ville, &Departement, &Region);
//			printf("Les meilleurs scores sont : %d, %d et %d", Nom, Ville, Departement, Region);
//			while (fgets(chaine, TAILLE_MAX, fichier); // On lit maximum TAILLE_MAX caractères du fichier, on stocke le tout dans "chaine"
//			{
//				printf("%s", chaine); // On affiche la chaîne
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
