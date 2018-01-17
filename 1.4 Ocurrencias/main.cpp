#include <iostream>
#include <string> 
#include <stdlib.h>

using namespace std; 

int compare(void const *pa, void const *pb)	
{
	char a = *((char *) pa);
	char b = *((char *) pb);
	   
	return a - b;
}
	
class OcurrencyLetters
{
	private: string wordOriginal;
	private: char wordProcced[100];
	private: int sizeString;
	
	private: struct word
	{
		char letter;
		int  frequency=1;
	}letters[50];
	
	public: OcurrencyLetters(string word)
	{
		this->wordOriginal = word;
		this->sizeString = this->wordOriginal.size();
	}
	
	public: void calculateOcurrency()
	{
		this->toUpperWord();
		this->toSortWord();
		int sizeLetters = this->findOcurrencyLetters();
		
		for(int i=0; i<sizeLetters; i++)
		{
			cout<<"\nLetra: ";
			cout<<letters[i].letter;
			cout<<"\tRepeticion: ";
			cout<<letters[i].frequency;
		}
		
	
	}
	
	private: void toUpperWord()
	{	
		for(int i=0; i<this->sizeString; i++)
		{
			this->wordProcced[i] = toupper(wordOriginal[i]);
		}
	}
	
	private: void toSortWord()
	{ 
		qsort (this->wordProcced, this->sizeString, 1, compare);
	}
	
	private: int findOcurrencyLetters()
	{
		int sizeLetters = 0;
		
		for(int i=0; i<this->sizeString; i++)
		{
			if(this->wordProcced[i] == this->wordProcced[i+1])
			{
				letters[sizeLetters].frequency++;
			}
			else{
				letters[sizeLetters].letter = this->wordProcced[i];
				sizeLetters++;
			}
		}
		
		return sizeLetters;
		
	}

};


int main(int argc, char** argv) 
{
	string str;
	cout<<"Palabra para Repeticiones: ";
	cin>>str;
	cout<<"\n";
	OcurrencyLetters ocurrencyLetters(str);
	ocurrencyLetters.calculateOcurrency();
	return 0;
}
