#ifndef COULEUR_H_
#define COULEUR_H_

#include "propriete.h"
#include <iostream> 
using namespace std; 

class propriete; 

class couleur {
private:
	propriete* liste_propriete ;
	string nom;
	int longueur ;
public:
	couleur();
	couleur(string nom,int longueur, propriete* liste_propriete);
	propriete* getListePropriete(){return this->liste_propriete;};
	string getNom(){return this->nom;};
	int getLongueur(){return this->longueur;};
	bool check_monopole(joueur* ptJoueur);
	virtual ~couleur();
	int checkGare(joueur* ptJoueur);
};

#endif 
