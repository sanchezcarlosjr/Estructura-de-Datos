#include "MathematicalExpressionView.h"
#include "EscapesSequences.h"

MathematicalExpressionView::interact()
{
	expression = new MathematicalExpression("1+1");
	cout<<isCorrectView();
}

string MathematicalExpressionView::isCorrectView()
{
	return (expression->isCorrect()) ? "Perfecto" : "Imperfecto";
}
