#include <iostream>
#include "Array.cpp"


class ConsoleView
{
	Array array;
	
	public: void start()
	{
	  std::cout<<"La suma de la no diagonal es: "<<this->array.addElementsThatAreNotMainDiagonal();
	}
	
};
