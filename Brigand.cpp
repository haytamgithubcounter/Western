#include "Brigand.h"

Brigand::Brigand(const string nom, const string boissonFavorite, const string comportement)
{
}

string Brigand::getComportement()
{
	return string();
}

int Brigand::getNbDamesEnlevees()
{
	return 0;
}

int Brigand::getRecompense()
{
	return 0;
}

void Brigand::sePresente()
{
}

void Brigand::kidnappe(Dame& dame)
{
}

void Brigand::seFaitEmprisonne(Cowboy& cowboy)
{
}

void Brigand::augmenteRecompense(const int prix)
{
}

void Brigand::diminueRecompense(const int prix)
{
}

bool Brigand::estEnPrison()
{
	return false;
}
