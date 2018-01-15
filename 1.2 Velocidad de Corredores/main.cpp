#include <iostream>
#include <iomanip>

using std::cin;
using std::cout;
using std::setprecision;

class Runner
{
	
	private:
		int minutes, seconds;
	
	public: Runner(int minutes, int seconds)
	{
		this->minutes = minutes;
		this->seconds = seconds;
	}
	
	public: float calculateVelocity()
		{
			float distance = 1500;
			float velocity = distance / this->calculateTime();;
			return velocity;
		}
		
	private: float calculateTime()
		{
			return (this->minutes*60 + this->seconds);
		}
		
	public: float getMinutes()
	{
		return this->minutes;
	}
	
	public: float getSeconds()
	{
		return this->seconds;
	}
	
};


int main(int argc, char** argv) {
	Runner runner(3,53);
	cout<<"Velocidad es: "<< setprecision(2)  <<runner.calculateVelocity();
	cout<<"\nEl tiempo del corredor es:";
	cout<<" "<<runner.getMinutes()<<" Minutos";
	cout<<" "<<runner.getSeconds()<<" Segundos";
	
	return 0;
}
