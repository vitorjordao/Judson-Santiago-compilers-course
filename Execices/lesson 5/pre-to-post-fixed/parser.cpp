#include "parser.h"
#include <iostream>
#include <cctype>
using std::cin;
using std::cout;
using std::endl;

void Parser::Expr()
{
	
	while (true)
	{
		// oper -> + term term { print(+) } oper
		if (lookahead == '+')
		{
			Match('+');
			Term();
			Term();
			cout << '+';
		}
		// oper -> - term term { print(-) } oper
		else if (lookahead == '-')
		{
			Match('-');
			Term();
			Term();
			cout << '-';
		}
		// prodção vazia
		else return; 
	}
}

void Parser::Term() {
	if(isdigit(lookahead)) {
		cout << lookahead;
		Match(lookahead);
	} else
		throw SyntaxError{};
}

void Parser::Match(char t)
{
	if (t == lookahead)
		lookahead = cin.get();
	else
		throw SyntaxError{};
}

Parser::Parser()
{
	lookahead = 0; 
}

void Parser::Start()
{
	lookahead = cin.get();
	Expr();
	if (lookahead != '\n')
		throw SyntaxError{};
}
