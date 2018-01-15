#include <iostream>
using std::cin;
using std::cout;
using std::endl;

class TermSuccesionView
{	
	public:
		void displayResult(int sumOfSuccesion)
		{
			cout<<"La suma es igual a: "<<sumOfSuccesion;
		}
	
};


int main(int argc, char** argv) 
{
	
	int n=4,succesionTerm=0, lim=100;
	
	for(int i=1; i<=lim; i++)
	{
		succesionTerm = n *i;
		cout<<succesionTerm<<" ";
	}
	
	int constTerm = n + succesionTerm;
	int sumOfSucession = constTerm * (lim/2);
	
	TermSuccesionView termSucessionView;
	termSucessionView.displayResult(sumOfSucession);
		
	return 0;
}





