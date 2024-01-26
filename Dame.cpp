#include "Dame.h"
#include <iostream>
using namespace std;
Dame::Dame(const string _nom, const string _boissonFavorite, const string _couleurRobe) : Humain(_nom, _boissonFavorite)
{
	couleurRobe = _couleurRobe;
}


string Dame::getEtat() const
{
	return etat;
}


void Dame::changeDeRobe(const string _couleurRobe)
{
	couleurRobe = _couleurRobe;
	cout << " ( " << nom << " ) -- " << "Regardez ma nouvelle robe " << couleurRobe << " !" << endl;
}

void Dame::sePresente() const
{
	cout << " ( " << nom << " )-- " << " Bonjour je suis " << getNom() << " et j'ai une jolie robe " << couleurRobe << endl ;
}

string Dame::getNom() const
{
	return "Miss " + nom;
}
