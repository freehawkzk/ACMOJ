#include <iostream>

#include <stack>
#include <string>
using namespace std;

bool bracketMatch(string s)
{
	std::stack<char> stackTemp;
	for (int i = 0; i < s.length(); i++)
	{
		char c = s[i];
		if (c == '[')
		{
			stackTemp.push(c);
		}
		else if (c == '(')
		{
			stackTemp.push(c);
		}
		else if (c == ']')
		{
			if (stackTemp.empty())
			{
				return false;
			}
			else
			{
				if (stackTemp.top() != '[')
				{
					return false;
				}
				else
					stackTemp.pop();
			}
		}
		else
		{
			if (stackTemp.empty())
			{
				return false;
			}
			else
			{
				if (stackTemp.top() != '(')
				{
					return false;
				}
				else
					stackTemp.pop();
			}
		}
	}
	return true;
}

int main()
{
	int n = 0;
	cin >> n;
	string s;
	for (int i = 0; i < n; i++)
	{
		cin >> s;

		if (bracketMatch(s))
		{
			std::cout << "Yes" << std::endl;
		}
		else
			std::cout << "No" << std::endl;
		
	}
	return 0;
}