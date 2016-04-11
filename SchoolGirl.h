#ifndef SCHOOLGIRL_H
#define SCHOOLGIRL_H

#include <string>
#include <iostream>

using namespace std;

class SchoolGirl
{
public:
	SchoolGirl(const string& n);
	~SchoolGirl(void);
public:
	string GetName();
private:
	string name;
};

#endif


