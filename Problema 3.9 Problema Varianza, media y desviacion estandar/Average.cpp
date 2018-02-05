#include <iostream>
class Average
{
	private: int elements[10], amountElements;
	
	public: Average(int elements[], int amountElements)
	{
		this->amountElements = amountElements;
		for(int element=0; element<amountElements; element++)
		{
			this->elements[element] = elements[element];
		}
	}
	
	public: calculate()
	{
		int sum =0;
		for(int element=0; element<amountElements; element++)
		{
			sum += this->elements[element]; 
		}
		return sum / amountElements;
	}
	
	
	
};
