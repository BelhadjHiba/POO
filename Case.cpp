#include "Case.h"
#include "joueur.h"
#include <iostream> 
using namespace std; 

Case::Case(string nom, Case* suivante) {
	this->nom  = nom ;
	this->suivante = suivante;
}

Case::Case(){
	this->nom = "undefinied";
	this->suivante = NULL;
}

Case::~Case() {}

void Case::arreterSur(joueur *joueur) {}

