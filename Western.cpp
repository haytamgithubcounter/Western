// Western.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include "Humain.h"
#include "Cowboy.h"
#include "Dame.h"
#include "Brigand.h"
using namespace std;
//1ere partie du TP
int main()
{
	//1ere partie du TP
/*
	Humain lucky("Lucky Luke", "coca-cola");
	cout << "Une histoire sur "<< lucky.getNom() << endl;
	lucky.sePresente();
	lucky.boit();

	Humain* joe = new Humain("Joe");
	cout << "Une Histoire sur " << joe->getNom() << endl;
	joe->setBoissonFavorite("Whysky");
	joe->sePresente();
	joe->boit();
	joe->boit();
	return 0;*/
/*
	//2eme partie du TP 
	Cowboy lucky("Lucky Luke");
	Dame jenny("Jenny");

	//1. La rencontre
	lucky.sePresente();
	jenny.sePresente();
	jenny.changeDeRobe("verte");
	lucky.boit();
	jenny.boit();
*/
     // troisieme partie du TP
		Cowboy lucky("Lucky Luke", "coca-cola");
		Dame jenny("Jenny");
		Brigand joe("Joe");
			// 1. La rencontre ...
		lucky.sePresente();
		jenny.sePresente();
		// 2. Mais un brigand arrive ...
		joe.sePresente();
		joe.kidnappe(jenny);
		// 3. Heureusement le cowboy s’interpose ...
		lucky.sePresente();
		joe.sePresente();
		lucky.tire(joe);
		lucky.emprisonne(joe);
		lucky.libere(jenny);
		return 0;
}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
