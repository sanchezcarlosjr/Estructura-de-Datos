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


class ConsoleView
{
	public: void show()
	{
		int i=1;
		int seconds, minutes;
		bool flag=true;
		do
		{
			cout<<"Tiempo del corredor "<<i++;
			cout<<"\nMinutos: "; cin>>minutes;
			cout<<"\nSegundos: "; cin>>seconds;
			if( minutes == 0 && seconds == 0 )
			{
				flag = false;
			}
			else
			{
				this->showRunner(minutes, seconds);
			}
			cout<<"\n\n";
		}while(flag);
	}
	
	public: void showRunner(int minutes, int seconds)
	{
		Runner runner(minutes,seconds);
		cout<<"Velocidad es: "<< setprecision(2)  <<runner.calculateVelocity();
		cout<<"\nEl tiempo del corredor es:";
		cout<<" "<<runner.getMinutes()<<" Minutos";
		cout<<" "<<runner.getSeconds()<<" Segundos";
	}
	
	
	
};


int main(int argc, char** argv) {
	ConsoleView console;
	console.show();
	return 0;
}
