#include <iostream>
#include "MoreLong.cpp"

using std::string;

class MoreLongController
{
	MoreLong moreLong;
	public: string add(string number1, string number2)
	{
		MoreLong moreLong(number1, number2);
		string sum = moreLong.add();
		return "Total de la suma es: " + sum;
	}
};
