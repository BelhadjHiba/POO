#ifndef JEU_H_
#define JEU_H_

class jeu {
protected:
	int tourdejeu ;
public:
	jeu();
	virtual ~jeu();
	void compteur(){this->tourdejeu = this->tourdejeu + 1;};
	int getCompteur(){return this->tourdejeu;};
};

#endif 
