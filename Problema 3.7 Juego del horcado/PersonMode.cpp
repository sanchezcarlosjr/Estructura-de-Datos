#include <iostream>
#include "PersonMode.h"

using std::cout;
using std::cin;

PersonMode::PersonMode()
{
	cout<<"Ingrese la palabra oculta: ";
	cin>>hiddenWord;
	cout<<"\n\n";
}

string PersonMode::getHiddenWord()
{
	return hiddenWord;
}
