#include "propriete.h"
#include <iostream> 
using namespace std; 

propriete::propriete(string nom, int* ptLoyer, int prixAchat, Case* suivante, joueur* ptProprietaire):Case(nom,suivante) {
	this->ptLoyer =ptLoyer ;
	this->prixAchat = prixAchat;
	this->ptProprietaire = ptProprietaire;
}

propriete::~propriete() {}

