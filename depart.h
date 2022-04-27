#ifndef DEPART_H_
#define DEPART_H_

#include "Case.h"
#include <iostream> 
using namespace std; 

class Case;

class depart: public Case {

private :
	string nom ;
public:
	depart(string nom,Case* suivante=NULL);
	virtual ~depart();
	void arreterSur(joueur *ptjoueur) ;
};

#endif 
