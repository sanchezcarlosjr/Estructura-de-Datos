#include <iostream>
#include <string>
#include <sstream>

using std::string;

class Hour
{
	private: int hour, minutes, seconds;

	public: Hour(int hour, int minutes=0, int seconds=0)
	{
		this->hour = hour;
		this->minutes = minutes;
		this->seconds = seconds;
	}
	
	public: advance(int hour, int minutes, int seconds)
	{
		this->hour += hour;
		this->minutes += minutes;
		this->seconds += seconds;
	}
	
	public: string show()
	{
		string hour = static_cast<std::ostringstream*>(&(std::ostringstream() << this->hour))->str();
		string minutes = static_cast<std::ostringstream*>(&(std::ostringstream() << this->minutes))->str();
		string seconds = static_cast<std::ostringstream*>(&(std::ostringstream() << this->seconds))->str();
		return hour + ":" + minutes +":"+seconds;
	}
	
	public: restart(int hour, int minutes, int seconds)
	{
		this->hour = hour;
		this->minutes = minutes;
		this->seconds = seconds;
	}
	
};

int main(int argc, char** argv) 
{
	Hour hour(7);
	
	std::cout<<hour.show();
	return 0;
}
