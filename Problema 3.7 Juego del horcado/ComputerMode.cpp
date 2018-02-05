#include <stdlib.h>
#include <time.h>
#include "ComputerMode.h"

ComputerMode::ComputerMode()
{
	listHiddenWords();
	srand(time(NULL));
	int amountWords = 6;
	int randomNumber = rand() % (amountWords);
	temp = words[randomNumber].hiddenWord;
}

ComputerMode::listHiddenWords()
{
	words[0].hiddenWord = "GOOGLE";
	words[1].hiddenWord = "HOLA";
	words[2].hiddenWord = "LISTA";
	words[3].hiddenWord = "CASA";
	words[4].hiddenWord = "HOGAR";
	words[5].hiddenWord = "MEXICO";
	words[6].hiddenWord = "ENSENADA";
}

string ComputerMode::getHiddenWord()
{
	return temp;
}
