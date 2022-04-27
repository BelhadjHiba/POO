#include "Terrain.h"
#include "joueur.h"
#include <iostream> 
using namespace std; 

Terrain::Terrain():propriete("temporaire",NULL,0,NULL,NULL){
	this->Couleur = NULL;
	this->nMaison = 0 ;
}

Terrain::Terrain(string nom, int* ptLoyer, int prixAchat, couleur* Couleur, Case* suivante, joueur* ptProprietaire):propriete(nom, ptLoyer, prixAchat, suivante, ptProprietaire) {
	this->Couleur = Couleur;
	this->nMaison = 0;
}

void Terrain::arreterSur(joueur* ptJoueur){
	if (ptProprietaire == NULL){
		string reponse;
		cout<< "le bien est disponible. Son prix est de "<<this->prixAchat<<". Souhaitez-vous l'acheter ?"<< endl;
		cin>> reponse;
		if (reponse == "oui") {
			joueur Joueur = *ptJoueur;
			Joueur.debiter(this->getPrixAchat());
			cout<<"Vous avez achete la propriete "<< this->nom << ". Votre solde est maintenant de " << Joueur.getSolde() << endl ;
			this->ptProprietaire = ptJoueur; 
		} 
		else{
			cout<< "Vous avez dÃ©cidÃ© de ne pas acheter cette propriÃ©tÃ©"<< endl;
	}
	}
	else{
		int loyer = ptLoyer[nMaison]; //On adapte le loyer en fonction du nombre de maison qu'il y a (ptLoyer[0]->0 maison et ptLoyer[5]->1 hotel)
		cout << "Vous etes tombe sur la case " << this->nom << ", vous devez payer "<< loyer << " E."<< endl;
		ptProprietaire->crediter(loyer);
		ptJoueur->debiter(loyer);

	}
}


Terrain::~Terrain() {}

