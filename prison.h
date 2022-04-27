#ifndef PRISON_H_
#define PRISON_H_

#include "Case.h"
#include <iostream> 
using namespace std; 

class Case;

class prison: public Case {

public:
	prison(string nom, Case* suivante=NULL);
	virtual ~prison();
	void arreterSur(joueur* ptJoueur) ;
};

#endif 
