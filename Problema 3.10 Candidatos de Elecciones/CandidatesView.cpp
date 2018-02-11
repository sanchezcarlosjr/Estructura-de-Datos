#include <iostream>
#include "EscapesSequences.h"

using std::string;
using std::cout;
using std::cin;

class CandidatesView
{
	private: struct Candidates
	{
		string name;
		int district[5];
		int sum=0;
	}candidates[4];
	private: int amountDistricts;
	public: CandidatesView()
	{
		amountDistricts = 5;
		candidates[0].name = "A";
		candidates[0].district[0] = 194;
		candidates[0].district[1] = 180;
		candidates[0].district[2] = 221;
		candidates[0].district[3] = 432;
		candidates[0].district[4] = 820;
		
		candidates[1].name = "B";
		candidates[1].district[0] = 48;
		candidates[1].district[1] = 20;
		candidates[1].district[2] = 90;
		candidates[1].district[3] = 50;
		candidates[1].district[4] = 61;
		
		
		
		candidates[2].name = "C";
		candidates[2].district[0] = 206;
		candidates[2].district[1] = 320;
		candidates[2].district[2] = 140;
		candidates[2].district[3] = 821;
		candidates[2].district[4] = 946;
		
		candidates[3].name = "D";
		candidates[3].district[0] = 45;
		candidates[3].district[1] = 16;
		candidates[3].district[2] = 20;
		candidates[3].district[3] = 14;
		candidates[3].district[4] = 18;
	}
	public: interact()
	{
		string SPACE = "    ";
		cout<<"Distrito";
		for(int i=0; i<4; i++)
		{
			cout<<HORIZONTALTAB<<"Candidato";
		}
		cout<<HORIZONTALTAB<<SPACE;
		for(int i=0; i<4; i++)
		{
			cout<<HORIZONTALTAB<<HORIZONTALTAB<<SPACE<<candidates[i].name;
		}
		cout<<LINEBREAK;
		int total=0;
		for(int district=0; district<5;district++)
		{
			cout<<SPACE<<district+1;
			for(int candidate=0; candidate<4; candidate++)
			{
				cout<<HORIZONTALTAB<<HORIZONTALTAB<<"   "<<candidates[candidate].district[district];
				candidates[candidate].sum += candidates[candidate].district[district];
				total += candidates[candidate].district[district];
			}
			cout<<LINEBREAK;
		}
		
		cout<<LINEBREAK;
		cout<<"Candidatos:";
		int percent;
		for(int candidate=0; candidate<4; candidate++)
		{
			cout<<LINEBREAK;
			percent = (double)candidates[candidate].sum/total *100;
			cout<<candidates[candidate].name;
			cout<<HORIZONTALTAB<<candidates[candidate].sum;
			cout<<"("<<percent<<"%)";
		}
		cout<<LINEBREAK;
		cout<<"Candidato C es el ganador";
		
		
		
		
	}
	
};
