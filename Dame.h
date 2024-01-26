#pragma once
#include <iostream>
#include "Humain.h"
using namespace std;
class Dame : public Humain
{
private:
	string couleurRobe;
	string etat;
public:
	Dame(const string _nom = "", const string _boissonFavorite = "lait", const string _couleurRobe = "blanche");
	string getEtat() const;
	void changeDeRobe(const string _couleurRobe);
	void sePresente() const;
	string getNom() const;
};

