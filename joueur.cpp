#include "joueur.h"
#include "gobelet.h"
#include <iostream> 
using namespace std; 

joueur::joueur(){
	this->solde = 1500;
	this->Nom = "undefinied";
	this->carte_liberation =0;
	this->prison = false ;
	this->temps_prison = 0 ;
	this->ptPion =NULL;
}

joueur::joueur(string nom,pion* ptPion ) {
	this->solde = 1500;
	this->ptPion = ptPion;
	this->Nom = nom;
	this->carte_liberation =0;
	this->prison = false ;
	this->temps_prison = 0 ;
}

joueur::~joueur() {
}

void joueur::crediter(int credit){
	this->solde += credit;
}

void joueur::debiter(int debit){ 
    this->solde -= debit;
    if (solde<=0) {
    	cout << Nom << " a fait banqueroute !" << endl;
    }
}

bool joueur::isOut(){
    return (solde<=0);
}

void joueur::jouer(Plateau plateau){
    if (solde > 0) {
        if (prison) {
        	if (this->temps_prison ==3  ){
        		cout << "Vous êtes libéré de prison " << endl;
        		this->prison = false;
        		this->temps_prison =0;
        		this->jouer(plateau);
        	}
        	if (this->carte_liberation > 0 ){ 
        		string response ;
        		cout << "Voulez-vous utiliser votre carte Sortie de Prison ?" << endl ;
        		cin >> response ;
        		if (response == "oui") {
        			this->prison = false;
        			this->carte_liberation -= 1 ;
        			this->jouer(plateau);
        			this->temps_prison= 0;
        		}
        		else { 
        			string response ;
        			cout << "Voulez-vous payer 50 € pour sortir de prison ? " << endl;
        			cin>> response;
        			if (response =="oui"){
        				this->debiter(50);
        				this->prison = false;
        				this->temps_prison =0 ;
        				this->jouer(plateau);
        			}
        			else { 
        				gobelet::lancer();
        				if (gobelet::Double()){
        					this->prison = false;
        					this->temps_prison =0 ;
        					this->ptPion->deplacer(gobelet::getValeur(),plateau);
        				}
        				else {
        					this->temps_prison += 1 ;
        				}
        			}
        		}
        	}

        }
        else { 
        	gobelet::lancer();
        	int deplacement = gobelet::getValeur();
        	this->ptPion->deplacer(deplacement,plateau);
        	if (gobelet::Double()){
        		if (this->solde > 0) {
        		gobelet::lancer();
        		int deplacement = gobelet::getValeur();
        		this->ptPion->deplacer(deplacement,plateau);
        		if (gobelet::Double()){
        			if (this->solde > 0) {
        			    gobelet::lancer();
        			    int deplacement = gobelet::getValeur();
        			    this->ptPion->deplacer(deplacement,plateau);
        			    if (gobelet::Double()){
        			    		this->prison= true ;
        			    		this->ptPion->setPosition(&plateau.getListeCase()[10]);
        			    	}
        				}
        			}
        		}
        	}
        }
    }
}
