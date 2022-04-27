#include "allezPrison.h"
#include "joueur.h"
#include <iostream> 
using namespace std; 

allezPrison::allezPrison(string nom, Case* suivante):Case(nom,suivante) {}

allezPrison::~allezPrison() {}

void allezPrison::arretrSur(joueur* ptJoueur){
	joueur Joueur = *ptJoueur ;
	Joueur.entrerPrison();
}
