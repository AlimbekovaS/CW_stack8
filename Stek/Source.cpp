#include"library.h"
//#include"stek.h"
//#include"stek.cpp"
#include<stack>


int main()
{
	//5
	/*stack<stack<int>> s;
	stack<int>in_s;

	int a[9] = { 8,1,2,3,4,5,2,4,9};

	s.push(in_s);
	s.top().push(a[0]);

	for (int i = 1;i < 9;i++)
	{
		if (s.top().top() < a[i])
			s.top().push(a[i]);
		else
		{
			s.push(in_s);
			s.top().push(a[i]);
		}
	}

	while (!s.empty())
	{
		while (!s.top().empty())
		{
			cout << s.top().top() << "\t";
			s.top().pop();
		}
		cout << endl;
		s.pop();*/
	//}
	/*Stack<int> s(a,3);
	s.push(3);
	s.push(5);
	
	while (!s.empty())
	{
		cout << s.top() << endl;
		s.pop();
	}*/

	/*cout << s.top() << endl;
	s.pop();
	cout << s.top() << endl;
	cout << s.empty() << endl;*/

	//8
	char s[] = ")this is {example}[(task) for my [group]] students";
	stack<char>s1; // for'('
	stack<char>s2; // for [
	stack<char>s3; //for {
	if (s[0] == ')' || s[0] == ']' || s[0] == '}')
		cout << "uncorrect" << endl;
	else
	{
		for (int i = 0;i < strlen(s);i++)
		{
			if (s[i] == '(')
				s1.push('(');
			else if (s[i] == '[')
				s2.push('[');
			else if (s[i] == '{')
				s3.push('{');
			else if (s[i] == ')')
			{
				if (!s1.empty())
					s1.pop();
				else
				{
					break;
					cout << "uncorrect brackets" << endl;
				}
			}
			else if (s[i] == ']')
			{
				if (!s2.empty())
					s2.pop();
				else
				{
					break;
					cout << "uncorrect brackets" << endl;
				}
			}
			else if (s[i] == '}')
			{
				if (!s3.empty())
					s3.pop();
				else
				{
					break;
					cout<<"uncorrect brackets" << endl;
				}
			}

		}
		if (s1.empty() && s2.empty() && s3.empty())
			cout << "Correct brackets" << endl;
		else
			cout << "Uncorrect bracets" << endl;
	}
	system("pause");
	return 0;
}