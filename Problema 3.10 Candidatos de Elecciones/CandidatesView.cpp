#include <iostream>
#include "EscapesSequences.h"

using std::string;
using std::cout;
using std::cin;

class CandidatesView
{
	private: int amountDistricts;
	public: CandidatesView()
	{
		amountDistricts = 5;
	}
	public: interact()
	{
		string SPACE = "    ";
		string name1 = "Candidato A";
		string name2 = "Candidato B";
		string name3 = "Candidato C";
		string name4 = "Candidato D";
		cout<<"Distrito";
		cout<<HORIZONTALTAB<<name1;
		cout<<HORIZONTALTAB<<name2;
		cout<<HORIZONTALTAB<<name3;
		cout<<HORIZONTALTAB<<name4;
		for(int district=1; district<=amountDistricts; district++)
		{
			cout<<LINEBREAK;
			cout<<SPACE<<district;
			for(int candidate=0; candidate<4; candidate++)
			{
				cout<<HORIZONTALTAB<<HORIZONTALTAB<<SPACE<<194;	
			}
		}
	}
	
};
