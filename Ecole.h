#pragma once

#include <string>

class Ecole
{
private: 
	std::string _nom;
	int _nbEnseignants = 0;

public:
	Ecole(std::string);
	Ecole(const Ecole& source);
	
	std::string getNom() const;
	int getNbEnseignants() const;

	void augmenterNbEnseignants();
	void reduireNbEnseignants();
};

