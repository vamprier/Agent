#include "Pursuit.h"


Pursuit::Pursuit(SchoolGirl* g):girl(g)
{
	//
}


Pursuit::~Pursuit(void)
{
	delete girl;
}

void Pursuit::GiveDolls()
{
	cout<<girl->GetName()<<",ËÍÄãÑóÍÞÍÞ"<<endl;
}

void Pursuit::GiveFlowers()
{
	cout<<girl->GetName()<<",ËÍÄãÏÊ»¨"<<endl;
}

void Pursuit::GiveChocolate()
{
	cout<<girl->GetName()<<",ËÍÄãÇÉ¿ËÁ¦"<<endl;
}