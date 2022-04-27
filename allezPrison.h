#ifndef ALLEZPRISON_H_
#define ALLEZPRISON_H_

#include "Case.h"
#include <iostream> 
using namespace std; 

class allezPrison: public Case {
public:
	allezPrison(string nom, Case* suivante=NULL);
	virtual ~allezPrison();
	void arretrSur(joueur* ptJoueur);
};

#endif 
