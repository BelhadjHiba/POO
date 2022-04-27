#include "depart.h"
#include "Case.h"
#include "joueur.h"
#include <iostream> 
using namespace std; 

depart::depart(string nom,Case* suivante):Case(nom,suivante) {}

depart::~depart() {}

void depart::arreterSur(joueur* ptjoueur) {
	joueur Joueur = *ptjoueur;
	Joueur.crediter(200);
}
