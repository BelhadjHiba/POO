#ifndef TERRAIN_H_
#define TERRAIN_H_

#include "propriete.h"
#include "couleur.h"
#include <iostream> 
using namespace std; 

class Terrain: public propriete {
private :
	string nom;
	couleur* Couleur;
	int nMaison;
public:
	Terrain();
	Terrain(string nom, int* ptLoyer, int prixAchat, couleur* Couleur=NULL, Case* suivante=NULL, joueur* ptProprietaire=NULL);
	virtual ~Terrain();
	void setNom(string Nom){this->nom =Nom;};
	string getNom(){return this->nom;};
	void arreterSur(joueur* ptJoueur);
	couleur* getCouleur(){return this->Couleur;};
	void setCouleur(couleur* Couleur){this->Couleur = Couleur;};
};

#endif 
