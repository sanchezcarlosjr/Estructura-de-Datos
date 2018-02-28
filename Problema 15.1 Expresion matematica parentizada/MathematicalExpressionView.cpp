#include "MathematicalExpressionView.h"
#include "EscapesSequences.h"

MathematicalExpressionView::interact()
{
	expresion = new MathematicalExpression("1+1");
	cout<<getIsCorrect();
}

MathematicalExpressionView::getIsCorrect()
{
	return (expression->isCorrect()) ? "Perfecto" : "Imperfecto";
}
