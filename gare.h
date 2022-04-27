#ifndef GARE_H_
#define GARE_H_

#include "propriete.h"
#include <iostream> 
using namespace std; 

class gare : public propriete {
private :
	couleur* ptCouleur ;
public:
	gare();
	gare(string nom, int prixAchat=200, Case* suivante=NULL, joueur* ptProprietaire=NULL,int* ptLoyer=NULL);
	virtual ~gare();
	void setptCouleur(couleur* ptCouleur ){this->ptCouleur = ptCouleur;};
	void arreterSur(joueur* ptJoueur);
};

#endif 
