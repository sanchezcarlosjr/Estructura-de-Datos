#include "MathematicalExpressionView.h"
#include "EscapesSequences.h"

MathematicalExpressionView::interact()
{
	string temp;
	cout<<"Expresion:";cin>>temp;
	expression = new MathematicalExpression(temp);
	cout<<isCorrectView();
}

string MathematicalExpressionView::isCorrectView()
{
	return (expression->isCorrect()) ? "Perfecto" : "Imperfecto";
}
