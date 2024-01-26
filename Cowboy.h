#pragma once
#include <iostream>
#include "Humain.h"
using namespace std;
class Cowboy : public Humain
{
private:
	string popularite;
public:
	Cowboy(const string _nom = "", const string _boissonFavorite = "Whysky", const string _popularite = "vaillant");
	void sePresente() const;
	string getNom() const;

};

