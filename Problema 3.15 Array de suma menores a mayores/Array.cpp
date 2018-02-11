#include <stdlib.h>
#include <algorithm>
#include <vector>

using std::sort;
using std::vector;

class Array
{
	private: int *array = NULL;
	private: int iterator = 0;
	private: int size = 10;
	
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
	
	public: Size()
	{
		int overFlow = 11;
		return this->size-overFlow;
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
	
	public: sortWithIndicatedDistribution()
	{
		vector<int> temp(array,array+Size()); 
		sort(temp.begin(),temp.end());
		int j = Size()-1;
		for(int i=0; i<Size(); i++)
		{
			array[i] = temp[j];
			j--;
		}
	}
	
};
