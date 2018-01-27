#include <ctime>
#include <sstream>
#include <string>
#include <iostream>

using std::string;

class Date
{
	string date;
	struct tm* timeStamp;
	
	public: Date()
	{
		time_t tSac = time(NULL);
		this->timeStamp = localtime(&tSac);
	}
	
	public: string getDate()
	{
		string day = toString(this->timeStamp->tm_mday);
		string month = determinateMonth(this->timeStamp->tm_mon+1);
		string year = toString(this->timeStamp->tm_year+1900);
		return day + " de " + month + " " + year;
	}
	
	private: string toString(int temp)
	{
		return static_cast<std::ostringstream*>(&(std::ostringstream() << temp))->str();
	}
	
	private: string determinateMonth(int month)
	{
		switch(month)
		{
			case 1: return "Enero"; break;
			case 2: return "Febrero"; break;
			case 3: return "Marzo"; break;
			case 4: return "Abril"; break;
			case 5: return "Mayo"; break;
			case 6: return "Junio"; break;
			case 7: return "Julio"; break;
			case 8: return "Agosto"; break;
			case 9: return "Septiembre"; break; 
			case 10: return "Octubre"; break;
			case 11: return "Noviembre"; break;
			case 12: return "Diciembre"; break;
			default: return "Falso";
		}
	}
	
	
	
};


