#include <iostream>

using std::cin;
using std::cout;
using std::endl;


int main(int argc, char** argv) {
	int salary, hoursWorked, hourlyRate;
	
	cout<<"Mi tarifa es: "; cin>>hourlyRate;
	cout<<"Mis horas trabajadas:  "; cin>>hoursWorked;
	salary = hourlyRate * hoursWorked;
	cout<<"Salario: "<<salary;
	return 0;
}
