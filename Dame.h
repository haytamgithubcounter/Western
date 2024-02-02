#pragma once
#include <iostream>
#include "Humain.h"
#include "Cowboy.h"
using namespace std;
class Cowboy;
class Brigand;
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
	void seFaitKidnapper();
	void seFaitLiberer(Cowboy& cowboy);
	void hurle();
	void remercie(const Cowboy& heros);
};

