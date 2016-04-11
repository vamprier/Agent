#ifndef GIVEGIT_H
#define  GIVEGIT_H

#include "SchoolGirl.h"


class GiveGit
{
public:
	GiveGit(void);
	virtual ~GiveGit(void);
public:
	virtual void GiveDolls()=0;
	virtual void GiveFlowers()=0;
	virtual void GiveChocolate()=0;
};

#endif

