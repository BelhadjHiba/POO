#ifndef COMMUNAUTE_H_
#define COMMUNAUTE_H_

#include "Case.h"
#include <iostream> 
using namespace std; 

class joueur;
class Carte;

class communaute: public Case {
	private :
		string nom ;
		Carte* pile_carte_communaute;
	public:
		communaute(string nom, Case* suivante=NULL);
		void setPile_carte_commmuanute(Carte* pile_carte_communaute){this->pile_carte_communaute =pile_carte_communaute;};
		virtual ~communaute();
		void arreterSur(joueur* joueur) ;
};

#endif 
