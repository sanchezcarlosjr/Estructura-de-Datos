#include <iostream>

using std::ostream;
using std::string;

class Line
{
	public: string line;
	
	public: Line()
	{
		line = "Hola mundo";
	}
	
	private: friend ostream& operator << (ostream& stream, Line line)  
	{  
	    stream << line.line;  
	    return stream;  
	}  
};
