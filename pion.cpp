#include "pion.h"
#include "Plateau.h"
#include <iostream> 
using namespace std; 

pion::pion(){
	this->nom = "undefinied";
	this->ptPosition = NULL;
	this->ptJoueur = NULL;
}

pion::pion(string nom,Case* ptPosition) {
	this->ptJoueur =NULL;
	this->ptPosition = ptPosition;
}

pion::~pion() {}	

void pion::deplacer(int combien,Plateau plateau){
	joueur Joueur = *ptJoueur;
	Case* postionactuelle = this->ptPosition;
	Case* position_suivante = this->ptPosition->getSuivante();
	for (int i = 0 ; i < combien ; i ++){
		this->ptPosition = position_suivante ;
		position_suivante = this->ptPosition->getSuivante();
		if (this->ptPosition == plateau.getListeCase()){
			this->ptJoueur->crediter(200);
		}
		postionactuelle->arreterSur(this->ptJoueur);
	}
}
