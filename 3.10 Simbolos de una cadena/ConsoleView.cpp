#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include "TextSymbols.cpp"

class ConsoleView
{
	public: start()
	{
		std::cout<<"Ingrese ESC, para salir";
		std::cout<<"\n-----------------------------------------------------\n";
		string text;
		std::getline (std::cin,text,'\t');
		TextSymbols symbols(text);
		symbols.calculateTextSymbolos();
		std::cout<<"\n-----------------------------------------------------\n";
		std::cout<<"\tVocales: "<<symbols.getTotalVowels();
		std::cout<<"\tConsonantes: "<<symbols.getTotalConsonats();
		std::cout<<"\tDigitos: "<<symbols.getTotalDigits();;
	}
};
