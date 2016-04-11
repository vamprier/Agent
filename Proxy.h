#ifndef PROXY_H
#define PROXY_H

#include "givegit.h"
#include "Pursuit.h"

class Proxy : public GiveGit
{
public:
	Proxy(SchoolGirl* g);
	~Proxy(void);
public:
	virtual void GiveDolls();
	virtual void GiveFlowers();
	virtual void GiveChocolate();
private:
	Pursuit* ps;
};

#endif

