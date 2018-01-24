#include <iostream>
#include "MatrixView.cpp"

class ConsoleView
{
	MatrixView matrix;	
	public: start()
	{
		this->matrix.store();
		std::cout<<"\n";
		this->matrix.show();
		std::cout<<"\n\n";
		this->matrix.transpose();	
	}	
	
	
};
