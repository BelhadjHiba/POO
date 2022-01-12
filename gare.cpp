/*
 * gare.cpp
 *
 *  Created on: 23 d�c. 2021
 *      Author: aveyronvictor
 */
#include "joueur.h"
#include "gare.h"

gare::gare(string nom,int loyer , int prixAchat,Case* suivante):propriete(nom,loyer,prixAchat,suivante) {
	this->nom = nom;
	this->loyer = loyer;
	this->prixAchat = prixAchat;
}

void gare::arreterSur(){
	ptjoueur = ;// mettre le pointeur du joueur qui est tomb� sur la case
	if (proprietaire =="none"){
		string reponse
		cout << "Vous �tes tomb� sur la case " << this->nom <<" Cette propri�t� n'appartient � personne. Souhaitez-vous l'acheter pour "<< prixAchat << "E ?"<<endl;
		cin >> reponse;
		if (reponse == Oui) {
			joueur.setSolde(joueur.getSolde - prixAchat);
			cout<<"Vous avez achet� la propri�t� "<< this->nom << ". Votre solde est maintenant de " << joueur.getSolde;
		} //Il faut ajouter la propri�t� � la liste des propri�t�s du joueur.
	}
	else{
		this->loyer = 25* proprietaire.getGare(); //Fonction qui n'existe pas pour l'instant: elle va chercher le nombre de gare que poss�de un joueur
		//Le prix est diff�rent en fonction du nombre de gare que le propri�taire poss�de.
		cout << "Le propri�taire de cette case est "<< proprietaire << " vous lui devez " << loyer<<endl;
		joueur.setSolde(joueur.getSolde - this->loyer); //le joueur paye le locataire le prix du loyer
		proprietaire.setSolde(joueur.setSolde + this->loyer);
	}
}
gare::~gare() {
	// TODO Auto-generated destructor stub
}
