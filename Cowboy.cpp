#include "Cowboy.h"

Cowboy::Cowboy(const string _nom, const string _boissonFavorite, int _popularite) : Humain(_nom, _boissonFavorite)
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

int Cowboy::getPopularite()
{
	return 0;
}

void Cowboy::setPopularite(const int popularite)
{
}

string Cowboy::getQualite()
{
	return string();
}

void Cowboy::setQualite(const string qualite)
{
}

void Cowboy::incrementePopularite()
{
	popularite++;
}

void Cowboy::decrementePopularite()
{
	popularite--;
}

void Cowboy::tire(const Brigand& brigand)
{
}

void Cowboy::emprisonne(Brigand& brigand)
{
}

void Cowboy::libere(Dame& dame)
{
}
