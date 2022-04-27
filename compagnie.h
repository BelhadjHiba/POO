#ifndef COMPAGNIE_H_
#define COMPAGNIE_H_
#include "gobelet.h"
#include "propriete.h"
#include <iostream> 
using namespace std; 

class compagnie: public propriete {
private :

public:
	compagnie();
	compagnie(string nom,int* ptLoyer=NULL , int prixAchat=0, Case* suivante=NULL, joueur* ptProprietaire=NULL);
	virtual ~compagnie();
	void arreterSur(joueur* ptJoueur);
};

#endif 
