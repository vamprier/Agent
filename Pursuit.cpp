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
	cout<<girl->GetName()<<",����������"<<endl;
}

void Pursuit::GiveFlowers()
{
	cout<<girl->GetName()<<",�����ʻ�"<<endl;
}

void Pursuit::GiveChocolate()
{
	cout<<girl->GetName()<<",�����ɿ���"<<endl;
}