#include "taxe.h"
#include <iostream> 
using namespace std; 

taxe::taxe(string nom, Case* suivante):Case(nom,suivante) {
}

taxe::~taxe() {}

void taxe::arreterSur(joueur* ptJoueur){
	(*ptJoueur).debiter(200);
}
