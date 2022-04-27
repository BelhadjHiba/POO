#ifndef TAXE_H_
#define TAXE_H_

#include "Case.h"
#include "joueur.h"
#include <iostream> 
using namespace std; 

class taxe: public Case {
public:
	taxe(string nom, Case* suivante=NULL);
	virtual ~taxe();
	void arreterSur(joueur* ptJoueur);
};

#endif 
