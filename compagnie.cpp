#include "compagnie.h"
#include "joueur.h"
#include <iostream> 
using namespace std; 

compagnie::compagnie():propriete("undefinied",NULL,0,NULL){}

compagnie::compagnie(string nom,int* ptLoyer , int prixAchat, Case* suivante,joueur* ptProprietaire):propriete(nom, ptLoyer, prixAchat, suivante) {
	this->ptProprietaire =NULL;
}

compagnie::~compagnie() {}

void compagnie::arreterSur(joueur* ptJoueur) {
		extern gobelet Gobelet ;
		if (ptProprietaire == NULL){
			string reponse;
			cout<< "La case : "<< this->nom << "est disponible. Son prix est de "<<this->prixAchat<<" €. Souhaitez-vous l'acheter ?"<< endl;
			cin>> reponse;

			if (reponse == "oui") {
				joueur Joueur = *ptJoueur;
				Joueur.debiter(this->getPrixAchat());
				cout<<"Vous avez achete la propriete "<< this->nom << ". Votre solde est maintenant de " << Joueur.getSolde() << endl;
				ptProprietaire = ptJoueur; 
			} 
			else{
				cout<< "Vous avez décidé de ne pas acheter cette propriété"<< endl;
			}
		}
		else{
			int multiplicateur = 4 ;
			if (1){
				multiplicateur = 12;
			}

			int loyer = multiplicateur * Gobelet.getValeur() ;
			cout << "Vous êtes tombé sur la case " << this->nom << ", vous devez payer "<< loyer << " € ."<< endl;
			ptJoueur->crediter(loyer);
			ptJoueur->debiter(loyer);}
}
