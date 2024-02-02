#pragma once
#include <iostream>
#include "Humain.h"
#include "Brigand.h"
#include "Dame.h"
using namespace std;
class Brigand;
class Dame;
class Cowboy : public Humain
{
private:
	string qualite;
	int popularite;
public:
	Cowboy(const string _nom = "", const string _boissonFavorite = "Whysky", int _popularite = 1);
	void sePresente() const;
	string getNom() const;
	int getPopularite();
	void setPopularite(const int popularite);
	string getQualite();
	void setQualite(const string qualite);
	void incrementePopularite();
	void decrementePopularite();
	void tire(const Brigand& brigand);
	void emprisonne(Brigand& brigand);
	void libere(Dame& dame);
};

