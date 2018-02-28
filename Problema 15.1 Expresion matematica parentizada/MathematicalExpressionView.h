#ifndef MATHEMATICALEXPRESSIONVIEW_H
#define MATHEMATICALEXPRESSIONVIEW_H

#include "Aplication.h"

class MathematicalExpressionView : public Aplication
{	
	private: MathematicalExpression * expression;

	public:
		interact();
		getIsCorrect();
};

#endif
