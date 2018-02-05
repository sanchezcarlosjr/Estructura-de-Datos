#include <iostream>
#include <algorithm>

using std::string;
using std::transform;

class HagmanGame
{	
	public: string hiddenWord;
	private: string temp2;
	public: int hiddenWordSize;
	public: string wordMatch;

	public: HagmanGame(string hiddenWord)
	{
		this->hiddenWord = hiddenWord;
		this->temp2 = hiddenWord;
		this->hiddenWordSize = this->hiddenWord.size();
		for(int i=0; i<hiddenWordSize; i++)
		{
			wordMatch += "_";
		}
	}

	public: exist(string wordAttempt)
	{
		transform(wordAttempt.begin(), wordAttempt.end(), wordAttempt.begin(), ::toupper);
		
		int position;
		while( isASearch(wordAttempt) )
		{
			position = temp2.find(wordAttempt);
			wordMatch[position] = wordAttempt[0]; 	
			temp2[position] = '_';	
		}
		
		return !(this->hiddenWord == wordMatch);
	}

	private: isASearch(string wordAttempt)
	{
		int null = (int)string::npos;
		return temp2.find(wordAttempt) != null;
	}	
	
};
