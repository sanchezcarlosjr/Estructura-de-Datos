#include <iostream>
#include <cstdlib>

using std::string;

class Potatoes
{
	struct number
	{
		string textNumber;
		int number;
	}numbers[100];
	
	string text;
	string measureMass;
	
	public: Potatoes(string text)
	{
		this->text = text;
		this->measureMass = "kg";
	}
	
	
	public: find()
	{
		string temp;
		string numberTemp;
		int position;
		int iterator=0;
		
		while( isASearch() )
		{
			position = text.find(this->measureMass);			
			text.replace(position, 1, " ");
			position--;
			temp = identifyNumber(position);
			numbers[iterator].textNumber = investNumber(temp);
			iterator++;
		}
		
		return add(iterator);
	}
	
	private: isASearch()
	{
		int null = (int)string::npos;
		return text.find(this->measureMass ) != null;
	}
	
	
	private: string identifyNumber(int position)
	{
		string temp = "";
		const char SPACE = ' ';
		while( text[position] != SPACE )
		{
			temp += text[position];
			position--;
		}
		return temp;
	}
	
	private: string investNumber(string number)
	{
		string numberTemp = "";
		int digitsNumber = number.size()-1;
		for(int i=digitsNumber; i>=0; i--)
		{
			numberTemp += number[i];
		}
		return numberTemp;
	}
	
	
	private: add(int iterator)
	{
		int sum=0;
		for(int i=0; i<iterator; i++)
		{
			numbers[i].number = atoi(numbers[i].textNumber.c_str());
			sum += numbers[i].number;
		}
		
		return sum;
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	public: string getMeasureMass()
	{
		return this->measureMass;
	}
	
	
	
	
};
