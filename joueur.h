#ifndef JOUEUR_H_
#define JOUEUR_H_

#include <iostream>
#include "Case.h"
#include "pion.h"
#include "Plateau.h"
#include "gobelet.h"
#include <iostream> 
using namespace std; 

class pion;
class Plateau ;

class joueur {
	private :
		string Nom; 
		pion* ptPion ;
		int solde ; 
		bool prison ; 
		int temps_prison ; 
		int carte_liberation ; 
	public:
        bool isOut();
		joueur();
		joueur(string nom,pion* ptPion ); 
		virtual ~joueur(); 
		string getNom(){return this->Nom;}; 
	
		void setptPion(pion* ptPion){this->ptPion = ptPion;};
		pion* getptPion(){return this->ptPion;};

		int getSolde(){return this->solde;};
	
		void jouer(Plateau plateau); 
		void crediter(int credit); 
		void debiter(int debit); 

		int getCartePrison(){return this->carte_liberation;};
		void setCartePrison(int nombre){this->carte_liberation = nombre;};

		void entrerPrison(){ this->prison =true; this->temps_prison = 0 ; } 
		bool getPrison(){return this->prison;};
};

#endif 