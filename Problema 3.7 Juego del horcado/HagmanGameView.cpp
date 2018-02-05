#include <iostream>
#include "Mode.h"
#include "ComputerMode.h"
#include "PersonMode.h"
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
		cout<<titleApp;	
		
		int modeGame;
		
		cout<<"Modos de juego"<<LINEBREAK;
		do
		{
			cout<<"1. vs otra Persona"<<HORIZONTALTAB;
			cout<<"2. vs Computadora"<<HORIZONTALTAB;
			cout<<"Modo:";cin>>modeGame;
		}while( !(modeGame == 1 || modeGame==2));
		
	
		Mode* mode;
		
		switch(modeGame)
		{
			case 1: mode = new PersonMode; break;
			case 2: mode = new ComputerMode; break;
		}

		HagmanGame game(mode->getHiddenWord());
		
		string wordAttempt;
		int attempts=10;
		do
		{
			cout<<LINEBREAK;
			for(int i=0; i<game.hiddenWordSize; i++)
			{
				cout<<game.wordMatch[i]<<" ";
			}
			cout<<HORIZONTALTAB;
			cout<<"Intentos:"<<attempts;
			cout<<LINEBREAK;
			cout<<"Ingrese su intento:";
			cin>>wordAttempt;
			attempts--;
		}while(game.exist(wordAttempt));
		
		cout<<LINEBREAK;
		cout<<"PALABRA:"<<game.hiddenWord;
		cout<<LINEBREAK;
		cout<<"-JUEGO TERMINADO-";
		
	}
	
	
	
	
};
