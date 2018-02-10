#include <iostream>

using std::ostream;
using std::string;

class Line
{
	public: string line;
	
	public: Line()
	{
		line = "HAY UNA FUERZA MAS GRANDE QUE LA ELECTRICIDAD O LA ENERGIA NUCLEAR: LA VOLUNTAD HUMANA";
	}
	
	private: friend ostream& operator << (ostream& stream, Line line)  
	{  
	    stream << line.line;  
	    return stream;  
	}  
};
