#include <iostream>

#include "ComplexNumber.cpp"

int main(int argc, char** argv) {
	ComplexNumber complexA(1.2,2.7);
	ComplexNumber complexB(2,3);
	ComplexNumber result;
	
	std::cout<<"\nSuma de numeros ";
	result = complexA + complexB;
	std::cout<<result.show();	
	
	std::cout<<"\nResta de numeros ";
	result = complexA - complexB;
	std::cout<<result.show();
	
	std::cout<<"\nMultiplicacion (real-img) de numeros ";
	result = complexA * 2;
	std::cout<<result.show();
	
	std::cout<<"\nMultiplicacion (img-img) de numeros ";
	result = complexA * complexB;
	std::cout<<result.show();
	
	std::cout<<"\nConjugado del num. img ";
	result = ~complexA;
	std::cout<<result.show();
	
	
	return 0;
}
