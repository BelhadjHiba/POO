#ifndef CARTE_H_
#define CARTE_H_

#include "Case.h"
#include <iostream> 
using namespace std; 

class Carte {
private :
	int gain ;
	int perte ;
	Case* ptTeleportation;
	string text;
public:
	int getGain() {return this->gain;};
	int getPerte() {return this->perte;};
	Case* getTeleportation(){return this->ptTeleportation;};
	string getText(){return this->text;};
	Carte(string text,int gain = 0 , int perte = 0 ,int deplacemenent= 0,Case* ptTeleportation =NULL);
    Carte();
	virtual ~Carte();
};

#endif /* CARTE_H_ */
