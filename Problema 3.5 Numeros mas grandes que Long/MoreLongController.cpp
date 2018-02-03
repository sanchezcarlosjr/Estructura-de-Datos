#include <iostream>
#include "MoreLong.cpp"

using std::string;

class MoreLongController
{
	MoreLong moreLong;
	public: string add(string number1, string number2)
	{
		MoreLong total;
		string sum = total.addString(number1, number2);
		return "Total de la suma es: " + sum;
	}
};
