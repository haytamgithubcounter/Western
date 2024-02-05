#include "Brigand.h"

Brigand::Brigand(const string nom, const string boissonFavorite, const string comportement, bool enPrison, int nbDamesEnlevees, int recompense)
{
}

string Brigand::getComportement()
{
	return comportement;
}

int Brigand::getNbDamesEnlevees()
{
	return nbDamesEnlevees;

}

int Brigand::getRecompense()
{
	return recompense;
}

string Brigand::getNom()
{
	return nom;
}

void Brigand::sePresente()
{
	cout << "(" << getNom() << ") -- " << "Bonjour, je suis " << getNom() << " le " << getComportement() << " et j�aime le " << getBoissonFavorite() << "." << endl;
}

void Brigand::kidnappe(Dame& dame)
{
	if (!estEnPrison())
	{
		dame.seFaitKidnapper();
		nbDamesEnlevees++;
		augmenteRecompense();
		cout << "(" << nom << ") -- " << "Ah ah ! " << dame.getNom() << ", tu es mienne d�sormais !" << endl;
	}


}

void Brigand::seFaitEmprisonne(Cowboy& cowboy)
{
	if (!estEnPrison())
	{
		enPrison = true;
		cout << "(" << getNom() << ") -- " << "Damned, je suis fait ! " << cowboy.getNom() << ", tu m�as eu !" << endl;
	}
}

void Brigand::augmenteRecompense(const int prix)
{
	if (prix > 0)
		this->recompense += prix;
}

void Brigand::diminueRecompense(const int prix)
{
	if (prix > 0 && prix <= recompense)
		this->recompense -= prix;
}

bool Brigand::estEnPrison()
{
	return enPrison;
}
