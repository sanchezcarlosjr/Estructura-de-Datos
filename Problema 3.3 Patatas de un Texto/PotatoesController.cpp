#include <iostream>
#include <sstream>
#include "Potatoes.cpp"

using std::string;

class PotatoesController
{
	
	public: string add(string text)
	{
		Potatoes potatoes(text);
		string sum = toString(potatoes.find());
		return sum + potatoes.getMeasureMass();
	}
	
	private: string toString(int temp)
	{
		return static_cast<std::ostringstream*>(&(std::ostringstream() << temp))->str();
	}
};
