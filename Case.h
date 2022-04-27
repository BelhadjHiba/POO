#ifndef CASE_H_
#define CASE_H_

#include <iostream> 
using namespace std; 

class joueur ;

class Case {
	private :
        string nom;
        Case* suivante;
	public:
        Case();
		Case(string nom, Case* suivante=NULL);
        virtual ~Case();
        void arreterSur(joueur* ptjoueur);
		string getNom(){return this->nom;};
		void setNom(string nom){this->nom = nom ;};
		Case* getSuivante(){return this->suivante;};
		void setSuivante(Case* suivante){this->suivante = suivante;};
};

#endif
