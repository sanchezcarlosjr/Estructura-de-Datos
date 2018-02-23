#include "VectorView.h"
#include "EscapesSequences.h"

VectorView::interact()
{
	string max = "Valor maximo:\t";
	string min = "Valor minimo:\t";
	
	cout<<"ENTEROS"<<LINEBREAK;
	Vector<int> vector;
	vector.push(1); vector.push(2); vector.push(3); vector.push(10); vector.push(1);
	cout<<max<<vector.calculateMax()<<LINEBREAK;
	cout<<min<<vector.calculateMin()<<LINEBREAK;
	
	cout<<"DOUBLE"<<LINEBREAK;
	Vector<double> vector2;
	vector2.push(1.4); vector2.push(1.2); vector2.push(1.8); vector2.push(1.10); vector2.push(1.40);
	cout<<max<<vector2.calculateMax()<<LINEBREAK;
	cout<<min<<vector2.calculateMin()<<LINEBREAK;
	
	cout<<"CARACTERES"<<LINEBREAK;
	Vector<char> vector3;
	vector3.push('c'); vector3.push('a'); vector3.push('m'); vector3.push('e'); vector3.push('u');
	cout<<max<<vector3.calculateMax()<<LINEBREAK;
	cout<<min<<vector3.calculateMin()<<LINEBREAK;
}
