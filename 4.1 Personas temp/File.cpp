#include "Person.h"
#include "File.h"

File::File()
{
	this->route = "Database.txt";
}

vector<Person> File::find(string value)
{
	vector<Person> persons;
	
	Person person;
	person.setName("Carlos");
	person.setAge(18);
	persons.push_back(person);
	return persons;
}

string Person::read()
{
	char delim = '|';
	string content;
	char temp[200];
	
	ifstream file(route.c_str());
	
	if(file.fail())
	{
		content = "Error al abrir archivo";
	}	
	else
	{
		int i=0;
		while(!file.eof())
		{
			file.getline(temp,200, delim);
			content += temp;
		}
	}
	file.close();
	return content;
}

vector<string> Person::explode(string str, string separator)
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
