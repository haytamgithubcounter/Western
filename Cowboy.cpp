#include "Cowboy.h"

Cowboy::Cowboy(const string _nom, const string _boissonFavorite, const string _popularite) : Humain(_nom, _boissonFavorite)
{
	popularite = _popularite;
}

void Cowboy::sePresente() const
{
	cout << " ( " << nom << " ) -- " << " Bonjour je suis le "<< popularite << " " << getNom() << " et j'aime le " << boissonFavorite << endl;
}

string Cowboy::getNom() const
{
	return nom;
}
