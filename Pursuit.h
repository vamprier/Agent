#ifndef PURSUIT_H
#define  PURSUIT_H

#include "givegit.h"

class Pursuit : public GiveGit
{
public:
	Pursuit(SchoolGirl* g);
	~Pursuit(void);
public:
	virtual void GiveDolls();
	virtual void GiveFlowers();
	virtual void GiveChocolate();
private:
	SchoolGirl* girl;
};

#endif
