#include <iostream>
#include <algorithm>
#include<cstring>

using std::ostream;
using std::string;
using std::sort;

class Line
{
	public: string line;
	public: string charMoreRepeated;

	public: Line(string line)
	{
		this->line = "HOLA MUNDO"; 
	}
	
	public: replace()
	{
		findCharThatIsMoreRepeated();
		char vowels[5] = {'A', 'E', 'I', 'O', 'U'};
		int position;
		char temp[2];
		for(int i=0; i<5; i++)
		{
			while ( ( position = line.find(vowels[i]) ) != string::npos)
			{
				strcpy(temp, charMoreRepeated.c_str());
				if(temp[0] == vowels[i])
				{
					break;
				}
				line.replace(position, 1 , charMoreRepeated);
			}
		}
	
	}
	
	private: findCharThatIsMoreRepeated()
	{ 	
		int  amountRepeatedTimesCharMoreRepeated=0;
		int amountChar[line.size()];
		for(int i=0; i<line.size();i++)
		{
			amountChar[i] = 0;
		}
		int j=0;
		string temp = line;
		sort(temp.begin(), temp.end());
		for(int i=0; i<temp.size(); i++)
		{
			if( temp[i] == temp[i+1] )
			{
				amountChar[j]++;
			}
			else
			{
				if( (amountChar[j] > amountRepeatedTimesCharMoreRepeated ) )
				{
					amountRepeatedTimesCharMoreRepeated = amountChar[j];
					charMoreRepeated = temp[i];	
				}
				j++;
			}	
		}
	}
	
	private: friend ostream& operator << (ostream& stream, Line line)  
	{  
	    stream << line.line <<"  "<<"Mas repetido:"<<line.charMoreRepeated;  
	    return stream;  
	}  

};
