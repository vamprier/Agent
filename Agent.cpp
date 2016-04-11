// Agent.cpp : 定义控制台应用程序的入口点。
//
#include "Proxy.h"
#include "Pursuit.h"
#include "SchoolGirl.h"


int main(int argc, char* argv[])
{
	SchoolGirl* mm = new SchoolGirl("赵娟");

	Proxy* gg = new Proxy(mm);
	gg->GiveDolls();
	gg->GiveFlowers();
	gg->GiveChocolate();

	cin.ignore();
	return 0;
}

