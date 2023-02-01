#include "Ecole.h"

using namespace std;

Ecole::Ecole(const Ecole& source) {
	_nom = source._nom;
}

Ecole::Ecole(string nom) {
	_nom = nom;
}

string Ecole::getNom() const {
	return _nom;
}

int Ecole::getNbEnseignants() const {
	return _nbEnseignants;
}

void Ecole::augmenterNbEnseignants() {
	_nbEnseignants++;
}

void Ecole::reduireNbEnseignants() {
	if (_nbEnseignants > 0) {
		_nbEnseignants--;
	}
}