#include "banque.h"
#include "Case.h"
#include "banque.h"
#include "chance.h"
#include "compagnie.h"
#include "de.h"
#include "compagnie.h"
#include "depart.h"
#include "gobelet.h"
#include "jeu.h"
#include "joueur.h"
#include "pion.h"
#include "gare.h"
#include "prison.h"
#include "Plateau.h"
#include "Terrain.h"

#include <iostream> 
using namespace std; 

gobelet Gobelet = gobelet(); 

int main() {

	Plateau plateau = Plateau();
	plateau.creerCases();

	plateau.affciheCouleurs();

	plateau.afficheCases();

	cout << "Bienvenue dans le logiciel Monopoly de ORY Victor, CHAPLAIN Nicolas, GOURC Corentin et ROYANT Killian" << endl ;
	int nmbrJoueur ;
    try {
        cout << "Veuiller entrer le nombre de joueur : " << endl ;
        cin >> nmbrJoueur ;
    }
    catch (...) {
        cout << "Erreur : Veuillez entrer un entier." << endl ;
    }

	joueur* listeJoueur = new joueur[nmbrJoueur];

	for (int i = 0 ; i < nmbrJoueur ; i ++ ) {
		string nomJoueur;
		cout << "Comment s'appelle le Joueur " << i + 1 << "?" << endl;
		cin >> nomJoueur ;
		string nomPion ;
		cout << "Entrer le nom du pion que vous voulez sélectionner pour le jouer numéro " <<  i << endl ;
		cin >> nomPion ;

		pion* ptPion = new pion(nomPion,plateau.getListeCase());
		pion Pion = *ptPion ;

		joueur* ptJoueur = new joueur(nomJoueur,ptPion);
		joueur Joueur = *ptJoueur;
		listeJoueur[i] = Joueur;
		Pion.setJoueur(ptJoueur);
		Pion.setPosition(plateau.getListeCase());
	}

	cout<< "La phase de création des joueurs est finie ! " << endl;

	for (int i = 0 ;  i < nmbrJoueur ; i ++ ) {
		pion ptPionaffiche = *listeJoueur[i].getptPion();
		string Pionaffiche = ptPionaffiche.getNom();
		string casedepart = ptPionaffiche.getPosition()->getNom();
		cout << "La position actuelle du pion"<< Pionaffiche << "du joueur "<< listeJoueur[i].getNom() <<" est la case : " << casedepart << endl;
	}

	jeu Jeu = jeu();

	while (Jeu.getCompteur() < 100 )  {
		for (int i = 0 ; i < nmbrJoueur ; i ++){
			joueur Joueur = listeJoueur[i];
			Joueur.jouer( plateau);
		}
	}
	return 0;
}
