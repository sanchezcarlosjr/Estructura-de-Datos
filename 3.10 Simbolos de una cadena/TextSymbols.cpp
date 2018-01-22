#include <string>
#include "TypeSymbol.cpp"

using namespace std;  

class TextSymbols
{
	private: string text;
	
	private: struct symbols
	{
		int vowels=0;
		int consonats=0;
		int digits=0;
		int others=0;
	}symbols;
	
	public: TextSymbols(string text)
	{
		this->text = text;
		this->toUpperText();
	}
	
	private: void toUpperText()
	{	
		for(int i=0; i<this->text.size(); i++)
		{
			this->text[i] = toupper(this->text[i]);
		}
	}
	
	public: calculateTextSymbolos()
	{
		for(int i=0; i<this->text.size(); i++)
		{
			addSymbol(text[i]);
		}
	}
	
	private: addSymbol(char character)
	{
		TypeSymbol typeSymbol(character);
		enum {VOWEL, CONSONANT, DIGIT, OTHER};
		switch(typeSymbol.determinate())
		{
			case VOWEL: symbols.vowels++; break;
			case CONSONANT: symbols.consonats++; break;
			case DIGIT: symbols.digits++; break;
			case OTHER: symbols.others++; break;
		}
	}	
	
	public: getTotalVowels()
	{
		return this->symbols.vowels;
	}
	
	public: getTotalConsonats()
	{
		return this->symbols.consonats;
	}
	
	public: getTotalDigits()
	{
		return this->symbols.digits;
	}
	 	
};

