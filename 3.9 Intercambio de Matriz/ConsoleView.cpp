#include <iostream>
#include "MatrixView.cpp"

class ConsoleView
{	
	private: MatrixView matrix;
	public: start ()
	{
		matrix.store();
		std::cout<<"\nAntes del intercambio:\n\n";
		matrix.display();
		std::cout<<"\nIntercambio:\n";
		matrix.swap();
		std::cout<<"\nDespues del intercambio\n\n";
		matrix.display();
	}
	
};
