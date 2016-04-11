#include "Proxy.h"


Proxy::Proxy(SchoolGirl* g)
{
	ps = new Pursuit(g);
}


Proxy::~Proxy(void)
{
	delete ps;
}

void Proxy::GiveDolls()
{
	ps->GiveDolls();
}

void Proxy::GiveFlowers()
{
	ps->GiveFlowers();
}

void Proxy::GiveChocolate()
{
	ps->GiveChocolate();
}
