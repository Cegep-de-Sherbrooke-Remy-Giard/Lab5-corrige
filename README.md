# Laboratoire 5 

## Théorie testé dans le laboratoire
- constructeurs
- getter
- setter
- constructeurs de copie
- destructeurs 

## Description
Le laboratoire contient des fichiers de base donc la classe `Enseignant` qu'il vous est demandé de remplir.  À chaque partie, vous pourrez exécuter le main déjà fourni pour obtenir un output console qui vous indiquera si la partie est réussie.

## PARTIE 1 - Création de la classe
Pour cette partie, on vous demande de créer la classe `Enseignant` qui contient les attributs suivant:
- std::string nom
- Ecole& ecole

De plus, on vous demande d'ajouter les méthodes suivantes: 
- getter de `nom`
- setter de `nom`
- getter de `ecole` 
- constructeur qui reçoit le nom et l'école en paramètre référence pour les assigner à l'enseignant en création

Une fois que c'est terminé, vous pouvez exécuter l'application.  Si tout est ok, vous devriez voir le texte: 
```
[x] Partie 1 réussie - Constructeur Enseignant(string, Ecole&)
```
Vous pouvez donc faire un commit pour la partie 1.

## PARTIE 2 - Constructeur de copie
Ici on vous demande de créer un constructeur de copie pour la classe Enseignant.  
*Consigne importante* : ce constructeur doit copier l'école de la source mais initialiser le `nom` à un string vide (`""`).

Une fois que c'est terminé, vous pouvez exécuter l'application.  Si tout est ok, vous devriez voir le texte: 
```
[x] Partie 2 réussie - Constructeur de copie
```
Vous pouvez donc faire un commit pour la partie 2.

## PARTIE 3 - Destructeur
Comme vous avez déjà remarqué, notre application contient une classe `Ecole`.  Lorsqu'un qu'on crée une instance d'`Enseignant` associé à une école, on aimerait que l'attribut `nbEnseignants` de l'école en question soit augmenté.  Ceci servira à savoir combien d'enseignants font partie de l'école.  

Pour ce, il faudra modifier les constructeurs de la classe `Enseignant` pour demander à l'école associée d'augmenter leur nombre d'enseignants via la méthode `augmenterNbEnseignants()`.

Maintenant, il serait aussi logique de réduire ce nombre d'enseignants lorsqu'une instance d'un enseignant est supprimée.  Par conséquent, on vous demande de créer un destructeur de la classe `Enseignant` qui demandera à l'école associée de réduire son nombre d'enseignants via la méthode `reduireNbEnseignants()`.

Une fois que c'est terminé, vous pouvez exécuter l'application.  Si tout est ok, vous devriez voir le texte: 
```
[x] Partie 3 réussie - Destructeur

Félicitations !  Vous avez réussi le laboratoire.
```
Vous pouvez donc faire un commit pour la partie 3 et m'ajouter comme *reviewer* sur la pull request *Feedback* de votre repository Github.
