#ifndef PROPRIETE_H_
#define PROPRIETE_H_

#include "Case.h"
#include "couleur.h"
#include <iostream> 
using namespace std; 

class propriete: public Case {
protected :
	string nom ;
	int* ptLoyer ;
	int prixAchat ;
	joueur* ptProprietaire;
public:
	propriete(string nom, int* ptLoyer, int prixAchat, Case* suivante, joueur* ptProprietaire= NULL);
	virtual ~propriete();
	void arreterSur() ;
	string getNom(){return this->nom;};
	void setNom(string Nom){this->nom=Nom;};
	int* getPtLoyer(){return this->ptLoyer;};
	void setLoyer(int* ptLoyer){this->ptLoyer = ptLoyer;};
	void setPrixAchat(int prix){this->prixAchat = prix;};
	int getPrixAchat(){return this->prixAchat;};
	void SetProprietaire(joueur* ptProprietaire){this->ptProprietaire = ptProprietaire;};
	joueur* GetProprietaire(){return this->ptProprietaire;};
};
#endif 
