#include "Ecole.h"
#include "Enseignant.h"

#include <iostream>

using namespace std;

int main()
{
	Ecole cegepSherbrooke("Cégep de Sherbrooke");
	Enseignant remy("Rémy Giard", cegepSherbrooke);

	// TEST DE LA PARTIE 1
	{
		cout << "Test de la partie 1 ..." << endl;

		if (remy.getNom() != "Rémy Giard") {
			cout << "!!! Le constructeur Enseignant(string, Ecole&) n'a pas assigné le nom correctement" << endl;
			system("pause");
			return 1;
		}

		if (remy.getEcole().getNom() != "Cégep de Sherbrooke") {
			cout << "!!! Le constructeur Enseignant(string, Ecole&) n'a pas assigné l'école correctement" << endl;
			system("pause");
			return 1;
		}

		cout << "[x] Partie 1 réussie - Constructeur Enseignant(string, Ecole&)" << endl << endl;
	}

	// TEST DE LA PARTIE 2
	{
		cout << "Test de la partie 2 ..." << endl;

		Enseignant regis = remy;

		// vérifier le comportement du constructeur de copie
		if (regis.getNom() != "") {
			cout << "!!! Le constructeur de copie devrait avoir mis un nom vide au nouvel enseignant." << endl;
			system("pause");
			return 1;
		}

		if (regis.getEcole().getNom() != remy.getEcole().getNom()) {
			cout << "!!! Le constructeur de copie devrait avoir mis la même école que la source au nouvel enseignant." << endl;
			system("pause");
			return 1;
		}

		cout << "[x] Partie 2 réussie - Constructeur de copie" << endl << endl;
	}

	// TEST DE LA PARTIE 3
	{
		cout << "Test de la partie 3 ..." << endl;

		if (cegepSherbrooke.getNbEnseignants() != 1) {
			cout << "!!! Le constructeur de 'Enseignant(string, Ecole&)' doit augmenter le nombre d'enseignants de l'école associée." << cegepSherbrooke.getNbEnseignants() << endl;
			system("pause");
			return 1;
		}

		{
			// vérifier que le constructeur a bien augmenté le nombre d'enseignants
			Enseignant regis = remy;
			if (cegepSherbrooke.getNbEnseignants() != 2) {
				cout << "!!! Le constructeur de copie d'un Enseignant doit augmenter le nombre d'enseignants de l'école associée." << cegepSherbrooke.getNbEnseignants() << endl;
				system("pause");
				return 1;
			}
		}

		// vérifier que le destructeur a bien réduit le nombre d'enseignants
		if (cegepSherbrooke.getNbEnseignants() != 1) {
			cout << "!!!! Le destructeur de 'Enseignant' est mal implanté." << cegepSherbrooke.getNbEnseignants() << endl;
			system("pause");
			return 1;
		}

		cout << "[x] Partie 3 réussie - Destructeur" << endl << endl;
	}

	cout << "Félicitations !  Vous avez réussi le laboratoire." << endl << endl;

	return 0;
}