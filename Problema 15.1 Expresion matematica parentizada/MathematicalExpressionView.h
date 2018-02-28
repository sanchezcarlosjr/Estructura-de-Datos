#ifndef MATHEMATICALEXPRESSIONVIEW_H
#define MATHEMATICALEXPRESSIONVIEW_H

#include "Aplication.h"
#include "MathematicalExpression.h"


class MathematicalExpressionView : public Aplication
{	
	private: MathematicalExpression * expression;

	public:
		interact();
		string isCorrectView();
};

#endif
