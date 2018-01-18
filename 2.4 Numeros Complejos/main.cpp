#include <iostream>
#include <string>
#include <sstream>

using std::string;

class ComplexNumber
{
	private: double real, imaginary;
	
	public: ComplexNumber(double real, double imaginary)
	{
		this->real = real;
		this->imaginary = imaginary;
	}
	
	public: string show()
	{	 
		string real = static_cast<std::ostringstream*>(&(std::ostringstream() << this->real))->str();
		string imaginary = static_cast<std::ostringstream*>(&(std::ostringstream() << this->imaginary))->str();
		return real + " + " + imaginary +"i";
	}
	
	public: add(double real, double imaginary)
	{
		this->real = this->real + real;
		this->imaginary = this->imaginary + imaginary;
	}
	
	public: add(ComplexNumber complex)
	{
		this->real = this->real + complex.getReal();
		this->imaginary = this->imaginary + complex.getImaginary();
	}
	
	public: getReal()
	{
		return this->real;
	}
	
	public: getImaginary()
	{
		return this->imaginary;
	}
	
};



int main(int argc, char** argv) {
	ComplexNumber complex(1.2,2.7);
	ComplexNumber complex1(1,2);
	
	complex.add(complex1);
	
	std::cout<<complex.show();	
	
	return 0;
}
