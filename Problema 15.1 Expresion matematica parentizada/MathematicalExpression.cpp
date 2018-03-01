#include "MathematicalExpression.h"

MathematicalExpression::MathematicalExpression(string expression)
{
	this->expression = "("+expression+")";
}

bool MathematicalExpression::isCorrect()
{	
	vector<bool> temp;
	for(int i=0; i<expression.size(); i++)
	{
		switch(expression[i])
		{
			case '(':  groupingSymbols.push(')'); break;
			case ')':  temp.push_back(xxx(')')); break;
			
			case '{':  groupingSymbols.push('}'); break;
			case '}':  temp.push_back(xxx('}')); break;
			
			case '[':  groupingSymbols.push(']'); break;
			case ']':  temp.push_back(xxx(']')); break;
		}
	}
	
	for(int i=0; i<temp.size();i++)
	{
		if(temp[i] == false)
		{
			return false;
		}
	}
	
	return true;
}
bool MathematicalExpression::xxx(char temp)
{
	bool result;
	if(groupingSymbols.empty())
	{
		result = false;
	}
	else
	{
		(temp == groupingSymbols.top()) ? result = true : result = false;
		groupingSymbols.pop();
	}
	return result;
}
