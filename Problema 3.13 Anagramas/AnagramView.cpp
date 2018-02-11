#include <iostream>
#include "Words.cpp"
#include "EscapesSequences.h"

using std::string;
using std::cout;
using std::cin;

class AnagramView
{
	
	string word1, word2;
	
	public: interact()
	{
		cout<<"Palabra 1: "; cin>>word1;
		word1 = toUpper(word1);
		cout<<LINEBREAK;
		cout<<"Palabra 2: "; cin>>word2;
		word2 = toUpper(word2);
		Words words(word1,word2);
		cout<<LINEBREAK;
		cout<<"           ";
		if(words.isAnagrams())
		{
			cout<<"Son anagramas";
		}
		else
		{
			cout<<"No son anagramas";
		}
	}
	
	public: string toUpper(string word)
	{
		for(int i=0; i<word.size(); i++)
		{
			word[i] = toupper(word[i]);
		}
		return word;
	}
	
	
};
