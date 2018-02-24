#include "Date.h"

Date::Date()
{
	this->separator = "/";
	this->date = explode("01/01/1700", this->separator);
	dayOfWeek.push_back("Domingo");
	dayOfWeek.push_back("Lunes");
	dayOfWeek.push_back("Martes");
	dayOfWeek.push_back("Miercoles");
	dayOfWeek.push_back("Jueves");
	dayOfWeek.push_back("Viernes");
	dayOfWeek.push_back("Sabado");
}

vector<string> Date::explode(string str, string separator)
{
	vector<string> results;
	
	int found = str.find_first_of(separator);
    while(found != string::npos){
        if(found > 0){
            results.push_back(str.substr(0,found));
        }
        str = str.substr(found+1);
        found = str.find_first_of(separator);
    }
    if(str.length() > 0){
        results.push_back(str);
    }
    
    return results;
}


Date:: operator = (string date)
{
	this->date = explode(date, separator);;
}

ostream& operator << (ostream& stream, Date & date)  
{  
	stream << date.getDate();  
	return stream;  
}  

string Date::getDate()
{
	return date[DAY] +  separator + date[MONTH] + separator + date[YEAR];
}

string Date::determineDayOfWeek()
{
	int constantProgression = ( 14 - toInt(date[MONTH]) )/12;
	int year = toInt(date[YEAR]) - constantProgression;
	int month =  toInt(date[MONTH]) + 12 * constantProgression - 2;
	
	int day = (toInt(date[DAY]));
	int numberOfDay =    ( day + year + year/4 - year/100 + year/400 + (31 *month)/12) % 7;
		
	return  dayOfWeek[numberOfDay];
}

int Date::toInt(string temp)
{
	return atoi(temp.c_str());
}



