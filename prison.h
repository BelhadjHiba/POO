/*
 * prison.h
 *
 *  Created on: 23 déc. 2021
 *      Author: aveyronvictor
 */

#ifndef PRISON_H_
#define PRISON_H_

#include "Case.h"
#include "joueur.h"

class prison: public Case {
private :

public:
	prison();
	virtual ~prison();
	void arreterSur(joueur* joueur) ;
};

#endif /* PRISON_H_ */
