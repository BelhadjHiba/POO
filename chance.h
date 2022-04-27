#ifndef CHANCE_H_
#define CHANCE_H_

#include "Case.h"
#include "Carte.h"
#include <iostream> 
using namespace std;

class chance: public Case {
private :
	string nom ;
	Carte* pile_carte_chance ;
public:
	chance(string nom, Case* suivante=NULL);
	void setPile_carte_chance(Carte* pile_carte_chance){this->pile_carte_chance =pile_carte_chance;};
	virtual ~chance();
	void arreterSur(joueur* ptJoueur) ;
};

#endif 