#include <algorithm>
#include <vector>

class TypeSymbol
{
	private: char character;
	
	public: TypeSymbol(char character)
	{
		this->character = character;
	}
	
	public: determinate()
	{
		enum {VOWEL, CONSONANT, DIGIT, OTHER};
		if(isVowel())
		{
			return VOWEL;
		}
		if(isConsonat())
		{
			return CONSONANT;
		}
		if(isDigit())
		{
			return DIGIT;
		}
		return OTHER;
	}
	
	private: isVowel()
	{
		char vowels[] = { 'A','E','I','O','U'};
		return search(5, vowels);
	} 
	
	private: isConsonat()
	{
	    char consonats[] = { 'B','C','D','F','G', 'H', 'J', 'K', 'L', 'M', 'N', 'P', 'Q', 'R', 'S', 'T', 'V', 'W', 'X', 'Y', 'Z'};
	    return search(21, consonats);
	} 
	
	private: isDigit()
	{
		char digits[] = { '0','1','2','3','4','5','6','7','8','9'};
		return search(10, digits);
	}
	
	private: search(int size, char array[])
	{
		std::vector<char> temp(array,array+size); 
		return std::binary_search (temp.begin(), temp.end(), character);
	}
	
};
