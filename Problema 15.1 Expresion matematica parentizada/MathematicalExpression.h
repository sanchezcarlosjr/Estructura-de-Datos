#include <string>
#include <stack>
#include <vector>

using namespace std;

#ifndef MATHEMATICALEXPRESSION_H
#define MATHEMATICALEXPRESSION_H

class MathematicalExpression
{
	private: string expression;
	private: vector<bool> searchResults;
	private: stack<char> groupingSymbols;
	
	public:
		MathematicalExpression(string);
		bool isCorrect();
		
	private:
		findGroupingSymbols();
		bool find(char temp); 
};

#endif
