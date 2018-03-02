#include "MathematicalExpression.h"

MathematicalExpression::MathematicalExpression(string expression)
{
	this->expression = "("+expression+")";
}

bool MathematicalExpression::isCorrect()
{	
	findGroupingSymbols();
	if(searchResults.size()-1 == 0)
	{
		return false;
	}
	for(int i=0; i<searchResults.size();i++)
	{
		if(searchResults[i] == false)
		{
			return false;
		}
	}	
	return true;
}

MathematicalExpression::findGroupingSymbols()
{
	enum {PARETHESIS = '(', BRACES='{', SQUAREBRAKETS ='['};
	enum {INVERSEPARETHESIS = ')', INVERSEBRACES='}', INVERSESQUAREBRAKETS=']'};
	for(int i=0; i<expression.size(); i++)
	{
		switch(expression[i])
		{
			case PARETHESIS:groupingSymbols.push(INVERSEPARETHESIS); break;
			case INVERSEPARETHESIS:searchResults.push_back(find(INVERSEPARETHESIS)); break;
			case BRACES:  groupingSymbols.push(INVERSEBRACES); break;
			case INVERSEBRACES:  searchResults.push_back(find(INVERSEBRACES)); break;
			case SQUAREBRAKETS:  groupingSymbols.push(INVERSESQUAREBRAKETS); break;
			case INVERSESQUAREBRAKETS:  searchResults.push_back(find(INVERSESQUAREBRAKETS)); break;
		}
	}
}


bool MathematicalExpression::find(char temp)
{
	if(groupingSymbols.empty())
	{
		return false;
	}
	else
	{
		char top = groupingSymbols.top();
		groupingSymbols.pop();
		return (temp == top) ? true : false;
	}
}
