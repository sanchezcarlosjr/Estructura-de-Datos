#include "PalindromeView.h"
#include "EscapesSequences.h"

PalindromeView::interact()
{
	string temp;
	cout<<"Frase:"; getline(cin, temp);
	sentence = temp;
	cout<<"La frase "<<isPalindromeView();
}

string PalindromeView::isPalindromeView()
{
	return (sentence.isPalindrome()) ? "es palindroma" : "no es palindroma";
}
