// Nom du projet : TP_premier_prog
// Nom de l’auteur : AUGER Kyllian
// Date de création :  09 septembre 2024 
// Révision ou version : (facultatif pour les TPs) 
// Version du compilateur : (facultatif) 
// Résumé : Permet d'executer un message "Votre premier programme" 

#include <stdio.h>
#include <conio.h> 
#include <stdlib.h>
#include <iostream>
int main()
{
	int nbCara = 0 ;
	int jour, mois, annee;
	int nbHex;
	using namespace std; 
	std::cin >> nbCara; 

	printf("Votre premier programme\n");
	//printf("\nSection %s promotion %d\n", "CIEL", 2026);
//	printf("\nLe point de fusion du mercure est de %F \xF8 C \n soit environ %F \xF8 C \n", 38.842, -38.842); 	 //permet d'afficher la température du mercure
	//printf("Total : %d \n ", printf("Premier programme\n"));
//	nbCara = printf("Premier programme\n") - 1;
//	printf("Le nombre de caractere:  %d\n", nbCara);



//	scanf_s("%i %i %i", &jour, &mois, &annee);
//	char c; 
//	while ((c = getchar()) != '\n' && c != EOF)
//	scanf_s("%i %i %i", &jour, &mois, &annee);
//	while ((c = getchar()) != '\n' && c != EOF)
//	scanf_s("%i %i %i", &jour, &mois, &annee);
//	while ((c = getchar()) != '\n' && c != EOF)
//printf("Date : %i / %i / %i \n", jour, mois, annee);
	




//	char nomSaisi[10];
//	char prenomSaisi[10];
//	int ageSaisi, nbHex;
//	printf("Entrer votre nom: ");
//	scanf_s("%9s", nomSaisi, _countof(nomSaisi));
//	printf("Entrer votre Prenom : ");
//	scanf_s("%9s", prenomSaisi, _countof(prenomSaisi));
//	printf("Entrer votre age: ");
//	scanf_s("%d", &ageSaisi);
//	printf("Mr. %s %s a %d ans\n", nomSaisi, prenomSaisi, ageSaisi); 


	printf("Entrer un nombre en hexadecimal : ");   // Affichage Console pour tapez un nombre
	scanf_s("%x", &nbHex);     //le scanf_s lit les données 
	printf("Vous avez saisi %#x (%d).\n", nbHex, nbHex);   //Sort la conversion en exadéciamel
	_getch();

	return(0);
}
