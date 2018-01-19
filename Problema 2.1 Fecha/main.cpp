#include <windows.h>
#include <string>
#include <sstream>

using std::string;

class Date
{
	private: int year, month, day;
	
	public: Date(int year, int month, int day)
	{
		this->setDate(year, month, day);
	}
	
	public: void restart(int year, int month, int day)
	{
		this->setDate(year, month, day);
	}
	
	public: void advance(int year, int month, int day)
	{
		this->year += year;
		this->month += month;
		this->day += day;
	}
	
	private: void setDate(int year=1, int month=1, int day=1)
	{
		this->year = year;
		this->month = month;
		this->day = day;
		this->normalize();
	}
	
	public: string show ()
	{
		string year = static_cast<std::ostringstream*>(&(std::ostringstream() << this->year))->str();
		string month = static_cast<std::ostringstream*>(&(std::ostringstream() << this->month))->str();
		string day = static_cast<std::ostringstream*>(&(std::ostringstream() << this->day))->str();
		return year + "/" + month + "/" + day;
	}
	
	private: normalize()
	{
		bool isMonth = this->month<=12 && this->month>=1;
		bool isYear = this->year >= 1;
		bool isDay = this->day>= 1 && this->day <= this->calculateDayOfMonth();	
		if(!isMonth)
		{
			this->month=1;
		}
		if(!isYear)
		{
			this->year=2000;
		}
		if(!isDay)
		{
			this->day=1;
		}	
	}
	
	private: int calculateDayOfMonth()
	{
		switch (this->month)
			{
				case 1: case 3: case 5: case 7: case 8: case 10: case 12:
					return 31;
					break;
					
				case 4: case 6: case 9: case 11:
					return 30;
					break;
								
				case 2:
					if(this->isLeapYear())
						return 29;
			    	else
						return 28;
					break;
				  
				default:
					return false;
			}
	}
	
	private: bool isLeapYear()
	{
		bool isDivisibleBy400 = this->year%400 == 0;
		bool isDivibleBy4 = this->year%4 == 0;
		bool isDivisibleBy100 = this->year % 100 == 0;
		
		return isDivisibleBy400 || (isDivibleBy4 && !isDivisibleBy100);
	}
	
};


int WINAPI WinMain(HINSTANCE hInstancia, HINSTANCE hInstanciaPrev,
                   LPSTR lpszLineaCmd, int nEstadoVentana)
{
	
	Date date(2018,01,19);
	
	string str = date.show();
	
	const char* c = str.c_str();
	MessageBox(NULL,c,"Fecha de hoy", MB_OK | MB_ICONINFORMATION);
    
	return 0;
}
