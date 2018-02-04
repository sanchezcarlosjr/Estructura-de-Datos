#include <iostream>
#include "EscapesSequences.cpp"
#include "HagmanGame.cpp"

using std::string;
using std::cout;
using std::cin;

class HagmanGameView
{
	string titleApp;
	
	public: HagmanGameView()
	{
		this->titleApp = "Problema 3.7 Juego del horcado"; 
		this->titleApp += LINEBREAK;
		this->titleApp += LINEBREAK;
	}
	
	public: start()
	{
		HagmanGame game;
		
		cout<<titleApp;	
		
		int modeGame;
		
		cout<<"Modos de juego"<<LINEBREAK;
		cout<<"1. vs otra Persona"<<HORIZONTALTAB;
		cout<<"2. vs Computadora"<<HORIZONTALTAB;
		cout<<"Modo:";cin>>modeGame;
		
		game.setModeGame(modeGame);
		
		string wordAttempt;
		int attempts=1;
		do
		{
			for(int i=0; i<game.hiddenWordSize; i++)
			{
				cout<<"_"<<" ";
			}
			cout<<HORIZONTALTAB;
			cout<<"Intentos:"<<attempts;
			cout<<LINEBREAK;
			cout<<"Ingrese su intento:";
			cin>>wordAttempt;
			game.setWordAttempt(wordAttempt);
			attempts++;
		}while(game.exist());
		
		
		
	}
	
	
};
