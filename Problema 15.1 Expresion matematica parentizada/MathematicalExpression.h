#include <string>
#include <stack>
#include <vector>

using namespace std;

#ifndef MATHEMATICALEXPRESSION_H
#define MATHEMATICALEXPRESSION_H

class MathematicalExpression
{
	private: string expression;
	private: stack<char> groupingSymbols;
	
	public:
		MathematicalExpression(string);
		bool isCorrect();
		
	private:
		bool xxx(char temp); 
};

#endif
