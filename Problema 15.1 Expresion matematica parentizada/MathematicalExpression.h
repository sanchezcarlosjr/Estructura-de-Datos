#include <string>

using namespace std;

#ifndef MATHEMATICALEXPRESSION_H
#define MATHEMATICALEXPRESSION_H

class MathematicalExpression
{
	private: string expression;
	
	public:
		MathematicalExpression(string);
		bool isCorrect();
};

#endif
