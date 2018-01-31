#include <stdlib.h>

class Array
{
	private: int *array = NULL;
	private: int iterator=0;
	private: int size=10;
	
	public: Array()
	{
		array = resize();
	}
	
	public: push(int value)
	{
		array[iterator] = value;
		iterator++;
		size++;
		array = resize();
	}
	
	public: getSize()
	{
		int overFlow = 11;
		return this->size - overFlow;
	}
	
	private: int* resize()
	{
	   int newSize = size * sizeof(int);
	   return (int *) realloc(array, newSize);
	}
	
	public: operator [] (int value)
	{
		return array[value]; 
	}
	
};
