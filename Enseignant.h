#pragma once

#include "Ecole.h"

#include <string>

class Enseignant
{
private: 
	std::string _nom;
	Ecole& _ecole;

public:
	Enseignant(std::string nom, Ecole& ecole);
	Enseignant(const Enseignant &source);
	~Enseignant();

	std::string getNom() const;
	void setNom(std::string const nom);
	Ecole& getEcole() const;
};
