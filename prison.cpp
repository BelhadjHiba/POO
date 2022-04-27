
#include "prison.h"
#include "Case.h"
#include "joueur.h"
#include <iostream> 
using namespace std; 

prison::prison(string nom, Case* suivante):Case(nom,suivante){

}


prison::~prison() {}

void prison::arreterSur(joueur* ptJoueur) {
	bool incarcere = (*ptJoueur).getPrison();
}


