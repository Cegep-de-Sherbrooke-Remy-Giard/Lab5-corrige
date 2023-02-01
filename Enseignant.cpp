#include "Enseignant.h"

using namespace std;

Enseignant::Enseignant(std::string nom, Ecole& ecole) : _nom(nom), _ecole(ecole)
{
	_ecole.augmenterNbEnseignants();
}

Enseignant::Enseignant(const Enseignant &source)  : _nom(""), _ecole(source._ecole)
{
	_ecole.augmenterNbEnseignants();
}

Enseignant::~Enseignant() 
{
	_ecole.reduireNbEnseignants();
}

string Enseignant::getNom() const 
{
	return _nom;
}

Ecole& Enseignant::getEcole() const 
{
	return _ecole;
}

void Enseignant::setNom(string const nom) {
	_nom = nom;
}