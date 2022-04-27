#ifndef GOBELET_H_
#define GOBELET_H_
#include "de.h"

class gobelet {
private :
    static de de1;
    static de de2;
public:
    gobelet();
    virtual ~gobelet();
    static int getValeur(){return (de1.getValeur() + de2.getValeur());};
    static void lancer();
    static bool Double();
};


#endif 
