#pragma once
#include "Dame.h"
#include "Cowboy.h"
#include "Humain.h"
#include <iostream>
using namespace std;
class Dame;
class Cowboy;
class Brigand :
	public Humain
{
private:
	string comportement;
	int nbDamesEnlevees;
	int recompense;
	bool enPrison;
public:
	Brigand(const string nom = "", const string boissonFavorite = "tord-boyaux", const string comportement = " méchant ", bool enPrison=false, int nbDamesEnlevees=0, int recompense=0);
	string getComportement();
	int getNbDamesEnlevees();
	int getRecompense();
	string getNom();
	void sePresente();
	void kidnappe(Dame& dame);
	void seFaitEmprisonne(Cowboy& cowboy);
	void augmenteRecompense(const int prix = 100);
	void diminueRecompense(const int prix = 100);
	bool estEnPrison();
};

