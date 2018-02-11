#include <iostream>
#include <algorithm>

using std::string;
using std::sort;

class Words
{
	private: string word1, word2;
	private: int size;
	
	public: Words(string word1, string word2)
	{
		this->word1 = word1;
		this->word2 = word2;
		if( word1.size() > word2.size() )
		{
			size = word1.size();
		}
		else
		{
			size = word2.size();
		}
	}
	public: bool isAnagrams()
	{
		sort(word1.begin(), word1.end());
		sort(word2.begin(), word2.end());
		return compare();
	}
	
	private: compare()
	{
		for(int i=0; i<size; i++)
		{
			if(word1[i] != word2[i])
			{
				return false;
			}
		}
		return true;
	}
	
};
