#include <iostream>
#include "MoreLongController.cpp"

using std::cout;
using std::string;
using std::cin;

class MoreLongView
{
	string number1, number2;

	public: input()
	{
		
		cout<<"Ingrese el numero 1: "; cin>>number1;
		cout<<"Ingrese el numero 2: "; cin>>number2;
	}
	
	public: output()
	{
		MoreLongController morelong;
		cout<<morelong.add(number1, number2);
	}
	
	
};
