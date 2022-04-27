#ifndef CASEINUTILE_H_
#define CASEINUTILE_H_

#include "Case.h"
#include <iostream> 
using namespace std; 

class case_inutile: public Case {
public:
	case_inutile(string nom, Case* suivante=NULL);
	virtual ~case_inutile();
	void arreterSur(){};
};

#endif 