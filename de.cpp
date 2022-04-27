#include "de.h"
#include <stdlib.h>
#include <iostream> 
using namespace std; 

de::de() {
	this->valeur = 0 ;
	this->nbFaces =6;
}

de::~de() {}

void de::lancer(){
	this->valeur = rand() % (this->nbFaces - 1) + 1;
}
