#include "File.h"

File::File()
{
	this->route = "Database.txt";
}

vector<Person> File::find(string title, string order)
{
	this->title = title;
	persons.clear();
	read();
	if("byLastName" == order)
	{
		sort(persons.begin(), persons.end());
	}
	return persons;
}

File::read()
{
	enum {TITLE, NAME, LASTNAME, AGE};
	vector<string> information;
	string line;
	char temp[200];
	
	ifstream DB(route.c_str());
	
	if(DB.fail())
	{
		persons.push_back( Person(title, "Error", "Archivo no encontrado" , -1) );
	}	
	else
	{
		int i=0;
		while(!DB.eof())
		{
			DB.getline(temp,200);
			line = temp;
			information = explode(line, "|");
			if(title == information[TITLE])
			{
				persons.push_back( Person(title, information[NAME], information[LASTNAME], toInt(information[AGE])) );
			}
		}
	}
	DB.close();
}

vector<string> File::explode(string str, string separator)
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

int File::toInt(string str)
{
	return atoi(str.c_str());
}

bool File::comparation (Person temp1, Person temp2 )
{
	return temp1.getLastName() < temp2.getLastName();
}

