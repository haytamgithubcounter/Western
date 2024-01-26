#pragma once
#include <iostream>
using namespace std;
class Humain
{
protected:
	string nom;
	string boissonFavorite;

public:
	Humain(const string _nom = "", const string _boissonFavorite = "eau");
	void sePresente();
	void setBoissonFavorite(const string bF);
	void boit();
	string getNom();
	string getBoissonFavorite();

};

