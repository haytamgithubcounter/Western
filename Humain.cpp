#include "Humain.h"
#include <iostream>
using namespace std;
Humain::Humain(const string _nom, const string _boissonFavorite)
{
	nom = _nom;
	boissonFavorite = _boissonFavorite;
}

void Humain::sePresente()
{
	cout << " Bonjour je m'appelle " << getNom() << " et ma boisson favorite est "<< getBoissonFavorite() << " GLOUPS!" << endl;
}

void Humain::setBoissonFavorite(const string bF)
{
	boissonFavorite = bF;
}

void Humain::boit()
{
	cout << " ( "<<nom<<" ) -- "<< "Ah un bon vert de" << boissonFavorite << " ! GLOUPS ! "<<endl;

}

string Humain::getNom()
{
	return nom;
}

string Humain::getBoissonFavorite()
{
	return boissonFavorite;
}
