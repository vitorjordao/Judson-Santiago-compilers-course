class SyntaxError {};

class Parser
{
private:
	char lookahead;
	
	void Expr();
	void SubExpr();
	void Term();
	void Match(char t);

public:
	Parser();
	void Start();
};
