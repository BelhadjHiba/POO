#ifndef DE_H_
#define DE_H_
#include <iostream> 
using namespace std; 

class de {
private :
	int nbFaces;
	int valeur;
public:
	de();
	virtual ~de();
	int getNbfaces(){return this->nbFaces;};
	int getValeur(){return this->valeur;};
	void lancer(); 
};

#endif