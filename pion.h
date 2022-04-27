#ifndef PION_H_
#define PION_H_

#include <iostream> 
using namespace std; 

class joueur;
class Case;
class Plateau ;

class pion {
	private :
		joueur* ptJoueur ; 
		Case* ptPosition ; 
		string nom ; 
	public:
		pion(); 
		pion(string nom,Case* ptPosition);
		virtual ~pion(); 

		void setJoueur ( joueur* Joueur ) {this->ptJoueur = Joueur;}; 
		joueur* getJoueur () { return this->ptJoueur; }; 

		void setPosition(Case* truc) {this->ptPosition = truc;}; 
		Case* getPosition() {return this->ptPosition;};

		void setNom(string nom){this->nom = nom;}; 
		string getNom(){return this->nom;}; 

		void deplacer(int combien,Plateau plateau); 
};

#endif 
