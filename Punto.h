#pragma once
#include <string>
#include <sstream>

using namespace std;

class Punto {
	int x, y;
public:
	Punto(int x = 0, int y = 0) :x(x), y(y) {}

	string toString() {
		ostringstream  ss;
		ss << "p(";
		ss << x;
		ss << ", ";
		ss << y;
		ss << ")";
		return(ss.str());
	}	
};