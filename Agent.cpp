// Agent.cpp : �������̨Ӧ�ó������ڵ㡣
//
#include "Proxy.h"
#include "Pursuit.h"
#include "SchoolGirl.h"


int main(int argc, char* argv[])
{
	SchoolGirl* mm = new SchoolGirl("�Ծ�");

	Proxy* gg = new Proxy(mm);
	gg->GiveDolls();
	gg->GiveFlowers();
	gg->GiveChocolate();

	cin.ignore();
	return 0;
}

