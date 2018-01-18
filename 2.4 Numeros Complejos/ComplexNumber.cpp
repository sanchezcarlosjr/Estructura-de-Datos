#include <string>
#include <sstream>

using std::string;

class ComplexNumber
{
	public: double real, imaginary;
	
	public: ComplexNumber(double real, double imaginary)
	{
		this->real = real;
		this->imaginary = imaginary;
	}
	
	public: ComplexNumber()
	{
		
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
	
	public: ComplexNumber operator + (ComplexNumber numberA)
	{
		ComplexNumber result;
		result.real = this->real + numberA.real;
		result.imaginary = this->imaginary + numberA.imaginary;
	
		return result;
	}
	
	public: ComplexNumber operator - (ComplexNumber numberA)
	{
		ComplexNumber result;
		result.real = this->real - numberA.real;
		result.imaginary = this->imaginary - numberA.imaginary;
	
		return result;
	}
	
	public: ComplexNumber operator * (double numberA)
	{
		ComplexNumber result;
		result.real = this->real * numberA;
		result.imaginary = this->imaginary * numberA;
	
		return result;
	}
	
	public: ComplexNumber operator * (ComplexNumber numberA)
	{
		ComplexNumber result;
		result.real = ( this->real * numberA.real) - ( this->imaginary * numberA.imaginary ) ;
		result.imaginary = ( this->real * numberA.imaginary ) + ( this->imaginary * numberA.real ) ;
	
		return result;
	}
	
	public: ComplexNumber operator ~()
	{
		ComplexNumber result;
		result.real = this->real ;
		result.imaginary =  - this->imaginary ;
	
		return result;
	}
	
	
};
