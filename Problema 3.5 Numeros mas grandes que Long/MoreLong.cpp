#include <iostream>
#include <sstream>
#include <cstdlib>

using std::string;

class MoreLong
{
	
	public: string addString(string number1, string number2)
	{
		string total;
		int num1, num2;
		int totalTemp, temp[3];
		
		
		for(int i=0; i<number1.size(); i++)
		{
			num1 = number1[i] - '0';
			num2 = number2[i] - '0';
			
			totalTemp = num1 + num2;
			if(i == 0)
			{ 
				temp[0] = totalTemp / 10;
				total += toString(temp[0]);
			}
			temp[1] = totalTemp-10;
			num1 = number1[i+1] - '0';
			num2 = number2[i+1] - '0';
			totalTemp = num1+num2;
			temp[2] = totalTemp/10;
			if(temp[2] < 0)
			{
				temp[2] = 0;
			}
			if(temp[1] < 0)
			{
				temp[1] = 0;
			}
			temp[1] = temp[1] + temp[2];
			total += toString(temp[1]);
		}
				
		return total;
	}
	
	
	public: string toString(int temp)
	{
		return static_cast<std::ostringstream*>(&(std::ostringstream() << temp))->str();
	}
	
};
